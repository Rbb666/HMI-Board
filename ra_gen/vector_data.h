/* generated vector header file - do not edit */
        #ifndef VECTOR_DATA_H
        #define VECTOR_DATA_H
                /* Number of interrupts allocated */
        #ifndef VECTOR_DATA_IRQ_COUNT
        #define VECTOR_DATA_IRQ_COUNT    (16)
        #endif
        /* ISR prototypes */
        void sci_uart_rxi_isr(void);
        void sci_uart_txi_isr(void);
        void sci_uart_tei_isr(void);
        void sci_uart_eri_isr(void);
        void sdhimmc_accs_isr(void);
        void sdhimmc_card_isr(void);
        void dmac_int_isr(void);
        void glcdc_line_detect_isr(void);
        void drw_int_isr(void);
        void jpeg_jedi_isr(void);
        void jpeg_jdti_isr(void);
        void gpt_counter_overflow_isr(void);
        void sci_spi_rxi_isr(void);
        void sci_spi_txi_isr(void);
        void sci_spi_tei_isr(void);
        void sci_spi_eri_isr(void);

        /* Vector table allocations */
        #define VECTOR_NUMBER_SCI4_RXI ((IRQn_Type) 0) /* SCI4 RXI (Received data full) */
        #define SCI4_RXI_IRQn          ((IRQn_Type) 0) /* SCI4 RXI (Received data full) */
        #define VECTOR_NUMBER_SCI4_TXI ((IRQn_Type) 1) /* SCI4 TXI (Transmit data empty) */
        #define SCI4_TXI_IRQn          ((IRQn_Type) 1) /* SCI4 TXI (Transmit data empty) */
        #define VECTOR_NUMBER_SCI4_TEI ((IRQn_Type) 2) /* SCI4 TEI (Transmit end) */
        #define SCI4_TEI_IRQn          ((IRQn_Type) 2) /* SCI4 TEI (Transmit end) */
        #define VECTOR_NUMBER_SCI4_ERI ((IRQn_Type) 3) /* SCI4 ERI (Receive error) */
        #define SCI4_ERI_IRQn          ((IRQn_Type) 3) /* SCI4 ERI (Receive error) */
        #define VECTOR_NUMBER_SDHIMMC1_ACCS ((IRQn_Type) 4) /* SDHIMMC1 ACCS (Card access) */
        #define SDHIMMC1_ACCS_IRQn          ((IRQn_Type) 4) /* SDHIMMC1 ACCS (Card access) */
        #define VECTOR_NUMBER_SDHIMMC1_CARD ((IRQn_Type) 5) /* SDHIMMC1 CARD (Card detect) */
        #define SDHIMMC1_CARD_IRQn          ((IRQn_Type) 5) /* SDHIMMC1 CARD (Card detect) */
        #define VECTOR_NUMBER_DMAC0_INT ((IRQn_Type) 6) /* DMAC0 INT (DMAC transfer end 0) */
        #define DMAC0_INT_IRQn          ((IRQn_Type) 6) /* DMAC0 INT (DMAC transfer end 0) */
        #define VECTOR_NUMBER_GLCDC_LINE_DETECT ((IRQn_Type) 7) /* GLCDC LINE DETECT (Specified line) */
        #define GLCDC_LINE_DETECT_IRQn          ((IRQn_Type) 7) /* GLCDC LINE DETECT (Specified line) */
        #define VECTOR_NUMBER_DRW_INT ((IRQn_Type) 8) /* DRW INT (Display list interrupt) */
        #define DRW_INT_IRQn          ((IRQn_Type) 8) /* DRW INT (Display list interrupt) */
        #define VECTOR_NUMBER_JPEG_JEDI ((IRQn_Type) 9) /* JPEG JEDI (Compression/decompression process interrupt) */
        #define JPEG_JEDI_IRQn          ((IRQn_Type) 9) /* JPEG JEDI (Compression/decompression process interrupt) */
        #define VECTOR_NUMBER_JPEG_JDTI ((IRQn_Type) 10) /* JPEG JDTI (Data transfer interrupt) */
        #define JPEG_JDTI_IRQn          ((IRQn_Type) 10) /* JPEG JDTI (Data transfer interrupt) */
        #define VECTOR_NUMBER_GPT2_COUNTER_OVERFLOW ((IRQn_Type) 11) /* GPT2 COUNTER OVERFLOW (Overflow) */
        #define GPT2_COUNTER_OVERFLOW_IRQn          ((IRQn_Type) 11) /* GPT2 COUNTER OVERFLOW (Overflow) */
        #define VECTOR_NUMBER_SCI6_RXI ((IRQn_Type) 12) /* SCI6 RXI (Received data full) */
        #define SCI6_RXI_IRQn          ((IRQn_Type) 12) /* SCI6 RXI (Received data full) */
        #define VECTOR_NUMBER_SCI6_TXI ((IRQn_Type) 13) /* SCI6 TXI (Transmit data empty) */
        #define SCI6_TXI_IRQn          ((IRQn_Type) 13) /* SCI6 TXI (Transmit data empty) */
        #define VECTOR_NUMBER_SCI6_TEI ((IRQn_Type) 14) /* SCI6 TEI (Transmit end) */
        #define SCI6_TEI_IRQn          ((IRQn_Type) 14) /* SCI6 TEI (Transmit end) */
        #define VECTOR_NUMBER_SCI6_ERI ((IRQn_Type) 15) /* SCI6 ERI (Receive error) */
        #define SCI6_ERI_IRQn          ((IRQn_Type) 15) /* SCI6 ERI (Receive error) */
        #endif /* VECTOR_DATA_H */