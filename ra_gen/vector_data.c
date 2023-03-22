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
            [7] = glcdc_line_detect_isr, /* GLCDC LINE DETECT (Specified line) */
            [8] = drw_int_isr, /* DRW INT (Display list interrupt) */
            [9] = jpeg_jedi_isr, /* JPEG JEDI (Compression/decompression process interrupt) */
            [10] = jpeg_jdti_isr, /* JPEG JDTI (Data transfer interrupt) */
            [11] = gpt_counter_overflow_isr, /* GPT2 COUNTER OVERFLOW (Overflow) */
            [12] = sci_spi_rxi_isr, /* SCI6 RXI (Received data full) */
            [13] = sci_spi_txi_isr, /* SCI6 TXI (Transmit data empty) */
            [14] = sci_spi_tei_isr, /* SCI6 TEI (Transmit end) */
            [15] = sci_spi_eri_isr, /* SCI6 ERI (Receive error) */
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
            [7] = BSP_PRV_IELS_ENUM(EVENT_GLCDC_LINE_DETECT), /* GLCDC LINE DETECT (Specified line) */
            [8] = BSP_PRV_IELS_ENUM(EVENT_DRW_INT), /* DRW INT (Display list interrupt) */
            [9] = BSP_PRV_IELS_ENUM(EVENT_JPEG_JEDI), /* JPEG JEDI (Compression/decompression process interrupt) */
            [10] = BSP_PRV_IELS_ENUM(EVENT_JPEG_JDTI), /* JPEG JDTI (Data transfer interrupt) */
            [11] = BSP_PRV_IELS_ENUM(EVENT_GPT2_COUNTER_OVERFLOW), /* GPT2 COUNTER OVERFLOW (Overflow) */
            [12] = BSP_PRV_IELS_ENUM(EVENT_SCI6_RXI), /* SCI6 RXI (Received data full) */
            [13] = BSP_PRV_IELS_ENUM(EVENT_SCI6_TXI), /* SCI6 TXI (Transmit data empty) */
            [14] = BSP_PRV_IELS_ENUM(EVENT_SCI6_TEI), /* SCI6 TEI (Transmit end) */
            [15] = BSP_PRV_IELS_ENUM(EVENT_SCI6_ERI), /* SCI6 ERI (Receive error) */
        };
        #endif