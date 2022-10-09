// MIT License
//
// Copyright (c) 2022 Mark Saunders
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//

#include <stdint.h>

// Alias for dummy
#define PLACEHOLDER __attribute__((weak, alias("ISR_Dummy")))

void ResetHandler(void);
PLACEHOLDER void INT_Illegal_code(void);
PLACEHOLDER void INT_Trace(void);
PLACEHOLDER void INT_NMI(void);
PLACEHOLDER void INT_TRAP0(void);
PLACEHOLDER void INT_TRAP1(void);
PLACEHOLDER void INT_TRAP2(void);
PLACEHOLDER void INT_TRAP3(void);
PLACEHOLDER void INT_CPU_Address(void);
PLACEHOLDER void INT_DMA_Address(void);
PLACEHOLDER void INT_Sleep(void);
PLACEHOLDER void INT_IRQ0(void);
PLACEHOLDER void INT_IRQ1(void);
PLACEHOLDER void INT_IRQ2(void);
PLACEHOLDER void INT_IRQ3(void);
PLACEHOLDER void INT_IRQ4(void);
PLACEHOLDER void INT_IRQ5(void);
PLACEHOLDER void INT_IRQ6(void);
PLACEHOLDER void INT_IRQ7(void);
PLACEHOLDER void INT_IRQ8(void);
PLACEHOLDER void INT_IRQ9(void);
PLACEHOLDER void INT_IRQ10(void);
PLACEHOLDER void INT_IRQ11(void);
PLACEHOLDER void INT_32KOVI_TM32K(void);
PLACEHOLDER void INT_WOVI(void);
PLACEHOLDER void INT_CMI(void);
PLACEHOLDER void INT_ADI(void);
PLACEHOLDER void INT_TGI0A_TPU0(void);
PLACEHOLDER void INT_TGI0B_TPU0(void);
PLACEHOLDER void INT_TGI0C_TPU0(void);
PLACEHOLDER void INT_TGI0D_TPU0(void);
PLACEHOLDER void INT_TCI0V_TPU0(void);
PLACEHOLDER void INT_TGI1A_TPU1(void);
PLACEHOLDER void INT_TGI1B_TPU1(void);
PLACEHOLDER void INT_TCI1V_TPU1(void);
PLACEHOLDER void INT_TCI1U_TPU1(void);
PLACEHOLDER void INT_TGI2A_TPU2(void);
PLACEHOLDER void INT_TGI2B_TPU2(void);
PLACEHOLDER void INT_TCI2V_TPU2(void);
PLACEHOLDER void INT_TCI2U_TPU2(void);
PLACEHOLDER void INT_TGI3A_TPU3(void);
PLACEHOLDER void INT_TGI3B_TPU3(void);
PLACEHOLDER void INT_TGI3C_TPU3(void);
PLACEHOLDER void INT_TGI3D_TPU3(void);
PLACEHOLDER void INT_TCI3V_TPU3(void);
PLACEHOLDER void INT_TGI4A_TPU4(void);
PLACEHOLDER void INT_TGI4B_TPU4(void);
PLACEHOLDER void INT_TCI4V_TPU4(void);
PLACEHOLDER void INT_TCI4U_TPU4(void);
PLACEHOLDER void INT_TGI5A_TPU5(void);
PLACEHOLDER void INT_TGI5B_TPU5(void);
PLACEHOLDER void INT_TCI5V_TPU5(void);
PLACEHOLDER void INT_TCI5U_TPU5(void);
PLACEHOLDER void INT_CMIA0_TMR0(void);
PLACEHOLDER void INT_CMIB0_TMR0(void);
PLACEHOLDER void INT_OVI0_TMR0(void);
PLACEHOLDER void INT_CMIA1_TMR1(void);
PLACEHOLDER void INT_CMIB1_TMR1(void);
PLACEHOLDER void INT_OVI1_TMR1(void);
PLACEHOLDER void INT_CMIA2_TMR2(void);
PLACEHOLDER void INT_CMIB2_TMR2(void);
PLACEHOLDER void INT_OVI2_TMR2(void);
PLACEHOLDER void INT_CMIA3_TMR3(void);
PLACEHOLDER void INT_CMIB3_TMR3(void);
PLACEHOLDER void INT_OVI3_TMR3(void);
PLACEHOLDER void INT_TEND0_DMAC(void);
PLACEHOLDER void INT_TEND1_DMAC(void);
PLACEHOLDER void INT_TEND2_DMAC(void);
PLACEHOLDER void INT_TEND3_DMAC(void);
PLACEHOLDER void INT_TEND0_EXDMAC(void);
PLACEHOLDER void INT_TEND1_EXDMAC(void);
PLACEHOLDER void INT_TEND2_EXDMAC(void);
PLACEHOLDER void INT_TEND3_EXDMAC(void);
PLACEHOLDER void INT_EEND0_DMAC(void);
PLACEHOLDER void INT_EEND1_DMAC(void);
PLACEHOLDER void INT_EEND2_DMAC(void);
PLACEHOLDER void INT_EEND3_DMAC(void);
PLACEHOLDER void INT_EEND0_EXDMAC(void);
PLACEHOLDER void INT_EEND1_EXDMAC(void);
PLACEHOLDER void INT_EEND2_EXDMAC(void);
PLACEHOLDER void INT_EEND3_EXDMAC(void);
PLACEHOLDER void INT_ERI0_SCI0(void);
PLACEHOLDER void INT_RXI0_SCI0(void);
PLACEHOLDER void INT_TXI0_SCI0(void);
PLACEHOLDER void INT_TEI0_SCI0(void);
PLACEHOLDER void INT_ERI1_SCI1(void);
PLACEHOLDER void INT_RXI1_SCI1(void);
PLACEHOLDER void INT_TXI1_SCI1(void);
PLACEHOLDER void INT_TEI1_SCI1(void);
PLACEHOLDER void INT_ERI2_SCI2(void);
PLACEHOLDER void INT_RXI2_SCI2(void);
PLACEHOLDER void INT_TXI2_SCI2(void);
PLACEHOLDER void INT_TEI2_SCI2(void);
PLACEHOLDER void INT_ERI4_SCI4(void);
PLACEHOLDER void INT_RXI4_SCI4(void);
PLACEHOLDER void INT_TXI4_SCI4(void);
PLACEHOLDER void INT_TEI4_SCI4(void);
PLACEHOLDER void INT_TGI6A_TPU6(void);
PLACEHOLDER void INT_TGI6B_TPU6(void);
PLACEHOLDER void INT_TGI6C_TPU6(void);
PLACEHOLDER void INT_TGI6D_TPU6(void);
PLACEHOLDER void INT_TGI6V_TPU6(void);
PLACEHOLDER void INT_TGI7A_TPU7(void);
PLACEHOLDER void INT_TGI7B_TPU7(void);
PLACEHOLDER void INT_TGI7V_TPU7(void);
PLACEHOLDER void INT_TGI7U_TPU7(void);
PLACEHOLDER void INT_TGI8A_TPU8(void);
PLACEHOLDER void INT_TGI8B_TPU8(void);
PLACEHOLDER void INT_TGI8V_TPU8(void);
PLACEHOLDER void INT_TGI8U_TPU8(void);
PLACEHOLDER void INT_TGI9A_TPU9(void);
PLACEHOLDER void INT_TGI9B_TPU9(void);
PLACEHOLDER void INT_TGI9C_TPU9(void);
PLACEHOLDER void INT_TGI9D_TPU9(void);
PLACEHOLDER void INT_TGI9V_TPU9(void);
PLACEHOLDER void INT_TGI10A_TPU10(void);
PLACEHOLDER void INT_TGI10B_TPU10(void);
PLACEHOLDER void INT_TGI10V_TPU10(void);
PLACEHOLDER void INT_TGI10U_TPU10(void);
PLACEHOLDER void INT_TGI11A_TPU11(void);
PLACEHOLDER void INT_TGI11B_TPU11(void);
PLACEHOLDER void INT_TGI11V_TPU11(void);
PLACEHOLDER void INT_TGI11U_TPU11(void);
PLACEHOLDER void INT_IICI0_IIC2(void);
PLACEHOLDER void INT_IICI1_IIC2(void);
PLACEHOLDER void INT_RXI5_SCI5(void);
PLACEHOLDER void INT_TXI5_SCI5(void);
PLACEHOLDER void INT_ERI5_SCI5(void);
PLACEHOLDER void INT_TEI5_SCI5(void);
PLACEHOLDER void INT_RXI6_SCI6(void);
PLACEHOLDER void INT_TXI6_SCI6(void);
PLACEHOLDER void INT_ERI6_SCI6(void);
PLACEHOLDER void INT_TEI6_SCI6(void);
PLACEHOLDER void INT_CMIA4_CMIB4_TMR4(void);
PLACEHOLDER void INT_CMIA5_CMIB5_TMR5(void);
PLACEHOLDER void INT_CMIA6_CMIB6_TMR6(void);
PLACEHOLDER void INT_CMIA7_CMIB7_TMR7(void);
PLACEHOLDER void INT_USBINTN0_USB(void);
PLACEHOLDER void INT_USBINTN1_USB(void);
PLACEHOLDER void INT_USBINTN2_USB(void);
PLACEHOLDER void INT_USBINTN3_USB(void);
PLACEHOLDER void INT_ADI1(void);
PLACEHOLDER void INT_RESUME_USB(void);

