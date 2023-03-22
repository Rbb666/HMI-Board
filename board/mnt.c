#include <rtthread.h>
#include "hal_data.h"

#ifdef BSP_USING_FS

#include <dfs_fs.h>

#define DBG_TAG "app.filesystem"
#define DBG_LVL DBG_INFO
#include <rtdbg.h>

#ifdef BSP_USING_SDCARD_FS
#include <drv_sdhi.h>
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

static void sd_mount(void)
{
    rt_thread_mdelay(200);

	_sdcard_mount();
}

#else
#include <spi_msd.h>
#include "drv_sci_spi.h"
int sd_mount(void)
{
    uint32_t cs_pin = BSP_IO_PORT_03_PIN_07;
    rt_hw_spi_device_attach("scpi6", "scpi60", cs_pin, RT_NULL);
    msd_init("sd0", "scpi60");
    if (dfs_mount("sd0", "/", "elm", 0, 0) == 0)
    {
        rt_kprintf("Mount \"/dev/sd0\" on \"/\"\n");
    }
    return 0;
}
#endif /* BSP_USING_SDCARD_FS */

int mount_init(void)
{
    sd_mount();
    return RT_EOK;
}
INIT_ENV_EXPORT(mount_init);
#endif
