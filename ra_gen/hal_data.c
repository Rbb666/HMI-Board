/* generated HAL source file - do not edit */
#include "hal_data.h"
dmac_instance_ctrl_t g_transfer0_ctrl;
transfer_info_t g_transfer0_info =
{
    .dest_addr_mode      = TRANSFER_ADDR_MODE_FIXED,
    .repeat_area         = TRANSFER_REPEAT_AREA_SOURCE,
    .irq                 = TRANSFER_IRQ_END,
    .chain_mode          = TRANSFER_CHAIN_MODE_DISABLED,
    .src_addr_mode       = TRANSFER_ADDR_MODE_INCREMENTED,
    .size                = TRANSFER_SIZE_4_BYTE,
    .mode                = TRANSFER_MODE_NORMAL,
    .p_dest              = (void *) NULL,
    .p_src               = (void const *) NULL,
    .num_blocks          = 0,
    .length              = 128,
};
const dmac_extended_cfg_t g_transfer0_extend =
{
    .offset              = 1,
    .src_buffer_size     = 1,
#if defined(VECTOR_NUMBER_DMAC0_INT)
    .irq                 = VECTOR_NUMBER_DMAC0_INT,
#else
    .irq                 = FSP_INVALID_VECTOR,
#endif
    .ipl                 = (12),
    .channel             = 0,
    .p_callback          = g_sdmmc1_dmac_callback,
    .p_context           = NULL,
    .activation_source   = ELC_EVENT_SDHIMMC1_DMA_REQ,
};
const transfer_cfg_t g_transfer0_cfg =
{
    .p_info              = &g_transfer0_info,
    .p_extend            = &g_transfer0_extend,
};
/* Instance structure to use this module. */
const transfer_instance_t g_transfer0 =
{
    .p_ctrl        = &g_transfer0_ctrl,
    .p_cfg         = &g_transfer0_cfg,
    .p_api         = &g_transfer_on_dmac
};
#define RA_NOT_DEFINED (UINT32_MAX)
#if (RA_NOT_DEFINED) != (1)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
#include "r_dmac.h"
extern void r_sdhi_transfer_callback(sdhi_instance_ctrl_t * p_ctrl);

void g_sdmmc1_dmac_callback (dmac_callback_args_t * p_args)
{
    r_sdhi_transfer_callback((sdhi_instance_ctrl_t *) p_args->p_context);
}
#endif
#undef RA_NOT_DEFINED

sdhi_instance_ctrl_t g_sdmmc1_ctrl;
sdmmc_cfg_t g_sdmmc1_cfg =
{
    .bus_width              = SDMMC_BUS_WIDTH_4_BITS,
    .channel                = 1,
    .p_callback             = NULL,
    .p_context              = NULL,
    .block_size             = 512,
    .card_detect            = SDMMC_CARD_DETECT_CD,
    .write_protect          = SDMMC_WRITE_PROTECT_NONE,

    .p_extend               = NULL,
    .p_lower_lvl_transfer   = &g_transfer0,

    .access_ipl             = (12),
    .sdio_ipl               = BSP_IRQ_DISABLED,
    .card_ipl               = (12),
    .dma_req_ipl            = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_SDHIMMC1_ACCS)
    .access_irq             = VECTOR_NUMBER_SDHIMMC1_ACCS,
#else
    .access_irq             = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SDHIMMC1_CARD)
    .card_irq               = VECTOR_NUMBER_SDHIMMC1_CARD,
#else
    .card_irq               = FSP_INVALID_VECTOR,
#endif
    .sdio_irq               = FSP_INVALID_VECTOR,
#if defined(VECTOR_NUMBER_SDHIMMC1_DMA_REQ)
    .dma_req_irq            = VECTOR_NUMBER_SDHIMMC1_DMA_REQ,
#else
    .dma_req_irq            = FSP_INVALID_VECTOR,
#endif
};
/* Instance structure to use this module. */
const sdmmc_instance_t g_sdmmc1 =
{
    .p_ctrl        = &g_sdmmc1_ctrl,
    .p_cfg         = &g_sdmmc1_cfg,
    .p_api         = &g_sdmmc_on_sdhi
};
sci_uart_instance_ctrl_t     g_uart4_ctrl;

            baud_setting_t               g_uart4_baud_setting =
            {
                /* Baud rate calculated with 0.160% error. */ .abcse = 0, .abcs = 0, .bgdm = 1, .cks = 0, .brr = 64, .mddr = (uint8_t) 256, .brme = false
            };

            /** UART extended configuration for UARTonSCI HAL driver */
            const sci_uart_extended_cfg_t g_uart4_cfg_extend =
            {
                .clock                = SCI_UART_CLOCK_INT,
                .rx_edge_start          = SCI_UART_START_BIT_FALLING_EDGE,
                .noise_cancel         = SCI_UART_NOISE_CANCELLATION_DISABLE,
                .rx_fifo_trigger        = SCI_UART_RX_FIFO_TRIGGER_MAX,
                .p_baud_setting         = &g_uart4_baud_setting,
                .flow_control           = SCI_UART_FLOW_CONTROL_RTS,
                #if 0xFF != 0xFF
                .flow_control_pin       = BSP_IO_PORT_FF_PIN_0xFF,
                #else
                .flow_control_pin       = (bsp_io_port_pin_t) UINT16_MAX,
                #endif
            };

            /** UART interface configuration */
            const uart_cfg_t g_uart4_cfg =
            {
                .channel             = 4,
                .data_bits           = UART_DATA_BITS_8,
                .parity              = UART_PARITY_OFF,
                .stop_bits           = UART_STOP_BITS_1,
                .p_callback          = user_uart4_callback,
                .p_context           = NULL,
                .p_extend            = &g_uart4_cfg_extend,
#define RA_NOT_DEFINED (1)
#if (RA_NOT_DEFINED == RA_NOT_DEFINED)
                .p_transfer_tx       = NULL,
#else
                .p_transfer_tx       = &RA_NOT_DEFINED,
#endif
#if (RA_NOT_DEFINED == RA_NOT_DEFINED)
                .p_transfer_rx       = NULL,
#else
                .p_transfer_rx       = &RA_NOT_DEFINED,
#endif
#undef RA_NOT_DEFINED
                .rxi_ipl             = (12),
                .txi_ipl             = (12),
                .tei_ipl             = (12),
                .eri_ipl             = (12),
#if defined(VECTOR_NUMBER_SCI4_RXI)
                .rxi_irq             = VECTOR_NUMBER_SCI4_RXI,
#else
                .rxi_irq             = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI4_TXI)
                .txi_irq             = VECTOR_NUMBER_SCI4_TXI,
#else
                .txi_irq             = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI4_TEI)
                .tei_irq             = VECTOR_NUMBER_SCI4_TEI,
#else
                .tei_irq             = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI4_ERI)
                .eri_irq             = VECTOR_NUMBER_SCI4_ERI,
#else
                .eri_irq             = FSP_INVALID_VECTOR,
#endif
            };

/* Instance structure to use this module. */
const uart_instance_t g_uart4 =
{
    .p_ctrl        = &g_uart4_ctrl,
    .p_cfg         = &g_uart4_cfg,
    .p_api         = &g_uart_on_sci
};
void g_hal_init(void) {
g_common_init();
}