/* generated vector source file - do not edit */
        #include "bsp_api.h"
        /* Do not build these data structures if no interrupts are currently allocated because IAR will have build errors. */
        #if VECTOR_DATA_IRQ_COUNT > 0
        BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_ICU_VECTOR_MAX_ENTRIES] BSP_PLACE_IN_SECTION(BSP_SECTION_APPLICATION_VECTORS) =
        {
                        [0] = sci_uart_rxi_isr, /* SCI4 RXI (Received data full) */
            [1] = sci_uart_txi_isr, /* SCI4 TXI (Transmit data empty) */
            [2] = sci_uart_tei_isr, /* SCI4 TEI (Transmit end) */
            [3] = sci_uart_eri_isr, /* SCI4 ERI (Receive error) */
            [4] = sdhimmc_accs_isr, /* SDHIMMC1 ACCS (Card access) */
            [5] = sdhimmc_card_isr, /* SDHIMMC1 CARD (Card detect) */
            [6] = dmac_int_isr, /* DMAC0 INT (DMAC transfer end 0) */
        };
        const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_MAX_ENTRIES] =
        {
            [0] = BSP_PRV_IELS_ENUM(EVENT_SCI4_RXI), /* SCI4 RXI (Received data full) */
            [1] = BSP_PRV_IELS_ENUM(EVENT_SCI4_TXI), /* SCI4 TXI (Transmit data empty) */
            [2] = BSP_PRV_IELS_ENUM(EVENT_SCI4_TEI), /* SCI4 TEI (Transmit end) */
            [3] = BSP_PRV_IELS_ENUM(EVENT_SCI4_ERI), /* SCI4 ERI (Receive error) */
            [4] = BSP_PRV_IELS_ENUM(EVENT_SDHIMMC1_ACCS), /* SDHIMMC1 ACCS (Card access) */
            [5] = BSP_PRV_IELS_ENUM(EVENT_SDHIMMC1_CARD), /* SDHIMMC1 CARD (Card detect) */
            [6] = BSP_PRV_IELS_ENUM(EVENT_DMAC0_INT), /* DMAC0 INT (DMAC transfer end 0) */
        };
        #endif