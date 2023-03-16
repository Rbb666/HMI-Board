#include <rtthread.h>
#include "hal_data.h"

#ifdef BSP_USING_FS

#include <dfs_fs.h>
#include <drv_sdhi.h>

#define DBG_TAG "app.filesystem"
#define DBG_LVL DBG_INFO
#include <rtdbg.h>

#ifdef BSP_USING_SDCARD_FS

/* SD Card hot plug detection pin */
//#define SD_CHECK_PIN BSP_IO_PORT_05_PIN_06

static void _sdcard_mount(void)
{
    rt_device_t device;

    device = rt_device_find("sd0");

    if (device == NULL)
    {
        mmcsd_wait_cd_changed(0);
        sdcard_change();
        mmcsd_wait_cd_changed(RT_WAITING_FOREVER);
        device = rt_device_find("sd0");
    }

    if (device != RT_NULL)
    {
        if (dfs_mount("sd0", "/", "elm", 0, 0) == RT_EOK)
        {
            LOG_I("sd card mount to '/'");
        }
        else
        {
            LOG_W("sd card mount to '/' failed!");
        }
    }
}

static void _sdcard_unmount(void)
{
    rt_thread_mdelay(200);
    dfs_unmount("/");
    LOG_I("Unmount \"/\"");

    mmcsd_wait_cd_changed(0);
    sdcard_change();
    mmcsd_wait_cd_changed(RT_WAITING_FOREVER);
}

static void sd_mount(void)
{
    rt_thread_mdelay(200);

	_sdcard_mount();
}

#endif /* BSP_USING_SDCARD_FS */

int mount_init(void)
{
#ifdef BSP_USING_SDCARD_FS
    sd_mount();
#endif
    return RT_EOK;
}
INIT_APP_EXPORT(mount_init);
#endif
