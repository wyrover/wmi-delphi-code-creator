// **************************************************************************************************
// Part of Delphi Instruction Decode Library [InstDecode]
// 
// http://code.google.com/p/delphi-detours-library/

// The contents of this file are subject to the Mozilla Public License Version 1.1 (the "License");
// you may not use this file except in compliance with the License. You may obtain a copy of the
// License at http://www.mozilla.org/MPL/
//
// Software distributed under the License is distributed on an "AS IS" basis, WITHOUT WARRANTY OF
// ANY KIND, either express or implied. See the License for the specific language governing rights
// and limitations under the License.
//
// The Original Code is OneByteTable.pas.
//
// The Initial Developer of the Original Code is Mahdi Safsafi [SMP3].
// Portions created by Mahdi Safsafi . are Copyright (C) 2013-2014 Mahdi Safsafi .
// All Rights Reserved.
//
// **************************************************************************************************

{ Reference :
	-sandpile.org
	-Intel® 64 and IA-32 Architectures Software Developer’s Manual Vol 2
}

{============================================
                  OneByteTable                    
============================================}
const OneByteTable : array[Byte] of Byte =(//
{0x00} 01, {ADD}
{0x01} 01, {ADD}
{0x02} 01, {ADD}
{0x03} 01, {ADD}
{0x04} 02, {ADD}
{0x05} 03, {ADD}
{0x06} 04, {PUSH}
{0x07} 04, {POP}
{0x08} 01, {OR}
{0x09} 01, {OR}
{0x0A} 01, {OR}
{0x0B} 01, {OR}
{0x0C} 02, {OR}
{0x0D} 03, {OR}
{0x0E} 04, {PUSH}
{0x0F} 05, {Escape_2_Byte}
{0x10} 01, {ADC}
{0x11} 01, {ADC}
{0x12} 01, {ADC}
{0x13} 01, {ADC}
{0x14} 02, {ADC}
{0x15} 03, {ADC}
{0x16} 04, {PUSH}
{0x17} 04, {POP}
{0x18} 01, {SBB}
{0x19} 01, {SBB}
{0x1A} 01, {SBB}
{0x1B} 01, {SBB}
{0x1C} 02, {SBB}
{0x1D} 03, {SBB}
{0x1E} 04, {PUSH}
{0x1F} 04, {POP}
{0x20} 01, {AND}
{0x21} 01, {AND}
{0x22} 01, {AND}
{0x23} 01, {AND}
{0x24} 02, {AND}
{0x25} 03, {AND}
{0x26} 06, {ES_Prefix}
{0x27} 04, {DAA}
{0x28} 01, {SUB}
{0x29} 01, {SUB}
{0x2A} 01, {SUB}
{0x2B} 01, {SUB}
{0x2C} 02, {SUB}
{0x2D} 03, {SUB}
{0x2E} 07, {CS_Prefix}
{0x2F} 04, {DAS}
{0x30} 01, {XOR}
{0x31} 01, {XOR}
{0x32} 01, {XOR}
{0x33} 01, {XOR}
{0x34} 02, {XOR}
{0x35} 03, {XOR}
{0x36} 08, {SS_Prefix}
{0x37} 04, {AAA}
{0x38} 01, {CMP}
{0x39} 01, {CMP}
{0x3A} 01, {CMP}
{0x3B} 01, {CMP}
{0x3C} 02, {CMP}
{0x3D} 03, {CMP}
{0x3E} 09, {DS_Prefix}
{0x3F} 04, {AAS}
{0x40} 10, {INC/REX_Prefix}
{0x41} 10, {INC/REX_Prefix}
{0x42} 10, {INC/REX_Prefix}
{0x43} 10, {INC/REX_Prefix}
{0x44} 10, {INC/REX_Prefix}
{0x45} 10, {INC/REX_Prefix}
{0x46} 10, {INC/REX_Prefix}
{0x47} 10, {INC/REX_Prefix}
{0x48} 10, {DEC/REX_Prefix}
{0x49} 10, {DEC/REX_Prefix}
{0x4A} 10, {DEC/REX_Prefix}
{0x4B} 10, {DEC/REX_Prefix}
{0x4C} 10, {DEC/REX_Prefix}
{0x4D} 10, {DEC/REX_Prefix}
{0x4E} 10, {DEC/REX_Prefix}
{0x4F} 10, {DEC/REX_Prefix}
{0x50} 11, {PUSH}
{0x51} 11, {PUSH}
{0x52} 11, {PUSH}
{0x53} 11, {PUSH}
{0x54} 11, {PUSH}
{0x55} 11, {PUSH}
{0x56} 11, {PUSH}
{0x57} 11, {PUSH}
{0x58} 11, {POP}
{0x59} 11, {POP}
{0x5A} 11, {POP}
{0x5B} 11, {POP}
{0x5C} 11, {POP}
{0x5D} 11, {POP}
{0x5E} 11, {POP}
{0x5F} 11, {POP}
{0x60} 04, {PUSHAD/PUSHA}
{0x61} 04, {POPAD/POPA}
{0x62} 12, {BOUND}
{0x63} 01, {ARPL/MOVSXD}
{0x64} 13, {FS_Prefix}
{0x65} 14, {GS_Prefix}
{0x66} 15, {OPSIZE_Prefix}
{0x67} 16, {ADSIZE_Prefix}
{0x68} 17, {PUSH}
{0x69} 18, {IMUL}
{0x6A} 19, {PUSH}
{0x6B} 20, {IMUL}
{0x6C} 01, {INS}
{0x6D} 01, {INS}
{0x6E} 01, {OUTS}
{0x6F} 01, {OUTS}
{0x70} 21, {JO}
{0x71} 21, {JNO}
{0x72} 21, {JB}
{0x73} 21, {JNB}
{0x74} 21, {JZ}
{0x75} 21, {JNZ}
{0x76} 21, {JBE}
{0x77} 21, {JNBE}
{0x78} 21, {JS}
{0x79} 21, {JNS}
{0x7A} 21, {JP}
{0x7B} 21, {JNP}
{0x7C} 21, {JL}
{0x7D} 21, {JNL}
{0x7E} 21, {JLE}
{0x7F} 21, {JNLE}
{0x80} 22, {group_1}
{0x81} 22, {group_1}
{0x82} 22, {group_1*}
{0x83} 22, {group_1}
{0x84} 01, {TEST}
{0x85} 01, {TEST}
{0x86} 01, {XCHG}
{0x87} 01, {XCHG}
{0x88} 01, {MOV}
{0x89} 01, {MOV}
{0x8A} 01, {MOV}
{0x8B} 01, {MOV}
{0x8C} 01, {MOV}
{0x8D} 01, {LEA}
{0x8E} 01, {MOV}
{0x8F} 23, {group_1A}
{0x90} 24, {PAUSE/NOP}
{0x91} 24, {XCHG}
{0x92} 24, {XCHG}
{0x93} 24, {XCHG}
{0x94} 24, {XCHG}
{0x95} 24, {XCHG}
{0x96} 24, {XCHG}
{0x97} 24, {XCHG}
{0x98} 24, {CWDE/CBW/CDQE}
{0x99} 24, {CDQ/CWD/CQO}
{0x9A} 25, {CALL}
{0x9B} 24, {WAIT}
{0x9C} 11, {PUSHF}
{0x9D} 11, {POPF}
{0x9E} 24, {SAHF}
{0x9F} 24, {LAHF}
{0xA0} 24, {MOV}
{0xA1} 24, {MOV}
{0xA2} 24, {MOV}
{0xA3} 24, {MOV}
{0xA4} 24, {MOVS}
{0xA5} 24, {MOVS}
{0xA6} 24, {CMPS}
{0xA7} 24, {CMPS}
{0xA8} 02, {TEST}
{0xA9} 03, {TEST}
{0xAA} 24, {STOS}
{0xAB} 24, {STOS}
{0xAC} 24, {LODS}
{0xAD} 24, {LODS}
{0xAE} 24, {SCAS}
{0xAF} 24, {SCAS}
{0xB0} 02, {MOV}
{0xB1} 02, {MOV}
{0xB2} 02, {MOV}
{0xB3} 02, {MOV}
{0xB4} 02, {MOV}
{0xB5} 02, {MOV}
{0xB6} 02, {MOV}
{0xB7} 02, {MOV}
{0xB8} 24, {MOV}
{0xB9} 24, {MOV}
{0xBA} 24, {MOV}
{0xBB} 24, {MOV}
{0xBC} 24, {MOV}
{0xBD} 24, {MOV}
{0xBE} 24, {MOV}
{0xBF} 24, {MOV}
{0xC0} 26, {group_2}
{0xC1} 26, {group_2}
{0xC2} 27, {RET}
{0xC3} 28, {RET}
{0xC4} 29, {LES/VEX3_Prefix}
{0xC5} 30, {LDS/VEX2_Prefix}
{0xC6} 31, {group_11}
{0xC7} 31, {group_11}
{0xC8} 32, {ENTER}
{0xC9} 11, {LEAVE}
{0xCA} 33, {RET}
{0xCB} 34, {RET}
{0xCC} 24, {INT3}
{0xCD} 02, {INT}
{0xCE} 04, {INTO}
{0xCF} 34, {IRET}
{0xD0} 26, {group_2}
{0xD1} 26, {group_2}
{0xD2} 26, {group_2}
{0xD3} 26, {group_2}
{0xD4} 35, {AAM}
{0xD5} 35, {AAD}
{0xD6} 04, {SETALC}
{0xD7} 24, {XLAT}
{0xD8} 36, {Escape_FPU_D8}
{0xD9} 37, {Escape_FPU_D9}
{0xDA} 38, {Escape_FPU_DA}
{0xDB} 39, {Escape_FPU_DB}
{0xDC} 40, {Escape_FPU_DC}
{0xDD} 41, {Escape_FPU_DD}
{0xDE} 42, {Escape_FPU_DE}
{0xDF} 43, {Escape_FPU_DF}
{0xE0} 21, {LOOPNZ/LOOPNE}
{0xE1} 21, {LOOPZ/LOOPE}
{0xE2} 21, {LOOP}
{0xE3} 21, {JRCX/JECX/JCXZ}
{0xE4} 02, {IN}
{0xE5} 02, {IN}
{0xE6} 02, {OUT}
{0xE7} 02, {OUT}
{0xE8} 44, {CALL}
{0xE9} 45, {JMP}
{0xEA} 46, {JMP}
{0xEB} 47, {JMP}
{0xEC} 01, {IN}
{0xED} 01, {IN}
{0xEE} 01, {OUT}
{0xEF} 01, {OUT}
{0xF0} 48, {LOCK_Prefix}
{0xF1} 24, {INT1}
{0xF2} 49, {REPNE_Prefix}
{0xF3} 50, {REPE_Prefix}
{0xF4} 24, {HLT}
{0xF5} 24, {CMC}
{0xF6} 51, {group_3}
{0xF7} 51, {group_3}
{0xF8} 24, {CLC}
{0xF9} 24, {STC}
{0xFA} 24, {CLI}
{0xFB} 24, {STI}
{0xFC} 24, {CLD}
{0xFD} 24, {STD}
{0xFE} 52, {group_4_INC_DEC}
{0xFF} 53 {group_5_INC_DEC}
);
{============================================
                  TwoByteTable                    
============================================}
const TwoByteTable : array[Byte] of Byte =(//
{0x00} 54, {group_6}
{0x01} 55, {group_7}
{0x02} 01, {LAR}
{0x03} 01, {LSL}
{0x04} 24, {LOADALL?/RESET?/HANG?}
{0x05} 56, {LOADALL/SYSCALL}
{0x06} 24, {CLTS}
{0x07} 34, {LOADALL/SYSRET}
{0x08} 24, {INVD}
{0x09} 24, {WBINVD}
{0x0A} 24, {CL1INVMB}
{0x0B} 24, {UD1}
{0x0C} 00, {InvalidOpCode}
{0x0D} 24, {3DNow}
{0x0E} 24, {3DNow}
{0x0F} 24, {3DNow}
{0x10} 57, {VMOVUPD/VMOVSD/VMOVSS/VMOVUPS}
{0x11} 57, {VMOVUPD/VMOVSD/VMOVSS/VMOVUPS}
{0x12} 57, {VMOVLPD/VMOVDDUP/VMOVSLDUP/VMOVLPS/VMOVHLPS}
{0x13} 58, {InvalidOpCode/VMOVLPD/VMOVLPS}
{0x14} 58, {InvalidOpCode/VUNPCKLPD/VUNPCKLPS}
{0x15} 58, {InvalidOpCode/VUNPCKHPD/VUNPCKHPS}
{0x16} 59, {InvalidOpCode/VMOVHPD/VMOVSHDUP/VMOVLHPS/VMOVHPS}
{0x17} 58, {InvalidOpCode/VMOVHPD/VMOVHPS}
{0x18} 60, {group_16}
{0x19} 60, {group_16}
{0x1A} 60, {group_16}
{0x1B} 60, {group_16}
{0x1C} 60, {group_16}
{0x1D} 60, {group_16}
{0x1E} 60, {group_16}
{0x1F} 60, {group_16}
{0x20} 61, {MOV}
{0x21} 61, {MOV}
{0x22} 61, {MOV}
{0x23} 61, {MOV}
{0x24} 61, {MOV}
{0x25} 00, {InvalidOpCode}
{0x26} 61, {MOV}
{0x27} 00, {InvalidOpCode}
{0x28} 58, {InvalidOpCode/VMOVAPD/VMOVAPS}
{0x29} 58, {InvalidOpCode/VMOVAPD/VMOVAPS}
{0x2A} 57, {VCVTSI2SD/CVTPI2PD/VCVTSI2SS/CVTPI2PS}
{0x2B} 57, {MOVNTSD/MOVNTSS/VMOVNTPD/VMOVNTPS}
{0x2C} 57, {CVTTPD2PI/VCVTTSD2SI/CVTTPS2PI/VCVTTSS2SI}
{0x2D} 57, {CVTPD2PI/VCVTSD2SI/CVTPS2PI/VCVTSS2SI}
{0x2E} 58, {InvalidOpCode/VUCOMISD/VUCOMISS}
{0x2F} 58, {InvalidOpCode/VCOMISD/VCOMISS}
{0x30} 24, {WRMSR}
{0x31} 24, {RDTSC}
{0x32} 24, {RDMSR}
{0x33} 24, {RDPMC}
{0x34} 24, {SYSENTER}
{0x35} 24, {SYSEXIT}
{0x36} 00, {InvalidOpCode}
{0x37} 24, {GETSEC}
{0x38} 62, {Escape_3_Byte}
{0x39} 00, {InvalidOpCode}
{0x3A} 62, {Escape_3_Byte}
{0x3B} 00, {InvalidOpCode}
{0x3C} 00, {InvalidOpCode}
{0x3D} 00, {InvalidOpCode}
{0x3E} 00, {InvalidOpCode}
{0x3F} 00, {InvalidOpCode}
{0x40} 01, {CMOVO}
{0x41} 01, {CMOVNO}
{0x42} 01, {CMOVB}
{0x43} 01, {CMOVNB}
{0x44} 01, {CMOVZ}
{0x45} 01, {CMOVNZ}
{0x46} 01, {CMOVBE}
{0x47} 01, {CMOVNBE}
{0x48} 01, {CMOVS}
{0x49} 01, {CMOVNS}
{0x4A} 01, {CMOVP}
{0x4B} 01, {CMOVNP}
{0x4C} 01, {CMOVL}
{0x4D} 01, {CMOVNL}
{0x4E} 01, {CMOVLE}
{0x4F} 01, {CMOVNLE}
{0x50} 58, {InvalidOpCode/VMOVMSKPD/VMOVMSKPS}
{0x51} 57, {VSQRTPD/VSQRTSD/VSQRTSS/VSQRTPS}
{0x52} 63, {InvalidOpCode/VRSQRTSS/VRSQRTPS}
{0x53} 63, {InvalidOpCode/VRCPSS/VRCPPS}
{0x54} 58, {InvalidOpCode/VANDPD/VANDPS}
{0x55} 58, {InvalidOpCode/VANDNPD/VANDNPS}
{0x56} 58, {InvalidOpCode/VORPD/VORPS}
{0x57} 58, {InvalidOpCode/VXORPD/VXORPS}
{0x58} 57, {VADDPD/VADDSD/VADDSS/VADDPS}
{0x59} 57, {VMULPD/VMULSD/VMULSS/VMULPS}
{0x5A} 57, {VCVTPD2PS/VCVTSD2SS/VCVTSS2SD/VCVTPS2PD}
{0x5B} 59, {InvalidOpCode/VCVTPS2DQ/VCVTTPS2DQ/VCVTDQ2PS}
{0x5C} 57, {VSUBPD/VSUBSD/VSUBSS/VSUBPS}
{0x5D} 57, {VMINPD/VMINSD/VMINSS/VMINPS}
{0x5E} 57, {VDIVPD/VDIVSD/VDIVSS/VDIVPS}
{0x5F} 57, {VMAXPD/VMAXSD/VMAXSS/VMAXPS}
{0x60} 58, {PUNPCKLBW/VPUNPCKLBW}
{0x61} 58, {PUNPCKLWD/VPUNPCKLWD}
{0x62} 58, {PUNPCKLDQ/VPUNPCKLDQ}
{0x63} 58, {PACKSSWB/VPACKSSWB}
{0x64} 58, {PCMPGTB/VPCMPGTB}
{0x65} 58, {PCMPGTW/VPCMPGTW}
{0x66} 58, {PCMPGTD/VPCMPGTD}
{0x67} 58, {PACKUSWB/VPACKUSWB}
{0x68} 58, {PUNPCKHBW/InvalidOpCode/VPUNPCKHBW}
{0x69} 58, {PUNPCKHWD/InvalidOpCode/VPUNPCKHWD}
{0x6A} 58, {PUNPCKHDQ/InvalidOpCode/VPUNPCKHDQ}
{0x6B} 58, {PACKSSDW/InvalidOpCode/VPACKSSDW}
{0x6C} 64, {InvalidOpCode/VPUNPCKLQDQ}
{0x6D} 64, {InvalidOpCode/VPUNPCKHQDQ}
{0x6E} 58, {MOVDQ/InvalidOpCode/VMOVDQ}
{0x6F} 59, {MOVQ/InvalidOpCode/VMOVDQA/VMOVDQU}
{0x70} 65, {VPSHUFD/VPSHUFLW/VPSHUFHW/PSHUFW}
{0x71} 66, {group_12}
{0x72} 67, {group_13}
{0x73} 68, {group_14}
{0x74} 58, {PCMPEQB/InvalidOpCode/VPCMPEQB}
{0x75} 58, {PCMPEQW/InvalidOpCode/VPCMPEQW}
{0x76} 58, {PCMPEQD/InvalidOpCode/VPCMPEQD}
{0x77} 24, {EMMS/VZEROUPPER/VZEROALL/InvalidOpCode}
{0x78} 01, {VMREAD/InvalidOpCode}
{0x79} 01, {VMWRITE/InvalidOpCode}
{0x7A} 24, {SSE5A/InvalidOpCode}
{0x7B} 24, {SSE5A/InvalidOpCode}
{0x7C} 69, {InvalidOpCode/VHADDPD/VHADDPS}
{0x7D} 69, {InvalidOpCode/VHSUBPD/VHSUBPS}
{0x7E} 59, {MOVDQ/InvalidOpCode/VMOVDQ/VMOVQ}
{0x7F} 59, {MOVQ/InvalidOpCode/VMOVDQA/VMOVDQU}
{0x80} 70, {JO}
{0x81} 70, {JNO}
{0x82} 70, {JB}
{0x83} 70, {JNB}
{0x84} 70, {JZ}
{0x85} 70, {JNZ}
{0x86} 70, {JBE}
{0x87} 70, {JNBE}
{0x88} 70, {JS}
{0x89} 70, {JNS}
{0x8A} 70, {JP}
{0x8B} 70, {JNP}
{0x8C} 70, {JL}
{0x8D} 70, {JNL}
{0x8E} 70, {JLE}
{0x8F} 70, {JNLE}
{0x90} 01, {SETO}
{0x91} 01, {SETNO}
{0x92} 01, {SETB}
{0x93} 01, {SETNB}
{0x94} 01, {SETZ}
{0x95} 01, {SETNZ}
{0x96} 01, {SETBE}
{0x97} 01, {SETNBE}
{0x98} 01, {SETS}
{0x99} 01, {SETNS}
{0x9A} 01, {SETP}
{0x9B} 01, {SETNP}
{0x9C} 01, {SETL}
{0x9D} 01, {SETNL}
{0x9E} 01, {SETLE}
{0x9F} 01, {SETNLE}
{0xA0} 11, {PUSH}
{0xA1} 11, {POP}
{0xA2} 24, {CPUID}
{0xA3} 01, {BT}
{0xA4} 20, {SHLD}
{0xA5} 01, {SHLD}
{0xA6} 00, {InvalidOpCode}
{0xA7} 00, {InvalidOpCode}
{0xA8} 11, {PUSH}
{0xA9} 11, {POP}
{0xAA} 24, {RSM}
{0xAB} 01, {BTS}
{0xAC} 20, {SHRD}
{0xAD} 01, {SHRD}
{0xAE} 71, {group_15}
{0xAF} 01, {IMUL}
{0xB0} 01, {CMPXCHG}
{0xB1} 01, {CMPXCHG}
{0xB2} 01, {LSS}
{0xB3} 01, {BTR}
{0xB4} 01, {LFS}
{0xB5} 01, {LGS}
{0xB6} 01, {MOVZX}
{0xB7} 01, {MOVZX}
{0xB8} 72, {POPCNT/InvalidOpCode}
{0xB9} 73, {group_10_UD2/InvalidOpCode}
{0xBA} 74, {group_8/InvalidOpCode}
{0xBB} 01, {BTC/InvalidOpCode}
{0xBC} 63, {BSF/TZCNT}
{0xBD} 63, {BSR/LZCNT}
{0xBE} 01, {MOVSX/InvalidOpCode}
{0xBF} 01, {MOVSX/InvalidOpCode}
{0xC0} 57, {XADD}
{0xC1} 57, {XADD}
{0xC2} 65, {VCMPccPD/VCMPccSD/VCMPccSS/VCMPccPS}
{0xC3} 01, {InvalidOpCode/MOVNTI}
{0xC4} 75, {InvalidOpCode/VPINSRW/PINSRW}
{0xC5} 75, {InvalidOpCode/VPEXTRW/PEXTRW}
{0xC6} 75, {InvalidOpCode/VSHUFPD/VSHUFPS}
{0xC7} 76, {group_9}
{0xC8} 24, {BSWAP}
{0xC9} 24, {BSWAP}
{0xCA} 24, {BSWAP}
{0xCB} 24, {BSWAP}
{0xCC} 24, {BSWAP}
{0xCD} 24, {BSWAP}
{0xCE} 24, {BSWAP}
{0xCF} 24, {BSWAP}
{0xD0} 69, {InvalidOpCode/VADDSUBPD/VADDSUBPS}
{0xD1} 58, {PSRLW/InvalidOpCode/VPSRLW}
{0xD2} 58, {PSRLD/InvalidOpCode/VPSRLD}
{0xD3} 58, {PSRLQ/InvalidOpCode/VPSRLQ}
{0xD4} 58, {InvalidOpCode/VPADDQ/PADDQ}
{0xD5} 58, {PMULLW/InvalidOpCode/VPMULLW}
{0xD6} 77, {InvalidOpCode/MOVDQ2Q/MOVQ2DQ/VMOVQ}
{0xD7} 58, {InvalidOpCode/VPMOVMSKB/PMOVMSKB}
{0xD8} 58, {PSUBUSB/VPSUBUSB}
{0xD9} 58, {PSUBUSW/VPSUBUSW}
{0xDA} 58, {VPMINUB/PMINUB}
{0xDB} 58, {PAND/VPAND}
{0xDC} 58, {PADDUSB/VPADDUSB}
{0xDD} 58, {PADDUSW/VPADDUSW}
{0xDE} 58, {VPMAXUB/PMAXUB}
{0xDF} 58, {PANDN/VPANDN}
{0xE0} 58, {InvalidOpCode/VPAVGB/PAVGB}
{0xE1} 58, {PSRAW/InvalidOpCode/VPSRAW}
{0xE2} 58, {PSRAD/InvalidOpCode/VPSRAD}
{0xE3} 58, {InvalidOpCode/VPAVGW/PAVGW}
{0xE4} 58, {InvalidOpCode/VPMULHUW/PMULHUW}
{0xE5} 58, {PMULHW/InvalidOpCode/VPMULHW}
{0xE6} 77, {InvalidOpCode/VCVTTPD2DQ/VCVTPD2DQ/VCVTDQ2PD}
{0xE7} 58, {InvalidOpCode/VMOVNTDQ/MOVNTQ}
{0xE8} 58, {PSUBSB/VPSUBSB}
{0xE9} 58, {PSUBSW/VPSUBSW}
{0xEA} 58, {VPMINSW/PMINSW}
{0xEB} 58, {POR/VPOR}
{0xEC} 58, {PADDSB/VPADDSB}
{0xED} 58, {PADDSW/VPADDSW}
{0xEE} 58, {VPMAXSW/PMAXSW}
{0xEF} 58, {PXOR/VPXOR}
{0xF0} 78, {InvalidOpCode/VLDDQU}
{0xF1} 58, {PSLLW/InvalidOpCode/VPSLLW}
{0xF2} 58, {PSLLD/InvalidOpCode/VPSLLD}
{0xF3} 58, {PSLLQ/InvalidOpCode/VPSLLQ}
{0xF4} 58, {InvalidOpCode/VPMULUDQ/PMULUDQ}
{0xF5} 58, {PMADDWD/InvalidOpCode/VPMADDWD}
{0xF6} 58, {InvalidOpCode/VPSADBW/PSADBW}
{0xF7} 58, {InvalidOpCode/VMASKMOVDQU/MASKMOVQ}
{0xF8} 58, {PSUBB/VPSUBB}
{0xF9} 58, {PSUBW/VPSUBW}
{0xFA} 58, {PSUBD/VPSUBD}
{0xFB} 58, {VPSUBQ/PSUBQ}
{0xFC} 58, {PADDB/VPADDB}
{0xFD} 58, {PADDW/VPADDW}
{0xFE} 58, {PADDD/VPADDD}
{0xFF} 00 {InvalidOpCode}
);
{============================================
                  ThreeByteTable38                    
============================================}
const ThreeByteTable38 : array[Byte] of Byte =(//
{0x00} 58, {VPSHUFB/PSHUFB}
{0x01} 58, {VPHADDW/PHADDW}
{0x02} 58, {VPHADDD/PHADDD}
{0x03} 58, {VPHADDSW/PHADDSW}
{0x04} 58, {VPMADDUBSW/PMADDUBSW}
{0x05} 58, {VPHSUBW/PHSUBW}
{0x06} 58, {VPHSUBD/PHSUBD}
{0x07} 58, {VPHSUBSW/PHSUBSW}
{0x08} 58, {VPSIGNB/PSIGNB}
{0x09} 58, {VPSIGNW/PSIGNW}
{0x0A} 58, {VPSIGND/PSIGND}
{0x0B} 58, {VPMULHRSW/PMULHRSW}
{0x0C} 64, {VPERMILPS/InvalidOpCode}
{0x0D} 64, {VPERMILPD/InvalidOpCode}
{0x0E} 64, {VTESTPS/InvalidOpCode}
{0x0F} 64, {VTESTPD/InvalidOpCode}
{0x10} 64, {InvalidOpCode/PBLENDVB}
{0x11} 00, {InvalidOpCode}
{0x12} 00, {InvalidOpCode}
{0x13} 64, {VCVTPH2PS/InvalidOpCode}
{0x14} 64, {InvalidOpCode/BLENDVPS}
{0x15} 64, {InvalidOpCode/BLENDVPD}
{0x16} 64, {VPERMPS/InvalidOpCode}
{0x17} 64, {InvalidOpCode/VPTEST}
{0x18} 64, {VBROADCASTSS/InvalidOpCode}
{0x19} 64, {VBROADCASTSD/InvalidOpCode}
{0x1A} 64, {VBROADCASTF128/InvalidOpCode}
{0x1B} 00, {InvalidOpCode}
{0x1C} 58, {VPABSB/PABSB}
{0x1D} 58, {VPABSW/PABSW}
{0x1E} 58, {VPABSD/PABSD}
{0x1F} 00, {InvalidOpCode}
{0x20} 64, {InvalidOpCode/VPMOVSXBW}
{0x21} 64, {InvalidOpCode/VPMOVSXBD}
{0x22} 64, {InvalidOpCode/VPMOVSXBQ}
{0x23} 64, {InvalidOpCode/VPMOVSXWD}
{0x24} 64, {InvalidOpCode/VPMOVSXWQ}
{0x25} 64, {InvalidOpCode/VPMOVSXDQ}
{0x26} 00, {InvalidOpCode}
{0x27} 00, {InvalidOpCode}
{0x28} 64, {InvalidOpCode/VPMULDQ}
{0x29} 64, {InvalidOpCode/VPCMPEQQ}
{0x2A} 64, {InvalidOpCode/VMOVNTDQA}
{0x2B} 64, {InvalidOpCode/VPACKUSDW}
{0x2C} 64, {VMASKMOVPS/InvalidOpCode}
{0x2D} 64, {VMASKMOVPD/InvalidOpCode}
{0x2E} 64, {VMASKMOVPS/InvalidOpCode}
{0x2F} 64, {VMASKMOVPD/InvalidOpCode}
{0x30} 64, {InvalidOpCode/VPMOVZXBW}
{0x31} 64, {InvalidOpCode/VPMOVZXBD}
{0x32} 64, {InvalidOpCode/VPMOVZXBQ}
{0x33} 64, {InvalidOpCode/VPMOVZXWD}
{0x34} 64, {InvalidOpCode/VPMOVZXWQ}
{0x35} 64, {InvalidOpCode/VPMOVZXDQ}
{0x36} 64, {VPERMD/InvalidOpCode}
{0x37} 64, {InvalidOpCode/VPCMPGTQ}
{0x38} 64, {InvalidOpCode/VPMINSB}
{0x39} 64, {InvalidOpCode/VPMINSD}
{0x3A} 64, {InvalidOpCode/VPMINUW}
{0x3B} 64, {InvalidOpCode/VPMINUD}
{0x3C} 64, {InvalidOpCode/VPMAXSB}
{0x3D} 64, {InvalidOpCode/VPMAXSD}
{0x3E} 64, {InvalidOpCode/VPMAXUW}
{0x3F} 64, {InvalidOpCode/VPMAXUD}
{0x40} 64, {InvalidOpCode/VPMULLD}
{0x41} 64, {InvalidOpCode/VPHMINPOSUW}
{0x42} 00, {InvalidOpCode}
{0x43} 00, {InvalidOpCode}
{0x44} 00, {InvalidOpCode}
{0x45} 64, {VPSRLVQ/InvalidOpCode}
{0x46} 64, {VPSRAVD/InvalidOpCode}
{0x47} 64, {VPSLLVQ/VPSLLVD/InvalidOpCode}
{0x48} 00, {InvalidOpCode}
{0x49} 00, {InvalidOpCode}
{0x4A} 00, {InvalidOpCode}
{0x4B} 00, {InvalidOpCode}
{0x4C} 00, {InvalidOpCode}
{0x4D} 00, {InvalidOpCode}
{0x4E} 00, {InvalidOpCode}
{0x4F} 00, {InvalidOpCode}
{0x50} 00, {InvalidOpCode}
{0x51} 00, {InvalidOpCode}
{0x52} 00, {InvalidOpCode}
{0x53} 00, {InvalidOpCode}
{0x54} 00, {InvalidOpCode}
{0x55} 00, {InvalidOpCode}
{0x56} 00, {InvalidOpCode}
{0x57} 00, {InvalidOpCode}
{0x58} 64, {VPBROADCASTD/InvalidOpCode}
{0x59} 64, {VPBROADCASTQ/InvalidOpCode}
{0x5A} 64, {VBROADCASTI128/InvalidOpCode}
{0x5B} 00, {InvalidOpCode}
{0x5C} 00, {InvalidOpCode}
{0x5D} 00, {InvalidOpCode}
{0x5E} 00, {InvalidOpCode}
{0x5F} 00, {InvalidOpCode}
{0x60} 00, {InvalidOpCode}
{0x61} 00, {InvalidOpCode}
{0x62} 00, {InvalidOpCode}
{0x63} 00, {InvalidOpCode}
{0x64} 00, {InvalidOpCode}
{0x65} 00, {InvalidOpCode}
{0x66} 00, {InvalidOpCode}
{0x67} 00, {InvalidOpCode}
{0x68} 00, {InvalidOpCode}
{0x69} 00, {InvalidOpCode}
{0x6A} 00, {InvalidOpCode}
{0x6B} 00, {InvalidOpCode}
{0x6C} 00, {InvalidOpCode}
{0x6D} 00, {InvalidOpCode}
{0x6E} 00, {InvalidOpCode}
{0x6F} 00, {InvalidOpCode}
{0x70} 00, {InvalidOpCode}
{0x71} 00, {InvalidOpCode}
{0x72} 00, {InvalidOpCode}
{0x73} 00, {InvalidOpCode}
{0x74} 00, {InvalidOpCode}
{0x75} 00, {InvalidOpCode}
{0x76} 00, {InvalidOpCode}
{0x77} 00, {InvalidOpCode}
{0x78} 64, {VPBROADCASTB/InvalidOpCode}
{0x79} 64, {VPBROADCASTW/InvalidOpCode}
{0x7A} 00, {InvalidOpCode}
{0x7B} 00, {InvalidOpCode}
{0x7C} 00, {InvalidOpCode}
{0x7D} 00, {InvalidOpCode}
{0x7E} 00, {InvalidOpCode}
{0x7F} 00, {InvalidOpCode}
{0x80} 64, {INVPCID}
{0x81} 64, {INVVPID}
{0x82} 64, {INVPCID}
{0x83} 00, {InvalidOpCode}
{0x84} 00, {InvalidOpCode}
{0x85} 00, {InvalidOpCode}
{0x86} 00, {InvalidOpCode}
{0x87} 00, {InvalidOpCode}
{0x88} 00, {InvalidOpCode}
{0x89} 00, {InvalidOpCode}
{0x8A} 00, {InvalidOpCode}
{0x8B} 00, {InvalidOpCode}
{0x8C} 64, {VPMASKMOVD/VPMASKMOVQ/InvalidOpCode}
{0x8D} 00, {InvalidOpCode}
{0x8E} 64, {VPMASKMOVD/VPMASKMOVQ/InvalidOpCode}
{0x8F} 00, {InvalidOpCode}
{0x90} 64, {VPGATHERDD/VPGATHERDQ}
{0x91} 64, {VPGATHERQD/VPGATHERQQ}
{0x92} 64, {VGATHERDPS/VGATHERDPD}
{0x93} 64, {VGATHERQPS/VGATHERQPD}
{0x94} 00, {InvalidOpCode}
{0x95} 00, {InvalidOpCode}
{0x96} 64, {VFMADDSUB132PS}
{0x97} 64, {VFMSUBADD132PS}
{0x98} 64, {VFMADD132PS}
{0x99} 64, {VFMADD132SS}
{0x9A} 64, {VFMSUB132PS}
{0x9B} 64, {VFMSUB132SS}
{0x9C} 64, {VFNMADD132PS}
{0x9D} 64, {VFNMADD132SS}
{0x9E} 64, {VFNMSUB132PS}
{0x9F} 64, {VFNMSUB132SS}
{0xA0} 00, {InvalidOpCode}
{0xA1} 00, {InvalidOpCode}
{0xA2} 00, {InvalidOpCode}
{0xA3} 00, {InvalidOpCode}
{0xA4} 00, {InvalidOpCode}
{0xA5} 00, {InvalidOpCode}
{0xA6} 64, {VFMADDSUB213PS}
{0xA7} 64, {VFMSUBADD213PS}
{0xA8} 64, {VFMADD213PS}
{0xA9} 64, {VFMADD213SS}
{0xAA} 64, {VFMSUB213PS}
{0xAB} 64, {VFMSUB213SS}
{0xAC} 64, {VFNMADD213PS}
{0xAD} 64, {VFNMADD213SS}
{0xAE} 64, {VFNMSUB213PS}
{0xAF} 64, {VFNMSUB213SS}
{0xB0} 00, {InvalidOpCode}
{0xB1} 00, {InvalidOpCode}
{0xB2} 00, {InvalidOpCode}
{0xB3} 00, {InvalidOpCode}
{0xB4} 00, {InvalidOpCode}
{0xB5} 00, {InvalidOpCode}
{0xB6} 64, {VFMADDSUB231PS}
{0xB7} 64, {VFMSUBADD231PS}
{0xB8} 64, {VFMADD231PS}
{0xB9} 64, {VFMADD231SS}
{0xBA} 64, {VFMSUB231PS}
{0xBB} 64, {VFMSUB231SS}
{0xBC} 64, {VFNMADD231PS}
{0xBD} 64, {VFNMADD231SS}
{0xBE} 64, {VFNMSUB231PS}
{0xBF} 64, {VFNMSUB231SS}
{0xC0} 00, {InvalidOpCode}
{0xC1} 00, {InvalidOpCode}
{0xC2} 00, {InvalidOpCode}
{0xC3} 00, {InvalidOpCode}
{0xC4} 00, {InvalidOpCode}
{0xC5} 00, {InvalidOpCode}
{0xC6} 00, {InvalidOpCode}
{0xC7} 00, {InvalidOpCode}
{0xC8} 01, {SHA1NEXTE}
{0xC9} 01, {SHA1MSG1}
{0xCA} 01, {SHA1MSG2}
{0xCB} 01, {SHA256RNDS2}
{0xCC} 01, {SHA256MSG1}
{0xCD} 01, {SHA256MSG2}
{0xCE} 00, {InvalidOpCode}
{0xCF} 00, {InvalidOpCode}
{0xD0} 00, {InvalidOpCode}
{0xD1} 00, {InvalidOpCode}
{0xD2} 00, {InvalidOpCode}
{0xD3} 00, {InvalidOpCode}
{0xD4} 00, {InvalidOpCode}
{0xD5} 00, {InvalidOpCode}
{0xD6} 00, {InvalidOpCode}
{0xD7} 00, {InvalidOpCode}
{0xD8} 00, {InvalidOpCode}
{0xD9} 00, {InvalidOpCode}
{0xDA} 00, {InvalidOpCode}
{0xDB} 64, {VAESIMC}
{0xDC} 64, {VAESENC}
{0xDD} 64, {VAESENCLAST}
{0xDE} 64, {VAESDEC}
{0xDF} 64, {VAESDECLAST}
{0xE0} 00, {InvalidOpCode}
{0xE1} 00, {InvalidOpCode}
{0xE2} 00, {InvalidOpCode}
{0xE3} 00, {InvalidOpCode}
{0xE4} 00, {InvalidOpCode}
{0xE5} 00, {InvalidOpCode}
{0xE6} 00, {InvalidOpCode}
{0xE7} 00, {InvalidOpCode}
{0xE8} 00, {InvalidOpCode}
{0xE9} 00, {InvalidOpCode}
{0xEA} 00, {InvalidOpCode}
{0xEB} 00, {InvalidOpCode}
{0xEC} 00, {InvalidOpCode}
{0xED} 00, {InvalidOpCode}
{0xEE} 00, {InvalidOpCode}
{0xEF} 00, {InvalidOpCode}
{0xF0} 79, {MOVBE/InvalidOpCode/CRC32}
{0xF1} 79, {MOVBE/InvalidOpCode/CRC32}
{0xF2} 79, {ANDNv/InvalidOpCode}
{0xF3} 79, {group_17}
{0xF4} 79, {InvalidOpCode}
{0xF5} 79, {PDEPv/PEXTv/BZHIv/InvalidOpCode}
{0xF6} 79, {MULXv/ADCX/ADOX/InvalidOpCode}
{0xF7} 79, {SHLXv/SHRXv/SARXv/BEXTRv/InvalidOpCode}
{0xF8} 00, {InvalidOpCode}
{0xF9} 00, {InvalidOpCode}
{0xFA} 00, {InvalidOpCode}
{0xFB} 00, {InvalidOpCode}
{0xFC} 00, {InvalidOpCode}
{0xFD} 00, {InvalidOpCode}
{0xFE} 00, {InvalidOpCode}
{0xFF} 00 {InvalidOpCode}
);
{============================================
                  ThreeByteTable3A                    
============================================}
const ThreeByteTable3A : array[Byte] of Byte =(//
{0x00} 80, {VPERMQ/InvalidOpCode}
{0x01} 80, {VPERMPD/InvalidOpCode}
{0x02} 80, {VPBLENDD/InvalidOpCode}
{0x03} 00, {InvalidOpCode}
{0x04} 80, {VPERMILPS/InvalidOpCode}
{0x05} 80, {VPERMILPD/InvalidOpCode}
{0x06} 80, {VPERM2F128/InvalidOpCode}
{0x07} 00, {InvalidOpCode}
{0x08} 80, {InvalidOpCode/VROUNDPS}
{0x09} 80, {InvalidOpCode/VROUNDPD}
{0x0A} 80, {InvalidOpCode/VROUNDSS}
{0x0B} 80, {InvalidOpCode/VROUNDSD}
{0x0C} 80, {InvalidOpCode/VBLENDPS}
{0x0D} 80, {InvalidOpCode/VBLENDPD}
{0x0E} 80, {InvalidOpCode/VPBLENDW}
{0x0F} 75, {VPALIGNR/PALIGNR}
{0x10} 00, {InvalidOpCode}
{0x11} 00, {InvalidOpCode}
{0x12} 00, {InvalidOpCode}
{0x13} 00, {InvalidOpCode}
{0x14} 80, {InvalidOpCode/VPEXTRB}
{0x15} 80, {InvalidOpCode/VPEXTRW}
{0x16} 80, {InvalidOpCode/VPEXTRD}
{0x17} 80, {InvalidOpCode/VEXTRACTPS}
{0x18} 80, {VINSERTF128/InvalidOpCode}
{0x19} 80, {VEXTRACTF128/InvalidOpCode}
{0x1A} 00, {InvalidOpCode}
{0x1B} 00, {InvalidOpCode}
{0x1C} 00, {InvalidOpCode}
{0x1D} 80, {VCVTPS2PH/InvalidOpCode}
{0x1E} 00, {InvalidOpCode}
{0x1F} 00, {InvalidOpCode}
{0x20} 80, {InvalidOpCode/VINSERTPS}
{0x21} 80, {InvalidOpCode/VPINSRD}
{0x22} 00, {InvalidOpCode}
{0x23} 00, {InvalidOpCode}
{0x24} 00, {InvalidOpCode}
{0x25} 00, {InvalidOpCode}
{0x26} 00, {InvalidOpCode}
{0x27} 00, {InvalidOpCode}
{0x28} 00, {InvalidOpCode}
{0x29} 00, {InvalidOpCode}
{0x2A} 00, {InvalidOpCode}
{0x2B} 00, {InvalidOpCode}
{0x2C} 00, {InvalidOpCode}
{0x2D} 00, {InvalidOpCode}
{0x2E} 00, {InvalidOpCode}
{0x2F} 00, {InvalidOpCode}
{0x30} 00, {InvalidOpCode}
{0x31} 00, {InvalidOpCode}
{0x32} 00, {InvalidOpCode}
{0x33} 00, {InvalidOpCode}
{0x34} 00, {InvalidOpCode}
{0x35} 00, {InvalidOpCode}
{0x36} 00, {InvalidOpCode}
{0x37} 00, {InvalidOpCode}
{0x38} 80, {VINSERTI128/InvalidOpCode}
{0x39} 80, {VEXTRACTI128/InvalidOpCode}
{0x3A} 00, {InvalidOpCode}
{0x3B} 00, {InvalidOpCode}
{0x3C} 00, {InvalidOpCode}
{0x3D} 00, {InvalidOpCode}
{0x3E} 00, {InvalidOpCode}
{0x3F} 00, {InvalidOpCode}
{0x40} 80, {InvalidOpCode/VDPPS}
{0x41} 80, {InvalidOpCode/VDPPD}
{0x42} 80, {InvalidOpCode/VMPSADBW}
{0x43} 00, {InvalidOpCode}
{0x44} 80, {InvalidOpCode/VPCLMULQDQ}
{0x45} 00, {InvalidOpCode}
{0x46} 80, {VPERM2I128/InvalidOpCode}
{0x47} 00, {InvalidOpCode}
{0x48} 80, {VPERMILzz2PS/InvalidOpCode}
{0x49} 80, {VPERMILzz2PD/InvalidOpCode}
{0x4A} 64, {VBLENDVPS/InvalidOpCode}
{0x4B} 64, {VBLENDVPD/InvalidOpCode}
{0x4C} 64, {VPBLENDVB/InvalidOpCode}
{0x4D} 00, {InvalidOpCode}
{0x4E} 00, {InvalidOpCode}
{0x4F} 00, {InvalidOpCode}
{0x50} 00, {InvalidOpCode}
{0x51} 00, {InvalidOpCode}
{0x52} 00, {InvalidOpCode}
{0x53} 00, {InvalidOpCode}
{0x54} 00, {InvalidOpCode}
{0x55} 00, {InvalidOpCode}
{0x56} 00, {InvalidOpCode}
{0x57} 00, {InvalidOpCode}
{0x58} 00, {InvalidOpCode}
{0x59} 00, {InvalidOpCode}
{0x5A} 00, {InvalidOpCode}
{0x5B} 00, {InvalidOpCode}
{0x5C} 64, {VFMADDSUBPS/InvalidOpCode}
{0x5D} 64, {VFMADDSUBPD/InvalidOpCode}
{0x5E} 64, {VFMSUBADDPS/InvalidOpCode}
{0x5F} 64, {VFMSUBADDPD/InvalidOpCode}
{0x60} 80, {InvalidOpCode/VPCMPESTRM}
{0x61} 80, {InvalidOpCode/VPCMPESTRI}
{0x62} 80, {InvalidOpCode/VPCMPISTRM}
{0x63} 80, {InvalidOpCode/VPCMPISTRI}
{0x64} 00, {InvalidOpCode}
{0x65} 00, {InvalidOpCode}
{0x66} 00, {InvalidOpCode}
{0x67} 00, {InvalidOpCode}
{0x68} 64, {VFMADDPS/InvalidOpCode}
{0x69} 64, {VFMADDPD/InvalidOpCode}
{0x6A} 64, {VFMADDSS/InvalidOpCode}
{0x6B} 64, {VFMADDSD/InvalidOpCode}
{0x6C} 64, {VFMSUBPS/InvalidOpCode}
{0x6D} 64, {VFMSUBPD/InvalidOpCode}
{0x6E} 64, {VFMSUBSS/InvalidOpCode}
{0x6F} 64, {VFMSUBSD/InvalidOpCode}
{0x70} 00, {InvalidOpCode}
{0x71} 00, {InvalidOpCode}
{0x72} 00, {InvalidOpCode}
{0x73} 00, {InvalidOpCode}
{0x74} 00, {InvalidOpCode}
{0x75} 00, {InvalidOpCode}
{0x76} 00, {InvalidOpCode}
{0x77} 00, {InvalidOpCode}
{0x78} 64, {VFNMADDPS/InvalidOpCode}
{0x79} 64, {VFNMADDPD/InvalidOpCode}
{0x7A} 64, {VFNMADDSS/InvalidOpCode}
{0x7B} 64, {VFNMADDSD/InvalidOpCode}
{0x7C} 64, {VFNMSUBPS/InvalidOpCode}
{0x7D} 64, {VFNMSUBPD/InvalidOpCode}
{0x7E} 64, {VFNMSUBSS/InvalidOpCode}
{0x7F} 64, {VFNMSUBSD/InvalidOpCode}
{0x80} 00, {InvalidOpCode}
{0x81} 00, {InvalidOpCode}
{0x82} 00, {InvalidOpCode}
{0x83} 00, {InvalidOpCode}
{0x84} 00, {InvalidOpCode}
{0x85} 00, {InvalidOpCode}
{0x86} 00, {InvalidOpCode}
{0x87} 00, {InvalidOpCode}
{0x88} 00, {InvalidOpCode}
{0x89} 00, {InvalidOpCode}
{0x8A} 00, {InvalidOpCode}
{0x8B} 00, {InvalidOpCode}
{0x8C} 00, {InvalidOpCode}
{0x8D} 00, {InvalidOpCode}
{0x8E} 00, {InvalidOpCode}
{0x8F} 00, {InvalidOpCode}
{0x90} 00, {InvalidOpCode}
{0x91} 00, {InvalidOpCode}
{0x92} 00, {InvalidOpCode}
{0x93} 00, {InvalidOpCode}
{0x94} 00, {InvalidOpCode}
{0x95} 00, {InvalidOpCode}
{0x96} 00, {InvalidOpCode}
{0x97} 00, {InvalidOpCode}
{0x98} 00, {InvalidOpCode}
{0x99} 00, {InvalidOpCode}
{0x9A} 00, {InvalidOpCode}
{0x9B} 00, {InvalidOpCode}
{0x9C} 00, {InvalidOpCode}
{0x9D} 00, {InvalidOpCode}
{0x9E} 00, {InvalidOpCode}
{0x9F} 00, {InvalidOpCode}
{0xA0} 00, {InvalidOpCode}
{0xA1} 00, {InvalidOpCode}
{0xA2} 00, {InvalidOpCode}
{0xA3} 00, {InvalidOpCode}
{0xA4} 00, {InvalidOpCode}
{0xA5} 00, {InvalidOpCode}
{0xA6} 00, {InvalidOpCode}
{0xA7} 00, {InvalidOpCode}
{0xA8} 00, {InvalidOpCode}
{0xA9} 00, {InvalidOpCode}
{0xAA} 00, {InvalidOpCode}
{0xAB} 00, {InvalidOpCode}
{0xAC} 00, {InvalidOpCode}
{0xAD} 00, {InvalidOpCode}
{0xAE} 00, {InvalidOpCode}
{0xAF} 00, {InvalidOpCode}
{0xB0} 00, {InvalidOpCode}
{0xB1} 00, {InvalidOpCode}
{0xB2} 00, {InvalidOpCode}
{0xB3} 00, {InvalidOpCode}
{0xB4} 00, {InvalidOpCode}
{0xB5} 00, {InvalidOpCode}
{0xB6} 00, {InvalidOpCode}
{0xB7} 00, {InvalidOpCode}
{0xB8} 00, {InvalidOpCode}
{0xB9} 00, {InvalidOpCode}
{0xBA} 00, {InvalidOpCode}
{0xBB} 00, {InvalidOpCode}
{0xBC} 00, {InvalidOpCode}
{0xBD} 00, {InvalidOpCode}
{0xBE} 00, {InvalidOpCode}
{0xBF} 00, {InvalidOpCode}
{0xC0} 00, {InvalidOpCode}
{0xC1} 00, {InvalidOpCode}
{0xC2} 00, {InvalidOpCode}
{0xC3} 00, {InvalidOpCode}
{0xC4} 00, {InvalidOpCode}
{0xC5} 00, {InvalidOpCode}
{0xC6} 00, {InvalidOpCode}
{0xC7} 00, {InvalidOpCode}
{0xC8} 00, {InvalidOpCode}
{0xC9} 00, {InvalidOpCode}
{0xCA} 00, {InvalidOpCode}
{0xCB} 00, {InvalidOpCode}
{0xCC} 20, {SHA1RNDS4}
{0xCD} 00, {InvalidOpCode}
{0xCE} 00, {InvalidOpCode}
{0xCF} 00, {InvalidOpCode}
{0xD0} 00, {InvalidOpCode}
{0xD1} 00, {InvalidOpCode}
{0xD2} 00, {InvalidOpCode}
{0xD3} 00, {InvalidOpCode}
{0xD4} 00, {InvalidOpCode}
{0xD5} 00, {InvalidOpCode}
{0xD6} 00, {InvalidOpCode}
{0xD7} 00, {InvalidOpCode}
{0xD8} 00, {InvalidOpCode}
{0xD9} 00, {InvalidOpCode}
{0xDA} 00, {InvalidOpCode}
{0xDB} 00, {InvalidOpCode}
{0xDC} 00, {InvalidOpCode}
{0xDD} 00, {InvalidOpCode}
{0xDE} 00, {InvalidOpCode}
{0xDF} 80, {VAESKEYGENASSIST}
{0xE0} 00, {InvalidOpCode}
{0xE1} 00, {InvalidOpCode}
{0xE2} 00, {InvalidOpCode}
{0xE3} 00, {InvalidOpCode}
{0xE4} 00, {InvalidOpCode}
{0xE5} 00, {InvalidOpCode}
{0xE6} 00, {InvalidOpCode}
{0xE7} 00, {InvalidOpCode}
{0xE8} 00, {InvalidOpCode}
{0xE9} 00, {InvalidOpCode}
{0xEA} 00, {InvalidOpCode}
{0xEB} 00, {InvalidOpCode}
{0xEC} 00, {InvalidOpCode}
{0xED} 00, {InvalidOpCode}
{0xEE} 00, {InvalidOpCode}
{0xEF} 00, {InvalidOpCode}
{0xF0} 81, {RORXv}
{0xF1} 00, {InvalidOpCode}
{0xF2} 00, {InvalidOpCode}
{0xF3} 00, {InvalidOpCode}
{0xF4} 00, {InvalidOpCode}
{0xF5} 00, {InvalidOpCode}
{0xF6} 00, {InvalidOpCode}
{0xF7} 00, {InvalidOpCode}
{0xF8} 00, {InvalidOpCode}
{0xF9} 00, {InvalidOpCode}
{0xFA} 00, {InvalidOpCode}
{0xFB} 00, {InvalidOpCode}
{0xFC} 00, {InvalidOpCode}
{0xFD} 00, {InvalidOpCode}
{0xFE} 00, {InvalidOpCode}
{0xFF} 00 {InvalidOpCode}
);