typedef void isr_vector_t(void);

#define RESERVED (isr_vector_t *) 0x00

__attribute__((used, section(".vectors")))
isr_vector_t *const vectors[] = {
    // vector 0 Power on reset
    ResetHandler,
    // vector 1 Reserved
    RESERVED,
    // vector 2 Reserved
    RESERVED,
    // vector 3 Reserved
    RESERVED,
    // vector 4 Illegal code
    INT_Illegal_code,
    // vector 5 Trace
    INT_Trace,
    // vector 6 Reserved
    RESERVED,
    // vector 7 NMI
    INT_NMI,
    // vector 8 trap #0
    INT_TRAP0,
    // vector 9 trap #1
    INT_TRAP1,
    // vector 10 trap #2
    INT_TRAP2,
    // vector 11 trap #3
    INT_TRAP3,
    // vector 12 CPU Address error
    INT_CPU_Address,
    // vector 13 DMA Address error
    INT_DMA_Address,
    // vector 14 Reserved
    RESERVED,
    // vector 15 Reserved
    RESERVED,
    // vector 16 Reserved
    RESERVED,
    // vector 17 Reserved
    RESERVED,
    // vector 18 Sleep
    INT_Sleep,
    // vector 19 Reserved
    RESERVED,
    // vector 20 Reserved
    RESERVED,
    // vector 21 Reserved
    RESERVED,
    // vector 22 Reserved
    RESERVED,
    // vector 23 Reserved
    RESERVED,
    // vector 24 Reserved
    RESERVED,
    // vector 25 Reserved
    RESERVED,
    // vector 26 Reserved
    RESERVED,
    // vector 27 Reserved
    RESERVED,
    // vector 28 Reserved
    RESERVED,
    // vector 29 Reserved
    RESERVED,
    // vector 30 Reserved
    RESERVED,
    // vector 31 Reserved
    RESERVED,
    // vector 32 Reserved
    RESERVED,
    // vector 33 Reserved
    RESERVED,
    // vector 34 Reserved
    RESERVED,
    // vector 35 Reserved
    RESERVED,
    // vector 36 Reserved
    RESERVED,
    // vector 37 Reserved
    RESERVED,
    // vector 38 Reserved
    RESERVED,
    // vector 39 Reserved
    RESERVED,
    // vector 40 Reserved
    RESERVED,
    // vector 41 Reserved
    RESERVED,
    // vector 42 Reserved
    RESERVED,
    // vector 43 Reserved
    RESERVED,
    // vector 44 Reserved
    RESERVED,
    // vector 45 Reserved
    RESERVED,
    // vector 46 Reserved
    RESERVED,
    // vector 47 Reserved
    RESERVED,
    // vector 48 Reserved
    RESERVED,
    // vector 49 Reserved
    RESERVED,
    // vector 50 Reserved
    RESERVED,
    // vector 51 Reserved
    RESERVED,
    // vector 52 Reserved
    RESERVED,
    // vector 53 Reserved
    RESERVED,
    // vector 54 Reserved
    RESERVED,
    // vector 55 Reserved
    RESERVED,
    // vector 56 Reserved
    RESERVED,
    // vector 57 Reserved
    RESERVED,
    // vector 58 Reserved
    RESERVED,
    // vector 59 Reserved
    RESERVED,
    // vector 60 Reserved
    RESERVED,
    // vector 61 Reserved
    RESERVED,
    // vector 62 Reserved
    RESERVED,
    // vector 63 Reserved
    RESERVED,
    // vector 64 External trap IRQ0
    INT_IRQ0,
    // vector 65 External trap IRQ1
    INT_IRQ1,
    // vector 66 External trap IRQ2
    INT_IRQ2,
    // vector 67 External trap IRQ3
    INT_IRQ3,
    // vector 68 External trap IRQ4
    INT_IRQ4,
    // vector 69 External trap IRQ5
    INT_IRQ5,
    // vector 70 External trap IRQ6
    INT_IRQ6,
    // vector 71 External trap IRQ7
    INT_IRQ7,
    // vector 72 External trap IRQ8
    INT_IRQ8,
    // vector 73 External trap IRQ9
    INT_IRQ9,
    // vector 74 External trap IRQ10
    INT_IRQ10,
    // vector 75 External trap IRQ11
    INT_IRQ11,
    // vector 76 Reserved
    RESERVED,
    // vector 77 Reserved
    RESERVED,
    // vector 78 Reserved
    RESERVED,
    // vector 79 32KOVI TM32K
    INT_32KOVI_TM32K,
    // vector 80 Reserved
    RESERVED,
    // vector 81 WOVI
    INT_WOVI,
    // vector 82 Reserved
    RESERVED,
    // vector 83 CMI
    INT_CMI,
    // vector 84 Reserved
    RESERVED,
    // vector 85 Reserved
    RESERVED,
    // vector 86 ADI
    INT_ADI,
    // vector 87 Reserved
    RESERVED,
    // vector 88 TGI0A TPU0
    INT_TGI0A_TPU0,
    // vector 89 TGI0B TPU0
    INT_TGI0B_TPU0,
    // vector 90 TGI0C TPU0
    INT_TGI0C_TPU0,
    // vector 91 TGI0D TPU0
    INT_TGI0D_TPU0,
    // vector 92 TCI0V TPU0
    INT_TCI0V_TPU0,
    // vector 93 TGI1A TPU1
    INT_TGI1A_TPU1,
    // vector 94 TGI1B TPU1
    INT_TGI1B_TPU1,
    // vector 95 TCI1V TPU1
    INT_TCI1V_TPU1,
    // vector 96 TCI1U TPU1
    INT_TCI1U_TPU1,
    // vector 97 TGI2A TPU2
    INT_TGI2A_TPU2,
    // vector 98 TGI2B TPU2
    INT_TGI2B_TPU2,
    // vector 99 TCI2V TPU2
    INT_TCI2V_TPU2,
    // vector 100 TCI2U TPU2
    INT_TCI2U_TPU2,
    // vector 101 TGI3A TPU3
    INT_TGI3A_TPU3,
    // vector 102 TGI3B TPU3
    INT_TGI3B_TPU3,
    // vector 103 TGI3C TPU3
    INT_TGI3C_TPU3,
    // vector 104 TGI3D TPU3
    INT_TGI3D_TPU3,
    // vector 105 TCI3V TPU3
    INT_TCI3V_TPU3,
    // vector 106 TGI4A TPU4
    INT_TGI4A_TPU4,
    // vector 107 TGI4B TPU4
    INT_TGI4B_TPU4,
    // vector 108 TCI4V TPU4
    INT_TCI4V_TPU4,
    // vector 109 TCI4U TPU4
    INT_TCI4U_TPU4,
    // vector 110 TGI5A TPU5
    INT_TGI5A_TPU5,
    // vector 111 TGI5B TPU5
    INT_TGI5B_TPU5,
    // vector 112 TCI5V TPU5
    INT_TCI5V_TPU5,
    // vector 113 TCI5U TPU5
    INT_TCI5U_TPU5,
    // vector 114 Reserved
    RESERVED,
    // vector 115 Reserved
    RESERVED,
    // vector 116 CMIA0 TMR0
    INT_CMIA0_TMR0,
    // vector 117 CMIB0 TMR0
    INT_CMIB0_TMR0,
    // vector 118 OVI0 TMR0
    INT_OVI0_TMR0,
    // vector 119 CMIA1 TMR1
    INT_CMIA1_TMR1,
    // vector 120 CMIB1 TMR1
    INT_CMIB1_TMR1,
    // vector 121 OVI1 TMR1
    INT_OVI1_TMR1,
    // vector 122 CMIA2 TMR2
    INT_CMIA2_TMR2,
    // vector 123 CMIB2 TMR2
    INT_CMIB2_TMR2,
    // vector 124 OVI2 TMR2
    INT_OVI2_TMR2,
    // vector 125 CMIA3 TMR3
    INT_CMIA3_TMR3,
    // vector 126 CMIB3 TMR3
    INT_CMIB3_TMR3,
    // vector 127 OVI3 TMR3
    INT_OVI3_TMR3,
    // vector 128 TEND0 DMAC
    INT_TEND0_DMAC,
    // vector 129 TEND1 DMAC
    INT_TEND1_DMAC,
    // vector 130 TEND2 DMAC
    INT_TEND2_DMAC,
    // vector 131 TEND3 DMAC
    INT_TEND3_DMAC,
    // vector 132 TEND0 EXDMAC
    INT_TEND0_EXDMAC,
    // vector 133 TEND1 EXDMAC
    INT_TEND1_EXDMAC,
    // vector 134 TEND2 EXDMAC
    INT_TEND2_EXDMAC,
    // vector 135 TEND3 EXDMAC
    INT_TEND3_EXDMAC,
    // vector 136 EEND0 DMAC
    INT_EEND0_DMAC,
    // vector 137 EEND1 DMAC
    INT_EEND1_DMAC,
    // vector 138 EEND2 DMAC
    INT_EEND2_DMAC,
    // vector 139 EEND3 DMAC
    INT_EEND3_DMAC,
    // vector 140 EEND0 EXDMAC
    INT_EEND0_EXDMAC,
    // vector 141 EEND1 EXDMAC
    INT_EEND1_EXDMAC,
    // vector 142 EEND2 EXDMAC
    INT_EEND2_EXDMAC,
    // vector 143 EEND3 EXDMAC
    INT_EEND3_EXDMAC,
    // vector 144 ERI0 SCI0
    INT_ERI0_SCI0,
    // vector 145 RXI0 SCI0
    INT_RXI0_SCI0,
    // vector 146 TXI0 SCI0
    INT_TXI0_SCI0,
    // vector 147 TEI0 SCI0
    INT_TEI0_SCI0,
    // vector 148 ERI1 SCI1
    INT_ERI1_SCI1,
    // vector 149 RXI1 SCI1
    INT_RXI1_SCI1,
    // vector 150 TXI1 SCI1
    INT_TXI1_SCI1,
    // vector 151 TEI1 SCI1
    INT_TEI1_SCI1,
    // vector 152 ERI2 SCI2
    INT_ERI2_SCI2,
    // vector 153 RXI2 SCI2
    INT_RXI2_SCI2,
    // vector 154 TXI2 SCI2
    INT_TXI2_SCI2,
    // vector 155 TEI2 SCI2
    INT_TEI2_SCI2,
    // vector 156 Reserved
    RESERVED,
    // vector 157 Reserved
    RESERVED,
    // vector 158 Reserved
    RESERVED,
    // vector 159 Reserved
    RESERVED,
    // vector 160 ERI4 SCI4
    INT_ERI4_SCI4,
    // vector 161 RXI4 SCI4
    INT_RXI4_SCI4,
    // vector 162 TXI4 SCI4
    INT_TXI4_SCI4,
    // vector 163 TEI4 SCI4
    INT_TEI4_SCI4,
    // vector 164 TGI6A TPU6
    INT_TGI6A_TPU6,
    // vector 165 TGI6B TPU6
    INT_TGI6B_TPU6,
    // vector 166 TGI6C TPU6
    INT_TGI6C_TPU6,
    // vector 167 TGI6D TPU6
    INT_TGI6D_TPU6,
    // vector 168 TGI6V TPU6
    INT_TGI6V_TPU6,
    // vector 169 TGI7A TPU7
    INT_TGI7A_TPU7,
    // vector 170 TGI7B TPU7
    INT_TGI7B_TPU7,
    // vector 171 TGI7V TPU7
    INT_TGI7V_TPU7,
    // vector 172 TGI7U TPU7
    INT_TGI7U_TPU7,
    // vector 173 TGI8A TPU8
    INT_TGI8A_TPU8,
    // vector 174 TGI8B TPU8
    INT_TGI8B_TPU8,
    // vector 175 TGI8V TPU8
    INT_TGI8V_TPU8,
    // vector 176 TGI8U TPU8
    INT_TGI8U_TPU8,
    // vector 177 TGI9A TPU9
    INT_TGI9A_TPU9,
    // vector 178 TGI9B TPU9
    INT_TGI9B_TPU9,
    // vector 179 TGI9C TPU9
    INT_TGI9C_TPU9,
    // vector 180 TGI9D TPU9
    INT_TGI9D_TPU9,
    // vector 181 TGI9V TPU9
    INT_TGI9V_TPU9,
    // vector 182 TGI10A TPU10
    INT_TGI10A_TPU10,
    // vector 183 TGI10B TPU10
    INT_TGI10B_TPU10,
    // vector 184 Reserved
    RESERVED,
    // vector 185 Reserved
    RESERVED,
    // vector 186 TGI10V TPU10
    INT_TGI10V_TPU10,
    // vector 187 TGI10U TPU10
    INT_TGI10U_TPU10,
    // vector 188 TGI11A TPU11
    INT_TGI11A_TPU11,
    // vector 189 TGI11B TPU11
    INT_TGI11B_TPU11,
    // vector 190 TGI11V TPU11
    INT_TGI11V_TPU11,
    // vector 191 TGI11U TPU11
    INT_TGI11U_TPU11,
    // vector 192 Reserved
    RESERVED,
    // vector 193 Reserved
    RESERVED,
    // vector 194 Reserved
    RESERVED,
    // vector 195 Reserved
    RESERVED,
    // vector 196 Reserved
    RESERVED,
    // vector 197 Reserved
    RESERVED,
    // vector 198 Reserved
    RESERVED,
    // vector 199 Reserved
    RESERVED,
    // vector 200 Reserved
    RESERVED,
    // vector 201 Reserved
    RESERVED,
    // vector 202 Reserved
    RESERVED,
    // vector 203 Reserved
    RESERVED,
    // vector 204 Reserved
    RESERVED,
    // vector 205 Reserved
    RESERVED,
    // vector 206 Reserved
    RESERVED,
    // vector 207 Reserved
    RESERVED,
    // vector 208 Reserved
    RESERVED,
    // vector 209 Reserved
    RESERVED,
    // vector 210 Reserved
    RESERVED,
    // vector 211 Reserved
    RESERVED,
    // vector 212 Reserved
    RESERVED,
    // vector 213 Reserved
    RESERVED,
    // vector 214 Reserved
    RESERVED,
    // vector 215 Reserved
    RESERVED,
    // vector 216 IICI0 IIC2
    INT_IICI0_IIC2,
    // vector 217 Reserved
    RESERVED,
    // vector 218 IICI1 IIC2
    INT_IICI1_IIC2,
    // vector 219 Reserved
    RESERVED,
    // vector 220 RXI5 SCI5
    INT_RXI5_SCI5,
    // vector 221 TXI5 SCI5
    INT_TXI5_SCI5,
    // vector 222 ERI5 SCI5
    INT_ERI5_SCI5,
    // vector 223 TEI5 SCI5
    INT_TEI5_SCI5,
    // vector 224 RXI6 SCI6
    INT_RXI6_SCI6,
    // vector 225 TXI6 SCI6
    INT_TXI6_SCI6,
    // vector 226 ERI6 SCI6
    INT_ERI6_SCI6,
    // vector 227 TEI6 SCI6
    INT_TEI6_SCI6,
    // vector 228 CMIA4/CMIB4 TMR4
    INT_CMIA4_CMIB4_TMR4,
    // vector 229 CMIA5/CMIB5 TMR5
    INT_CMIA5_CMIB5_TMR5,
    // vector 230 CMIA6/CMIB6 TMR6
    INT_CMIA6_CMIB6_TMR6,
    // vector 231 CMIA7/CMIB7 TMR7
    INT_CMIA7_CMIB7_TMR7,
    // vector 232 USBINTN0 USB
    INT_USBINTN0_USB,
    // vector 233 USBINTN1 USB
    INT_USBINTN1_USB,
    // vector 234 USBINTN2 USB
    INT_USBINTN2_USB,
    // vector 235 USBINTN3 USB
    INT_USBINTN3_USB,
    // vector 236 Reserved
    RESERVED,
    // vector 237 ADI1
    INT_ADI1,
    // vector 238 RESUME USB
    INT_RESUME_USB,
    // vector 239 Reserved
    RESERVED,
    // vector 240 Reserved
    RESERVED,
    // vector 241 Reserved
    RESERVED,
    // vector 242 Reserved
    RESERVED,
    // vector 243 Reserved
    RESERVED,
    // vector 244 Reserved
    RESERVED,
    // vector 245 Reserved
    RESERVED,
    // vector 246 Reserved
    RESERVED,
    // vector 247 Reserved
    RESERVED,
    // vector 248 Reserved
    RESERVED,
    // vector 249 Reserved
    RESERVED,
    // vector 250 Reserved
    RESERVED,
    // vector 251 Reserved
    RESERVED,
    // vector 252 Reserved
    RESERVED,
    // vector 253 Reserved
    RESERVED,
    // vector 254 Reserved
    RESERVED,
    // vector 255 Reserved
    RESERVED,
};

extern int main(void);

extern uint32_t text;
extern uint32_t etext;

extern uint32_t data;
extern uint32_t edata;

extern uint32_t bss;
extern uint32_t ebss;

void ResetHandler() {
  // initialise the SP for non-vectored code
  asm("mov.l   #_stack,er7");

  // Copy init values from text to data
  uint32_t *init_values_ptr = &etext;
  uint32_t *data_ptr = &data;

  if (init_values_ptr != data_ptr) {
    for (; data_ptr < &edata;) {
      *data_ptr++ = *init_values_ptr++;
    }
  }

  // Clear the zero segment
  for (uint32_t *bss_ptr = &bss; bss_ptr < &ebss;) {
    *bss_ptr++ = 0;
  }

  //set_imask_ccr((_UBYTE)1);
  asm("orc.b #0x80, ccr");

  main();

  while (1) {};
}


void ISR_Dummy(void) {
  while (1) {};
};
