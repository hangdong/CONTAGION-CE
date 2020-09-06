// Converted using ConvPNG
#include <stdint.h>
#include "sprites.h"

uint16_t sprites_pal[256] = {
 0x0000,  // 00 :: rgb(0,0,0)
 0x0081,  // 01 :: rgb(0,32,8)
 0x0102,  // 02 :: rgb(0,65,16)
 0x0183,  // 03 :: rgb(0,97,24)
 0x0204,  // 04 :: rgb(0,130,33)
 0x0285,  // 05 :: rgb(0,162,41)
 0x0306,  // 06 :: rgb(0,195,49)
 0x0387,  // 07 :: rgb(0,227,57)
 0x0408,  // 08 :: rgb(8,0,66)
 0x0489,  // 09 :: rgb(8,32,74)
 0x050A,  // 10 :: rgb(8,65,82)
 0x058B,  // 11 :: rgb(8,97,90)
 0x060C,  // 12 :: rgb(8,130,99)
 0x068D,  // 13 :: rgb(8,162,107)
 0x070E,  // 14 :: rgb(8,195,115)
 0x078F,  // 15 :: rgb(8,227,123)
 0x0810,  // 16 :: rgb(16,0,132)
 0x0891,  // 17 :: rgb(16,32,140)
 0x0912,  // 18 :: rgb(16,65,148)
 0x0993,  // 19 :: rgb(16,97,156)
 0x0A14,  // 20 :: rgb(16,130,165)
 0x0A95,  // 21 :: rgb(16,162,173)
 0x0B16,  // 22 :: rgb(16,195,181)
 0x0B97,  // 23 :: rgb(16,227,189)
 0x0C18,  // 24 :: rgb(24,0,198)
 0x0C99,  // 25 :: rgb(24,32,206)
 0x0D1A,  // 26 :: rgb(24,65,214)
 0x0D9B,  // 27 :: rgb(24,97,222)
 0x0E1C,  // 28 :: rgb(24,130,231)
 0x0E9D,  // 29 :: rgb(24,162,239)
 0x0F1E,  // 30 :: rgb(24,195,247)
 0x0F9F,  // 31 :: rgb(24,227,255)
 0x9000,  // 32 :: rgb(33,4,0)
 0x9081,  // 33 :: rgb(33,36,8)
 0x9102,  // 34 :: rgb(33,69,16)
 0x9183,  // 35 :: rgb(33,101,24)
 0x9204,  // 36 :: rgb(33,134,33)
 0x9285,  // 37 :: rgb(33,166,41)
 0x9306,  // 38 :: rgb(33,199,49)
 0x9387,  // 39 :: rgb(33,231,57)
 0x9408,  // 40 :: rgb(41,4,66)
 0x9489,  // 41 :: rgb(41,36,74)
 0x950A,  // 42 :: rgb(41,69,82)
 0x958B,  // 43 :: rgb(41,101,90)
 0x960C,  // 44 :: rgb(41,134,99)
 0x968D,  // 45 :: rgb(41,166,107)
 0x970E,  // 46 :: rgb(41,199,115)
 0x978F,  // 47 :: rgb(41,231,123)
 0x9810,  // 48 :: rgb(49,4,132)
 0x9891,  // 49 :: rgb(49,36,140)
 0x9912,  // 50 :: rgb(49,69,148)
 0x9993,  // 51 :: rgb(49,101,156)
 0x9A14,  // 52 :: rgb(49,134,165)
 0x9A95,  // 53 :: rgb(49,166,173)
 0x9B16,  // 54 :: rgb(49,199,181)
 0x9B97,  // 55 :: rgb(49,231,189)
 0x9C18,  // 56 :: rgb(57,4,198)
 0x9C99,  // 57 :: rgb(57,36,206)
 0x9D1A,  // 58 :: rgb(57,69,214)
 0x9D9B,  // 59 :: rgb(57,101,222)
 0x9E1C,  // 60 :: rgb(57,134,231)
 0x9E9D,  // 61 :: rgb(57,166,239)
 0x9F1E,  // 62 :: rgb(57,199,247)
 0x9F9F,  // 63 :: rgb(57,231,255)
 0x2020,  // 64 :: rgb(66,8,0)
 0x20A1,  // 65 :: rgb(66,40,8)
 0x2122,  // 66 :: rgb(66,73,16)
 0x21A3,  // 67 :: rgb(66,105,24)
 0x2224,  // 68 :: rgb(66,138,33)
 0x22A5,  // 69 :: rgb(66,170,41)
 0x2326,  // 70 :: rgb(66,203,49)
 0x23A7,  // 71 :: rgb(66,235,57)
 0x2428,  // 72 :: rgb(74,8,66)
 0x24A9,  // 73 :: rgb(74,40,74)
 0x252A,  // 74 :: rgb(74,73,82)
 0x25AB,  // 75 :: rgb(74,105,90)
 0x262C,  // 76 :: rgb(74,138,99)
 0x26AD,  // 77 :: rgb(74,170,107)
 0x272E,  // 78 :: rgb(74,203,115)
 0x27AF,  // 79 :: rgb(74,235,123)
 0x2830,  // 80 :: rgb(82,8,132)
 0x28B1,  // 81 :: rgb(82,40,140)
 0x2932,  // 82 :: rgb(82,73,148)
 0x29B3,  // 83 :: rgb(82,105,156)
 0x2A34,  // 84 :: rgb(82,138,165)
 0x2AB5,  // 85 :: rgb(82,170,173)
 0x2B36,  // 86 :: rgb(82,203,181)
 0x2BB7,  // 87 :: rgb(82,235,189)
 0x2C38,  // 88 :: rgb(90,8,198)
 0x2CB9,  // 89 :: rgb(90,40,206)
 0x2D3A,  // 90 :: rgb(90,73,214)
 0x2DBB,  // 91 :: rgb(90,105,222)
 0x2E3C,  // 92 :: rgb(90,138,231)
 0x2EBD,  // 93 :: rgb(90,170,239)
 0x2F3E,  // 94 :: rgb(90,203,247)
 0x2FBF,  // 95 :: rgb(90,235,255)
 0xB020,  // 96 :: rgb(99,12,0)
 0xB0A1,  // 97 :: rgb(99,44,8)
 0xB122,  // 98 :: rgb(99,77,16)
 0xB1A3,  // 99 :: rgb(99,109,24)
 0xB224,  // 100 :: rgb(99,142,33)
 0xB2A5,  // 101 :: rgb(99,174,41)
 0xB326,  // 102 :: rgb(99,207,49)
 0xB3A7,  // 103 :: rgb(99,239,57)
 0xB428,  // 104 :: rgb(107,12,66)
 0xB4A9,  // 105 :: rgb(107,44,74)
 0xB52A,  // 106 :: rgb(107,77,82)
 0xB5AB,  // 107 :: rgb(107,109,90)
 0xB62C,  // 108 :: rgb(107,142,99)
 0xB6AD,  // 109 :: rgb(107,174,107)
 0xB72E,  // 110 :: rgb(107,207,115)
 0xB7AF,  // 111 :: rgb(107,239,123)
 0xB830,  // 112 :: rgb(115,12,132)
 0xB8B1,  // 113 :: rgb(115,44,140)
 0xB932,  // 114 :: rgb(115,77,148)
 0xB9B3,  // 115 :: rgb(115,109,156)
 0xBA34,  // 116 :: rgb(115,142,165)
 0xBAB5,  // 117 :: rgb(115,174,173)
 0xBB36,  // 118 :: rgb(115,207,181)
 0xBBB7,  // 119 :: rgb(115,239,189)
 0xBC38,  // 120 :: rgb(123,12,198)
 0xBCB9,  // 121 :: rgb(123,44,206)
 0xBD3A,  // 122 :: rgb(123,77,214)
 0xBDBB,  // 123 :: rgb(123,109,222)
 0xBE3C,  // 124 :: rgb(123,142,231)
 0xBEBD,  // 125 :: rgb(123,174,239)
 0xBF3E,  // 126 :: rgb(123,207,247)
 0xBFBF,  // 127 :: rgb(123,239,255)
 0x4040,  // 128 :: rgb(132,16,0)
 0x40C1,  // 129 :: rgb(132,48,8)
 0x4142,  // 130 :: rgb(132,81,16)
 0x41C3,  // 131 :: rgb(132,113,24)
 0x4244,  // 132 :: rgb(132,146,33)
 0x42C5,  // 133 :: rgb(132,178,41)
 0x4346,  // 134 :: rgb(132,211,49)
 0x43C7,  // 135 :: rgb(132,243,57)
 0x4448,  // 136 :: rgb(140,16,66)
 0x44C9,  // 137 :: rgb(140,48,74)
 0x454A,  // 138 :: rgb(140,81,82)
 0x45CB,  // 139 :: rgb(140,113,90)
 0x464C,  // 140 :: rgb(140,146,99)
 0x46CD,  // 141 :: rgb(140,178,107)
 0x474E,  // 142 :: rgb(140,211,115)
 0x47CF,  // 143 :: rgb(140,243,123)
 0x4850,  // 144 :: rgb(148,16,132)
 0x48D1,  // 145 :: rgb(148,48,140)
 0x4952,  // 146 :: rgb(148,81,148)
 0x49D3,  // 147 :: rgb(148,113,156)
 0x4A54,  // 148 :: rgb(148,146,165)
 0x4AD5,  // 149 :: rgb(148,178,173)
 0x4B56,  // 150 :: rgb(148,211,181)
 0x4BD7,  // 151 :: rgb(148,243,189)
 0x4C58,  // 152 :: rgb(156,16,198)
 0x4CD9,  // 153 :: rgb(156,48,206)
 0x4D5A,  // 154 :: rgb(156,81,214)
 0x4DDB,  // 155 :: rgb(156,113,222)
 0x4E5C,  // 156 :: rgb(156,146,231)
 0x4EDD,  // 157 :: rgb(156,178,239)
 0x4F5E,  // 158 :: rgb(156,211,247)
 0x4FDF,  // 159 :: rgb(156,243,255)
 0xD040,  // 160 :: rgb(165,20,0)
 0xD0C1,  // 161 :: rgb(165,52,8)
 0xD142,  // 162 :: rgb(165,85,16)
 0xD1C3,  // 163 :: rgb(165,117,24)
 0xD244,  // 164 :: rgb(165,150,33)
 0xD2C5,  // 165 :: rgb(165,182,41)
 0xD346,  // 166 :: rgb(165,215,49)
 0xD3C7,  // 167 :: rgb(165,247,57)
 0xD448,  // 168 :: rgb(173,20,66)
 0xD4C9,  // 169 :: rgb(173,52,74)
 0xD54A,  // 170 :: rgb(173,85,82)
 0xD5CB,  // 171 :: rgb(173,117,90)
 0xD64C,  // 172 :: rgb(173,150,99)
 0xD6CD,  // 173 :: rgb(173,182,107)
 0xD74E,  // 174 :: rgb(173,215,115)
 0xD7CF,  // 175 :: rgb(173,247,123)
 0xD850,  // 176 :: rgb(181,20,132)
 0xD8D1,  // 177 :: rgb(181,52,140)
 0xD952,  // 178 :: rgb(181,85,148)
 0xD9D3,  // 179 :: rgb(181,117,156)
 0xDA54,  // 180 :: rgb(181,150,165)
 0xDAD5,  // 181 :: rgb(181,182,173)
 0xDB56,  // 182 :: rgb(181,215,181)
 0xDBD7,  // 183 :: rgb(181,247,189)
 0xDC58,  // 184 :: rgb(189,20,198)
 0xDCD9,  // 185 :: rgb(189,52,206)
 0xDD5A,  // 186 :: rgb(189,85,214)
 0xDDDB,  // 187 :: rgb(189,117,222)
 0xDE5C,  // 188 :: rgb(189,150,231)
 0xDEDD,  // 189 :: rgb(189,182,239)
 0xDF5E,  // 190 :: rgb(189,215,247)
 0xDFDF,  // 191 :: rgb(189,247,255)
 0x6060,  // 192 :: rgb(198,24,0)
 0x60E1,  // 193 :: rgb(198,56,8)
 0x6162,  // 194 :: rgb(198,89,16)
 0x61E3,  // 195 :: rgb(198,121,24)
 0x6264,  // 196 :: rgb(198,154,33)
 0x62E5,  // 197 :: rgb(198,186,41)
 0x6366,  // 198 :: rgb(198,219,49)
 0x63E7,  // 199 :: rgb(198,251,57)
 0x6468,  // 200 :: rgb(206,24,66)
 0x64E9,  // 201 :: rgb(206,56,74)
 0x656A,  // 202 :: rgb(206,89,82)
 0x65EB,  // 203 :: rgb(206,121,90)
 0x666C,  // 204 :: rgb(206,154,99)
 0x66ED,  // 205 :: rgb(206,186,107)
 0x676E,  // 206 :: rgb(206,219,115)
 0x67EF,  // 207 :: rgb(206,251,123)
 0x6870,  // 208 :: rgb(214,24,132)
 0x68F1,  // 209 :: rgb(214,56,140)
 0x6972,  // 210 :: rgb(214,89,148)
 0x69F3,  // 211 :: rgb(214,121,156)
 0x6A74,  // 212 :: rgb(214,154,165)
 0x6AF5,  // 213 :: rgb(214,186,173)
 0x6B76,  // 214 :: rgb(214,219,181)
 0x6BF7,  // 215 :: rgb(214,251,189)
 0x6C78,  // 216 :: rgb(222,24,198)
 0x6CF9,  // 217 :: rgb(222,56,206)
 0x6D7A,  // 218 :: rgb(222,89,214)
 0x6DFB,  // 219 :: rgb(222,121,222)
 0x6E7C,  // 220 :: rgb(222,154,231)
 0x6EFD,  // 221 :: rgb(222,186,239)
 0x6F7E,  // 222 :: rgb(222,219,247)
 0x6FFF,  // 223 :: rgb(222,251,255)
 0xF060,  // 224 :: rgb(231,28,0)
 0xF0E1,  // 225 :: rgb(231,60,8)
 0xF162,  // 226 :: rgb(231,93,16)
 0xF1E3,  // 227 :: rgb(231,125,24)
 0xF264,  // 228 :: rgb(231,158,33)
 0xF2E5,  // 229 :: rgb(231,190,41)
 0xF366,  // 230 :: rgb(231,223,49)
 0xF3E7,  // 231 :: rgb(231,255,57)
 0xF468,  // 232 :: rgb(239,28,66)
 0xF4E9,  // 233 :: rgb(239,60,74)
 0xF56A,  // 234 :: rgb(239,93,82)
 0xF5EB,  // 235 :: rgb(239,125,90)
 0xF66C,  // 236 :: rgb(239,158,99)
 0xF6ED,  // 237 :: rgb(239,190,107)
 0xF76E,  // 238 :: rgb(239,223,115)
 0xF7EF,  // 239 :: rgb(239,255,123)
 0xF870,  // 240 :: rgb(247,28,132)
 0xF8F1,  // 241 :: rgb(247,60,140)
 0xF972,  // 242 :: rgb(247,93,148)
 0xF9F3,  // 243 :: rgb(247,125,156)
 0xFA74,  // 244 :: rgb(247,158,165)
 0xFAF5,  // 245 :: rgb(247,190,173)
 0xFB76,  // 246 :: rgb(247,223,181)
 0xFBF7,  // 247 :: rgb(247,255,189)
 0xFC78,  // 248 :: rgb(255,28,198)
 0xFCF9,  // 249 :: rgb(255,60,206)
 0xFD7A,  // 250 :: rgb(255,93,214)
 0xFDFB,  // 251 :: rgb(255,125,222)
 0xFE7C,  // 252 :: rgb(255,158,231)
 0xFEFD,  // 253 :: rgb(255,190,239)
 0xFF7E,  // 254 :: rgb(255,223,247)
 0xFFFF,  // 255 :: rgb(255,255,255)
};