// SPDX-License-Identifier: Apache-2.0
/**
 * Copyright (c) 2022  Panasonic Automotive Systems, Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef RVGPU_VIRGL_FORMAT_H
#define RVGPU_VIRGL_FORMAT_H

enum virgl_formats {
	VIRGL_FORMAT_NONE = 0,
	VIRGL_FORMAT_B8G8R8A8_UNORM = 1,
	VIRGL_FORMAT_B8G8R8X8_UNORM = 2,
	VIRGL_FORMAT_A8R8G8B8_UNORM = 3,
	VIRGL_FORMAT_X8R8G8B8_UNORM = 4,
	VIRGL_FORMAT_B5G5R5A1_UNORM = 5,
	VIRGL_FORMAT_B4G4R4A4_UNORM = 6,
	VIRGL_FORMAT_B5G6R5_UNORM = 7,
	VIRGL_FORMAT_R10G10B10A2_UNORM = 8,
	VIRGL_FORMAT_L8_UNORM = 9,
	VIRGL_FORMAT_A8_UNORM = 10,
	VIRGL_FORMAT_I8_UNORM = 11,
	VIRGL_FORMAT_L8A8_UNORM = 12,
	VIRGL_FORMAT_L16_UNORM = 13,
	VIRGL_FORMAT_UYVY = 14,
	VIRGL_FORMAT_YUYV = 15,
	VIRGL_FORMAT_Z16_UNORM = 16,
	VIRGL_FORMAT_Z32_UNORM = 17,
	VIRGL_FORMAT_Z32_FLOAT = 18,
	VIRGL_FORMAT_Z24_UNORM_S8_UINT = 19,
	VIRGL_FORMAT_S8_UINT_Z24_UNORM = 20,
	VIRGL_FORMAT_Z24X8_UNORM = 21,
	VIRGL_FORMAT_X8Z24_UNORM = 22,
	VIRGL_FORMAT_S8_UINT = 23,
	VIRGL_FORMAT_R64_FLOAT = 24,
	VIRGL_FORMAT_R64G64_FLOAT = 25,
	VIRGL_FORMAT_R64G64B64_FLOAT = 26,
	VIRGL_FORMAT_R64G64B64A64_FLOAT = 27,
	VIRGL_FORMAT_R32_FLOAT = 28,
	VIRGL_FORMAT_R32G32_FLOAT = 29,
	VIRGL_FORMAT_R32G32B32_FLOAT = 30,
	VIRGL_FORMAT_R32G32B32A32_FLOAT = 31,

	VIRGL_FORMAT_R32_UNORM = 32,
	VIRGL_FORMAT_R32G32_UNORM = 33,
	VIRGL_FORMAT_R32G32B32_UNORM = 34,
	VIRGL_FORMAT_R32G32B32A32_UNORM = 35,
	VIRGL_FORMAT_R32_USCALED = 36,
	VIRGL_FORMAT_R32G32_USCALED = 37,
	VIRGL_FORMAT_R32G32B32_USCALED = 38,
	VIRGL_FORMAT_R32G32B32A32_USCALED = 39,
	VIRGL_FORMAT_R32_SNORM = 40,
	VIRGL_FORMAT_R32G32_SNORM = 41,
	VIRGL_FORMAT_R32G32B32_SNORM = 42,
	VIRGL_FORMAT_R32G32B32A32_SNORM = 43,
	VIRGL_FORMAT_R32_SSCALED = 44,
	VIRGL_FORMAT_R32G32_SSCALED = 45,
	VIRGL_FORMAT_R32G32B32_SSCALED = 46,
	VIRGL_FORMAT_R32G32B32A32_SSCALED = 47,

	VIRGL_FORMAT_R16_UNORM = 48,
	VIRGL_FORMAT_R16G16_UNORM = 49,
	VIRGL_FORMAT_R16G16B16_UNORM = 50,
	VIRGL_FORMAT_R16G16B16A16_UNORM = 51,

	VIRGL_FORMAT_R16_USCALED = 52,
	VIRGL_FORMAT_R16G16_USCALED = 53,
	VIRGL_FORMAT_R16G16B16_USCALED = 54,
	VIRGL_FORMAT_R16G16B16A16_USCALED = 55,

	VIRGL_FORMAT_R16_SNORM = 56,
	VIRGL_FORMAT_R16G16_SNORM = 57,
	VIRGL_FORMAT_R16G16B16_SNORM = 58,
	VIRGL_FORMAT_R16G16B16A16_SNORM = 59,

	VIRGL_FORMAT_R16_SSCALED = 60,
	VIRGL_FORMAT_R16G16_SSCALED = 61,
	VIRGL_FORMAT_R16G16B16_SSCALED = 62,
	VIRGL_FORMAT_R16G16B16A16_SSCALED = 63,

	VIRGL_FORMAT_R8_UNORM = 64,
	VIRGL_FORMAT_R8G8_UNORM = 65,
	VIRGL_FORMAT_R8G8B8_UNORM = 66,
	VIRGL_FORMAT_R8G8B8A8_UNORM = 67,
	VIRGL_FORMAT_X8B8G8R8_UNORM = 68,

	VIRGL_FORMAT_R8_USCALED = 69,
	VIRGL_FORMAT_R8G8_USCALED = 70,
	VIRGL_FORMAT_R8G8B8_USCALED = 71,
	VIRGL_FORMAT_R8G8B8A8_USCALED = 72,

	VIRGL_FORMAT_R8_SNORM = 74,
	VIRGL_FORMAT_R8G8_SNORM = 75,
	VIRGL_FORMAT_R8G8B8_SNORM = 76,
	VIRGL_FORMAT_R8G8B8A8_SNORM = 77,

	VIRGL_FORMAT_R8_SSCALED = 82,
	VIRGL_FORMAT_R8G8_SSCALED = 83,
	VIRGL_FORMAT_R8G8B8_SSCALED = 84,
	VIRGL_FORMAT_R8G8B8A8_SSCALED = 85,

	VIRGL_FORMAT_R32_FIXED = 87,
	VIRGL_FORMAT_R32G32_FIXED = 88,
	VIRGL_FORMAT_R32G32B32_FIXED = 89,
	VIRGL_FORMAT_R32G32B32A32_FIXED = 90,

	VIRGL_FORMAT_R16_FLOAT = 91,
	VIRGL_FORMAT_R16G16_FLOAT = 92,
	VIRGL_FORMAT_R16G16B16_FLOAT = 93,
	VIRGL_FORMAT_R16G16B16A16_FLOAT = 94,

	VIRGL_FORMAT_L8_SRGB = 95,
	VIRGL_FORMAT_L8A8_SRGB = 96,
	VIRGL_FORMAT_R8G8B8_SRGB = 97,
	VIRGL_FORMAT_A8B8G8R8_SRGB = 98,
	VIRGL_FORMAT_X8B8G8R8_SRGB = 99,
	VIRGL_FORMAT_B8G8R8A8_SRGB = 100,
	VIRGL_FORMAT_B8G8R8X8_SRGB = 101,
	VIRGL_FORMAT_A8R8G8B8_SRGB = 102,
	VIRGL_FORMAT_X8R8G8B8_SRGB = 103,
	VIRGL_FORMAT_R8G8B8A8_SRGB = 104,

	/* compressed formats */
	VIRGL_FORMAT_DXT1_RGB = 105,
	VIRGL_FORMAT_DXT1_RGBA = 106,
	VIRGL_FORMAT_DXT3_RGBA = 107,
	VIRGL_FORMAT_DXT5_RGBA = 108,

	/* sRGB, compressed */
	VIRGL_FORMAT_DXT1_SRGB = 109,
	VIRGL_FORMAT_DXT1_SRGBA = 110,
	VIRGL_FORMAT_DXT3_SRGBA = 111,
	VIRGL_FORMAT_DXT5_SRGBA = 112,

	/* rgtc compressed */
	VIRGL_FORMAT_RGTC1_UNORM = 113,
	VIRGL_FORMAT_RGTC1_SNORM = 114,
	VIRGL_FORMAT_RGTC2_UNORM = 115,
	VIRGL_FORMAT_RGTC2_SNORM = 116,

	VIRGL_FORMAT_R8G8_B8G8_UNORM = 117,
	VIRGL_FORMAT_G8R8_G8B8_UNORM = 118,

	VIRGL_FORMAT_R8SG8SB8UX8U_NORM = 119,
	VIRGL_FORMAT_R5SG5SB6U_NORM = 120,

	VIRGL_FORMAT_A8B8G8R8_UNORM = 121,
	VIRGL_FORMAT_B5G5R5X1_UNORM = 122,
	VIRGL_FORMAT_R10G10B10A2_USCALED = 123,
	VIRGL_FORMAT_R11G11B10_FLOAT = 124,
	VIRGL_FORMAT_R9G9B9E5_FLOAT = 125,
	VIRGL_FORMAT_Z32_FLOAT_S8X24_UINT = 126,
	VIRGL_FORMAT_R1_UNORM = 127,
	VIRGL_FORMAT_R10G10B10X2_USCALED = 128,
	VIRGL_FORMAT_R10G10B10X2_SNORM = 129,

	VIRGL_FORMAT_L4A4_UNORM = 130,
	VIRGL_FORMAT_B10G10R10A2_UNORM = 131,
	VIRGL_FORMAT_R10SG10SB10SA2U_NORM = 132,
	VIRGL_FORMAT_R8G8Bx_SNORM = 133,
	VIRGL_FORMAT_R8G8B8X8_UNORM = 134,
	VIRGL_FORMAT_B4G4R4X4_UNORM = 135,
	VIRGL_FORMAT_X24S8_UINT = 136,
	VIRGL_FORMAT_S8X24_UINT = 137,
	VIRGL_FORMAT_X32_S8X24_UINT = 138,
	VIRGL_FORMAT_B2G3R3_UNORM = 139,

	VIRGL_FORMAT_L16A16_UNORM = 140,
	VIRGL_FORMAT_A16_UNORM = 141,
	VIRGL_FORMAT_I16_UNORM = 142,

	VIRGL_FORMAT_LATC1_UNORM = 143,
	VIRGL_FORMAT_LATC1_SNORM = 144,
	VIRGL_FORMAT_LATC2_UNORM = 145,
	VIRGL_FORMAT_LATC2_SNORM = 146,

	VIRGL_FORMAT_A8_SNORM = 147,
	VIRGL_FORMAT_L8_SNORM = 148,
	VIRGL_FORMAT_L8A8_SNORM = 149,
	VIRGL_FORMAT_I8_SNORM = 150,
	VIRGL_FORMAT_A16_SNORM = 151,
	VIRGL_FORMAT_L16_SNORM = 152,
	VIRGL_FORMAT_L16A16_SNORM = 153,
	VIRGL_FORMAT_I16_SNORM = 154,

	VIRGL_FORMAT_A16_FLOAT = 155,
	VIRGL_FORMAT_L16_FLOAT = 156,
	VIRGL_FORMAT_L16A16_FLOAT = 157,
	VIRGL_FORMAT_I16_FLOAT = 158,
	VIRGL_FORMAT_A32_FLOAT = 159,
	VIRGL_FORMAT_L32_FLOAT = 160,
	VIRGL_FORMAT_L32A32_FLOAT = 161,
	VIRGL_FORMAT_I32_FLOAT = 162,

	VIRGL_FORMAT_YV12 = 163,
	VIRGL_FORMAT_YV16 = 164,
	VIRGL_FORMAT_IYUV = 165,
	VIRGL_FORMAT_NV12 = 166,
	VIRGL_FORMAT_NV21 = 167,

	VIRGL_FORMAT_A4R4_UNORM = 168,
	VIRGL_FORMAT_R4A4_UNORM = 169,
	VIRGL_FORMAT_R8A8_UNORM = 170,
	VIRGL_FORMAT_A8R8_UNORM = 171,

	VIRGL_FORMAT_R10G10B10A2_SSCALED = 172,
	VIRGL_FORMAT_R10G10B10A2_SNORM = 173,
	VIRGL_FORMAT_B10G10R10A2_USCALED = 174,
	VIRGL_FORMAT_B10G10R10A2_SSCALED = 175,
	VIRGL_FORMAT_B10G10R10A2_SNORM = 176,

	VIRGL_FORMAT_R8_UINT = 177,
	VIRGL_FORMAT_R8G8_UINT = 178,
	VIRGL_FORMAT_R8G8B8_UINT = 179,
	VIRGL_FORMAT_R8G8B8A8_UINT = 180,

	VIRGL_FORMAT_R8_SINT = 181,
	VIRGL_FORMAT_R8G8_SINT = 182,
	VIRGL_FORMAT_R8G8B8_SINT = 183,
	VIRGL_FORMAT_R8G8B8A8_SINT = 184,

	VIRGL_FORMAT_R16_UINT = 185,
	VIRGL_FORMAT_R16G16_UINT = 186,
	VIRGL_FORMAT_R16G16B16_UINT = 187,
	VIRGL_FORMAT_R16G16B16A16_UINT = 188,

	VIRGL_FORMAT_R16_SINT = 189,
	VIRGL_FORMAT_R16G16_SINT = 190,
	VIRGL_FORMAT_R16G16B16_SINT = 191,
	VIRGL_FORMAT_R16G16B16A16_SINT = 192,
	VIRGL_FORMAT_R32_UINT = 193,
	VIRGL_FORMAT_R32G32_UINT = 194,
	VIRGL_FORMAT_R32G32B32_UINT = 195,
	VIRGL_FORMAT_R32G32B32A32_UINT = 196,

	VIRGL_FORMAT_R32_SINT = 197,
	VIRGL_FORMAT_R32G32_SINT = 198,
	VIRGL_FORMAT_R32G32B32_SINT = 199,
	VIRGL_FORMAT_R32G32B32A32_SINT = 200,

	VIRGL_FORMAT_A8_UINT = 201,
	VIRGL_FORMAT_I8_UINT = 202,
	VIRGL_FORMAT_L8_UINT = 203,
	VIRGL_FORMAT_L8A8_UINT = 204,

	VIRGL_FORMAT_A8_SINT = 205,
	VIRGL_FORMAT_I8_SINT = 206,
	VIRGL_FORMAT_L8_SINT = 207,
	VIRGL_FORMAT_L8A8_SINT = 208,

	VIRGL_FORMAT_A16_UINT = 209,
	VIRGL_FORMAT_I16_UINT = 210,
	VIRGL_FORMAT_L16_UINT = 211,
	VIRGL_FORMAT_L16A16_UINT = 212,

	VIRGL_FORMAT_A16_SINT = 213,
	VIRGL_FORMAT_I16_SINT = 214,
	VIRGL_FORMAT_L16_SINT = 215,
	VIRGL_FORMAT_L16A16_SINT = 216,

	VIRGL_FORMAT_A32_UINT = 217,
	VIRGL_FORMAT_I32_UINT = 218,
	VIRGL_FORMAT_L32_UINT = 219,
	VIRGL_FORMAT_L32A32_UINT = 220,

	VIRGL_FORMAT_A32_SINT = 221,
	VIRGL_FORMAT_I32_SINT = 222,
	VIRGL_FORMAT_L32_SINT = 223,
	VIRGL_FORMAT_L32A32_SINT = 224,

	VIRGL_FORMAT_B10G10R10A2_UINT = 225,
	VIRGL_FORMAT_ETC1_RGB8 = 226,
	VIRGL_FORMAT_R8G8_R8B8_UNORM = 227,
	VIRGL_FORMAT_G8R8_B8R8_UNORM = 228,
	VIRGL_FORMAT_R8G8B8X8_SNORM = 229,

	VIRGL_FORMAT_R8G8B8X8_SRGB = 230,

	VIRGL_FORMAT_R8G8B8X8_UINT = 231,
	VIRGL_FORMAT_R8G8B8X8_SINT = 232,
	VIRGL_FORMAT_B10G10R10X2_UNORM = 233,
	VIRGL_FORMAT_R16G16B16X16_UNORM = 234,
	VIRGL_FORMAT_R16G16B16X16_SNORM = 235,
	VIRGL_FORMAT_R16G16B16X16_FLOAT = 236,
	VIRGL_FORMAT_R16G16B16X16_UINT = 237,
	VIRGL_FORMAT_R16G16B16X16_SINT = 238,
	VIRGL_FORMAT_R32G32B32X32_FLOAT = 239,
	VIRGL_FORMAT_R32G32B32X32_UINT = 240,
	VIRGL_FORMAT_R32G32B32X32_SINT = 241,
	VIRGL_FORMAT_R8A8_SNORM = 242,
	VIRGL_FORMAT_R16A16_UNORM = 243,
	VIRGL_FORMAT_R16A16_SNORM = 244,
	VIRGL_FORMAT_R16A16_FLOAT = 245,
	VIRGL_FORMAT_R32A32_FLOAT = 246,
	VIRGL_FORMAT_R8A8_UINT = 247,
	VIRGL_FORMAT_R8A8_SINT = 248,
	VIRGL_FORMAT_R16A16_UINT = 249,
	VIRGL_FORMAT_R16A16_SINT = 250,
	VIRGL_FORMAT_R32A32_UINT = 251,
	VIRGL_FORMAT_R32A32_SINT = 252,

	VIRGL_FORMAT_R10G10B10A2_UINT = 253,
	VIRGL_FORMAT_B5G6R5_SRGB = 254,

	VIRGL_FORMAT_BPTC_RGBA_UNORM = 255,
	VIRGL_FORMAT_BPTC_SRGBA = 256,
	VIRGL_FORMAT_BPTC_RGB_FLOAT = 257,
	VIRGL_FORMAT_BPTC_RGB_UFLOAT = 258,

	VIRGL_FORMAT_A16L16_UNORM = 262,

	VIRGL_FORMAT_G8R8_UNORM = 263,
	VIRGL_FORMAT_G8R8_SNORM = 264,
	VIRGL_FORMAT_G16R16_UNORM = 265,
	VIRGL_FORMAT_G16R16_SNORM = 266,
	VIRGL_FORMAT_A8B8G8R8_SNORM = 267,

	VIRGL_FORMAT_A8L8_UNORM = 259,
	VIRGL_FORMAT_A8L8_SNORM = 260,
	VIRGL_FORMAT_A8L8_SRGB = 261,

	VIRGL_FORMAT_X8B8G8R8_SNORM = 268,

	/* etc2 compressed */
	VIRGL_FORMAT_ETC2_RGB8 = 269,
	VIRGL_FORMAT_ETC2_SRGB8 = 270,
	VIRGL_FORMAT_ETC2_RGB8A1 = 271,
	VIRGL_FORMAT_ETC2_SRGB8A1 = 272,
	VIRGL_FORMAT_ETC2_RGBA8 = 273,
	VIRGL_FORMAT_ETC2_SRGBA8 = 274,
	VIRGL_FORMAT_ETC2_R11_UNORM = 275,
	VIRGL_FORMAT_ETC2_R11_SNORM = 276,
	VIRGL_FORMAT_ETC2_RG11_UNORM = 277,
	VIRGL_FORMAT_ETC2_RG11_SNORM = 278,

	/* astc compressed */
	VIRGL_FORMAT_ASTC_4x4 = 279,
	VIRGL_FORMAT_ASTC_5x4 = 280,
	VIRGL_FORMAT_ASTC_5x5 = 281,
	VIRGL_FORMAT_ASTC_6x5 = 282,
	VIRGL_FORMAT_ASTC_6x6 = 283,
	VIRGL_FORMAT_ASTC_8x5 = 284,
	VIRGL_FORMAT_ASTC_8x6 = 285,
	VIRGL_FORMAT_ASTC_8x8 = 286,
	VIRGL_FORMAT_ASTC_10x5 = 287,
	VIRGL_FORMAT_ASTC_10x6 = 288,
	VIRGL_FORMAT_ASTC_10x8 = 289,
	VIRGL_FORMAT_ASTC_10x10 = 290,
	VIRGL_FORMAT_ASTC_12x10 = 291,
	VIRGL_FORMAT_ASTC_12x12 = 292,
	VIRGL_FORMAT_ASTC_4x4_SRGB = 293,
	VIRGL_FORMAT_ASTC_5x4_SRGB = 294,
	VIRGL_FORMAT_ASTC_5x5_SRGB = 295,
	VIRGL_FORMAT_ASTC_6x5_SRGB = 296,
	VIRGL_FORMAT_ASTC_6x6_SRGB = 297,
	VIRGL_FORMAT_ASTC_8x5_SRGB = 298,
	VIRGL_FORMAT_ASTC_8x6_SRGB = 299,
	VIRGL_FORMAT_ASTC_8x8_SRGB = 300,
	VIRGL_FORMAT_ASTC_10x5_SRGB = 301,
	VIRGL_FORMAT_ASTC_10x6_SRGB = 302,
	VIRGL_FORMAT_ASTC_10x8_SRGB = 303,
	VIRGL_FORMAT_ASTC_10x10_SRGB = 304,
	VIRGL_FORMAT_ASTC_12x10_SRGB = 305,
	VIRGL_FORMAT_ASTC_12x12_SRGB = 306,

	VIRGL_FORMAT_R10G10B10X2_UNORM = 308,
	VIRGL_FORMAT_A4B4G4R4_UNORM = 311,

	VIRGL_FORMAT_R8_SRGB = 312,
	VIRGL_FORMAT_R8G8_SRGB = 313,
	VIRGL_FORMAT_P010 = 314
};

static inline const char *get_virgl_format_string(enum virgl_formats format)
{
	switch (format) {
	case VIRGL_FORMAT_NONE:
		return "VIRGL_FORMAT_NONE";
	case VIRGL_FORMAT_B8G8R8A8_UNORM:
		return "VIRGL_FORMAT_B8G8R8A8_UNORM";
	case VIRGL_FORMAT_B8G8R8X8_UNORM:
		return "VIRGL_FORMAT_B8G8R8X8_UNORM";
	case VIRGL_FORMAT_A8R8G8B8_UNORM:
		return "VIRGL_FORMAT_A8R8G8B8_UNORM";
	case VIRGL_FORMAT_X8R8G8B8_UNORM:
		return "VIRGL_FORMAT_X8R8G8B8_UNORM";
	case VIRGL_FORMAT_B5G5R5A1_UNORM:
		return "VIRGL_FORMAT_B5G5R5A1_UNORM";
	case VIRGL_FORMAT_B4G4R4A4_UNORM:
		return "VIRGL_FORMAT_B4G4R4A4_UNORM";
	case VIRGL_FORMAT_B5G6R5_UNORM:
		return "VIRGL_FORMAT_B5G6R5_UNORM";
	case VIRGL_FORMAT_R10G10B10A2_UNORM:
		return "VIRGL_FORMAT_R10G10B10A2_UNORM";
	case VIRGL_FORMAT_L8_UNORM:
		return "VIRGL_FORMAT_L8_UNORM";
	case VIRGL_FORMAT_A8_UNORM:
		return "VIRGL_FORMAT_A8_UNORM";
	case VIRGL_FORMAT_I8_UNORM:
		return "VIRGL_FORMAT_I8_UNORM";
	case VIRGL_FORMAT_L8A8_UNORM:
		return "VIRGL_FORMAT_L8A8_UNORM";
	case VIRGL_FORMAT_L16_UNORM:
		return "VIRGL_FORMAT_L16_UNORM";
	case VIRGL_FORMAT_UYVY:
		return "VIRGL_FORMAT_UYVY";
	case VIRGL_FORMAT_YUYV:
		return "VIRGL_FORMAT_YUYV";
	case VIRGL_FORMAT_Z16_UNORM:
		return "VIRGL_FORMAT_Z16_UNORM";
	case VIRGL_FORMAT_Z32_UNORM:
		return "VIRGL_FORMAT_Z32_UNORM";
	case VIRGL_FORMAT_Z32_FLOAT:
		return "VIRGL_FORMAT_Z32_FLOAT";
	case VIRGL_FORMAT_Z24_UNORM_S8_UINT:
		return "VIRGL_FORMAT_Z24_UNORM_S8_UINT";
	case VIRGL_FORMAT_S8_UINT_Z24_UNORM:
		return "VIRGL_FORMAT_S8_UINT_Z24_UNORM";
	case VIRGL_FORMAT_Z24X8_UNORM:
		return "VIRGL_FORMAT_Z24X8_UNORM";
	case VIRGL_FORMAT_X8Z24_UNORM:
		return "VIRGL_FORMAT_X8Z24_UNORM";
	case VIRGL_FORMAT_S8_UINT:
		return "VIRGL_FORMAT_S8_UINT";
	case VIRGL_FORMAT_R64_FLOAT:
		return "VIRGL_FORMAT_R64_FLOAT";
	case VIRGL_FORMAT_R64G64_FLOAT:
		return "VIRGL_FORMAT_R64G64_FLOAT";
	case VIRGL_FORMAT_R64G64B64_FLOAT:
		return "VIRGL_FORMAT_R64G64B64_FLOAT";
	case VIRGL_FORMAT_R64G64B64A64_FLOAT:
		return "VIRGL_FORMAT_R64G64B64A64_FLOAT";
	case VIRGL_FORMAT_R32_FLOAT:
		return "VIRGL_FORMAT_R32_FLOAT";
	case VIRGL_FORMAT_R32G32_FLOAT:
		return "VIRGL_FORMAT_R32G32_FLOAT";
	case VIRGL_FORMAT_R32G32B32_FLOAT:
		return "VIRGL_FORMAT_R32G32B32_FLOAT";
	case VIRGL_FORMAT_R32G32B32A32_FLOAT:
		return "VIRGL_FORMAT_R32G32B32A32_FLOAT";
	case VIRGL_FORMAT_R32_UNORM:
		return "VIRGL_FORMAT_R32_UNORM";
	case VIRGL_FORMAT_R32G32_UNORM:
		return "VIRGL_FORMAT_R32G32_UNORM";
	case VIRGL_FORMAT_R32G32B32_UNORM:
		return "VIRGL_FORMAT_R32G32B32_UNORM";
	case VIRGL_FORMAT_R32G32B32A32_UNORM:
		return "VIRGL_FORMAT_R32G32B32A32_UNORM";
	case VIRGL_FORMAT_R32_USCALED:
		return "VIRGL_FORMAT_R32_USCALED";
	case VIRGL_FORMAT_R32G32_USCALED:
		return "VIRGL_FORMAT_R32G32_USCALED";
	case VIRGL_FORMAT_R32G32B32_USCALED:
		return "VIRGL_FORMAT_R32G32B32_USCALED";
	case VIRGL_FORMAT_R32G32B32A32_USCALED:
		return "VIRGL_FORMAT_R32G32B32A32_USCALED";
	case VIRGL_FORMAT_R32_SNORM:
		return "VIRGL_FORMAT_R32_SNORM";
	case VIRGL_FORMAT_R32G32_SNORM:
		return "VIRGL_FORMAT_R32G32_SNORM";
	case VIRGL_FORMAT_R32G32B32_SNORM:
		return "VIRGL_FORMAT_R32G32B32_SNORM";
	case VIRGL_FORMAT_R32G32B32A32_SNORM:
		return "VIRGL_FORMAT_R32G32B32A32_SNORM";
	case VIRGL_FORMAT_R32_SSCALED:
		return "VIRGL_FORMAT_R32_SSCALED";
	case VIRGL_FORMAT_R32G32_SSCALED:
		return "VIRGL_FORMAT_R32G32_SSCALED";
	case VIRGL_FORMAT_R32G32B32_SSCALED:
		return "VIRGL_FORMAT_R32G32B32_SSCALED";
	case VIRGL_FORMAT_R32G32B32A32_SSCALED:
		return "VIRGL_FORMAT_R32G32B32A32_SSCALED";
	case VIRGL_FORMAT_R16_UNORM:
		return "VIRGL_FORMAT_R16_UNORM";
	case VIRGL_FORMAT_R16G16_UNORM:
		return "VIRGL_FORMAT_R16G16_UNORM";
	case VIRGL_FORMAT_R16G16B16_UNORM:
		return "VIRGL_FORMAT_R16G16B16_UNORM";
	case VIRGL_FORMAT_R16G16B16A16_UNORM:
		return "VIRGL_FORMAT_R16G16B16A16_UNORM";
	case VIRGL_FORMAT_R16_USCALED:
		return "VIRGL_FORMAT_R16_USCALED";
	case VIRGL_FORMAT_R16G16_USCALED:
		return "VIRGL_FORMAT_R16G16_USCALED";
	case VIRGL_FORMAT_R16G16B16_USCALED:
		return "VIRGL_FORMAT_R16G16B16_USCALED";
	case VIRGL_FORMAT_R16G16B16A16_USCALED:
		return "VIRGL_FORMAT_R16G16B16A16_USCALED";
	case VIRGL_FORMAT_R16_SNORM:
		return "VIRGL_FORMAT_R16_SNORM";
	case VIRGL_FORMAT_R16G16_SNORM:
		return "VIRGL_FORMAT_R16G16_SNORM";
	case VIRGL_FORMAT_R16G16B16_SNORM:
		return "VIRGL_FORMAT_R16G16B16_SNORM";
	case VIRGL_FORMAT_R16G16B16A16_SNORM:
		return "VIRGL_FORMAT_R16G16B16A16_SNORM";
	case VIRGL_FORMAT_R16_SSCALED:
		return "VIRGL_FORMAT_R16_SSCALED";
	case VIRGL_FORMAT_R16G16_SSCALED:
		return "VIRGL_FORMAT_R16G16_SSCALED";
	case VIRGL_FORMAT_R16G16B16_SSCALED:
		return "VIRGL_FORMAT_R16G16B16_SSCALED";
	case VIRGL_FORMAT_R16G16B16A16_SSCALED:
		return "VIRGL_FORMAT_R16G16B16A16_SSCALED";
	case VIRGL_FORMAT_R8_UNORM:
		return "VIRGL_FORMAT_R8_UNORM";
	case VIRGL_FORMAT_R8G8_UNORM:
		return "VIRGL_FORMAT_R8G8_UNORM";
	case VIRGL_FORMAT_R8G8B8_UNORM:
		return "VIRGL_FORMAT_R8G8B8_UNORM";
	case VIRGL_FORMAT_R8G8B8A8_UNORM:
		return "VIRGL_FORMAT_R8G8B8A8_UNORM";
	case VIRGL_FORMAT_X8B8G8R8_UNORM:
		return "VIRGL_FORMAT_X8B8G8R8_UNORM";
	case VIRGL_FORMAT_R8_USCALED:
		return "VIRGL_FORMAT_R8_USCALED";
	case VIRGL_FORMAT_R8G8_USCALED:
		return "VIRGL_FORMAT_R8G8_USCALED";
	case VIRGL_FORMAT_R8G8B8_USCALED:
		return "VIRGL_FORMAT_R8G8B8_USCALED";
	case VIRGL_FORMAT_R8G8B8A8_USCALED:
		return "VIRGL_FORMAT_R8G8B8A8_USCALED";
	case VIRGL_FORMAT_R8_SNORM:
		return "VIRGL_FORMAT_R8_SNORM";
	case VIRGL_FORMAT_R8G8_SNORM:
		return "VIRGL_FORMAT_R8G8_SNORM";
	case VIRGL_FORMAT_R8G8B8_SNORM:
		return "VIRGL_FORMAT_R8G8B8_SNORM";
	case VIRGL_FORMAT_R8G8B8A8_SNORM:
		return "VIRGL_FORMAT_R8G8B8A8_SNORM";
	case VIRGL_FORMAT_R8_SSCALED:
		return "VIRGL_FORMAT_R8_SSCALED";
	case VIRGL_FORMAT_R8G8_SSCALED:
		return "VIRGL_FORMAT_R8G8_SSCALED";
	case VIRGL_FORMAT_R8G8B8_SSCALED:
		return "VIRGL_FORMAT_R8G8B8_SSCALED";
	case VIRGL_FORMAT_R8G8B8A8_SSCALED:
		return "VIRGL_FORMAT_R8G8B8A8_SSCALED";
	case VIRGL_FORMAT_R32_FIXED:
		return "VIRGL_FORMAT_R32_FIXED";
	case VIRGL_FORMAT_R32G32_FIXED:
		return "VIRGL_FORMAT_R32G32_FIXED";
	case VIRGL_FORMAT_R32G32B32_FIXED:
		return "VIRGL_FORMAT_R32G32B32_FIXED";
	case VIRGL_FORMAT_R32G32B32A32_FIXED:
		return "VIRGL_FORMAT_R32G32B32A32_FIXED";
	case VIRGL_FORMAT_R16_FLOAT:
		return "VIRGL_FORMAT_R16_FLOAT";
	case VIRGL_FORMAT_R16G16_FLOAT:
		return "VIRGL_FORMAT_R16G16_FLOAT";
	case VIRGL_FORMAT_R16G16B16_FLOAT:
		return "VIRGL_FORMAT_R16G16B16_FLOAT";
	case VIRGL_FORMAT_R16G16B16A16_FLOAT:
		return "VIRGL_FORMAT_R16G16B16A16_FLOAT";
	case VIRGL_FORMAT_L8_SRGB:
		return "VIRGL_FORMAT_L8_SRGB";
	case VIRGL_FORMAT_L8A8_SRGB:
		return "VIRGL_FORMAT_L8A8_SRGB";
	case VIRGL_FORMAT_R8G8B8_SRGB:
		return "VIRGL_FORMAT_R8G8B8_SRGB";
	case VIRGL_FORMAT_A8B8G8R8_SRGB:
		return "VIRGL_FORMAT_A8B8G8R8_SRGB";
	case VIRGL_FORMAT_X8B8G8R8_SRGB:
		return "VIRGL_FORMAT_X8B8G8R8_SRGB";
	case VIRGL_FORMAT_B8G8R8A8_SRGB:
		return "VIRGL_FORMAT_B8G8R8A8_SRGB";
	case VIRGL_FORMAT_B8G8R8X8_SRGB:
		return "VIRGL_FORMAT_B8G8R8X8_SRGB";
	case VIRGL_FORMAT_A8R8G8B8_SRGB:
		return "VIRGL_FORMAT_A8R8G8B8_SRGB";
	case VIRGL_FORMAT_X8R8G8B8_SRGB:
		return "VIRGL_FORMAT_X8R8G8B8_SRGB";
	case VIRGL_FORMAT_R8G8B8A8_SRGB:
		return "VIRGL_FORMAT_R8G8B8A8_SRGB";
	case VIRGL_FORMAT_DXT1_RGB:
		return "VIRGL_FORMAT_DXT1_RGB";
	case VIRGL_FORMAT_DXT1_RGBA:
		return "VIRGL_FORMAT_DXT1_RGBA";
	case VIRGL_FORMAT_DXT3_RGBA:
		return "VIRGL_FORMAT_DXT3_RGBA";
	case VIRGL_FORMAT_DXT5_RGBA:
		return "VIRGL_FORMAT_DXT5_RGBA";
	case VIRGL_FORMAT_DXT1_SRGB:
		return "VIRGL_FORMAT_DXT1_SRGB";
	case VIRGL_FORMAT_DXT1_SRGBA:
		return "VIRGL_FORMAT_DXT1_SRGBA";
	case VIRGL_FORMAT_DXT3_SRGBA:
		return "VIRGL_FORMAT_DXT3_SRGBA";
	case VIRGL_FORMAT_DXT5_SRGBA:
		return "VIRGL_FORMAT_DXT5_SRGBA";
	case VIRGL_FORMAT_RGTC1_UNORM:
		return "VIRGL_FORMAT_RGTC1_UNORM";
	case VIRGL_FORMAT_RGTC1_SNORM:
		return "VIRGL_FORMAT_RGTC1_SNORM";
	case VIRGL_FORMAT_RGTC2_UNORM:
		return "VIRGL_FORMAT_RGTC2_UNORM";
	case VIRGL_FORMAT_RGTC2_SNORM:
		return "VIRGL_FORMAT_RGTC2_SNORM";
	case VIRGL_FORMAT_R8G8_B8G8_UNORM:
		return "VIRGL_FORMAT_R8G8_B8G8_UNORM";
	case VIRGL_FORMAT_G8R8_G8B8_UNORM:
		return "VIRGL_FORMAT_G8R8_G8B8_UNORM";
	case VIRGL_FORMAT_R8SG8SB8UX8U_NORM:
		return "VIRGL_FORMAT_R8SG8SB8UX8U_NORM";
	case VIRGL_FORMAT_R5SG5SB6U_NORM:
		return "VIRGL_FORMAT_R5SG5SB6U_NORM";
	case VIRGL_FORMAT_A8B8G8R8_UNORM:
		return "VIRGL_FORMAT_A8B8G8R8_UNORM";
	case VIRGL_FORMAT_B5G5R5X1_UNORM:
		return "VIRGL_FORMAT_B5G5R5X1_UNORM";
	case VIRGL_FORMAT_R10G10B10A2_USCALED:
		return "VIRGL_FORMAT_R10G10B10A2_USCALED";
	case VIRGL_FORMAT_R11G11B10_FLOAT:
		return "VIRGL_FORMAT_R11G11B10_FLOAT";
	case VIRGL_FORMAT_R9G9B9E5_FLOAT:
		return "VIRGL_FORMAT_R9G9B9E5_FLOAT";
	case VIRGL_FORMAT_Z32_FLOAT_S8X24_UINT:
		return "VIRGL_FORMAT_Z32_FLOAT_S8X24_UINT";
	case VIRGL_FORMAT_R1_UNORM:
		return "VIRGL_FORMAT_R1_UNORM";
	case VIRGL_FORMAT_R10G10B10X2_USCALED:
		return "VIRGL_FORMAT_R10G10B10X2_USCALED";
	case VIRGL_FORMAT_R10G10B10X2_SNORM:
		return "VIRGL_FORMAT_R10G10B10X2_SNORM";
	case VIRGL_FORMAT_L4A4_UNORM:
		return "VIRGL_FORMAT_L4A4_UNORM";
	case VIRGL_FORMAT_B10G10R10A2_UNORM:
		return "VIRGL_FORMAT_B10G10R10A2_UNORM";
	case VIRGL_FORMAT_R10SG10SB10SA2U_NORM:
		return "VIRGL_FORMAT_R10SG10SB10SA2U_NORM";
	case VIRGL_FORMAT_R8G8Bx_SNORM:
		return "VIRGL_FORMAT_R8G8Bx_SNORM";
	case VIRGL_FORMAT_R8G8B8X8_UNORM:
		return "VIRGL_FORMAT_R8G8B8X8_UNORM";
	case VIRGL_FORMAT_B4G4R4X4_UNORM:
		return "VIRGL_FORMAT_B4G4R4X4_UNORM";
	case VIRGL_FORMAT_X24S8_UINT:
		return "VIRGL_FORMAT_X24S8_UINT";
	case VIRGL_FORMAT_S8X24_UINT:
		return "VIRGL_FORMAT_S8X24_UINT";
	case VIRGL_FORMAT_X32_S8X24_UINT:
		return "VIRGL_FORMAT_X32_S8X24_UINT";
	case VIRGL_FORMAT_B2G3R3_UNORM:
		return "VIRGL_FORMAT_B2G3R3_UNORM";
	case VIRGL_FORMAT_L16A16_UNORM:
		return "VIRGL_FORMAT_L16A16_UNORM";
	case VIRGL_FORMAT_A16_UNORM:
		return "VIRGL_FORMAT_A16_UNORM";
	case VIRGL_FORMAT_I16_UNORM:
		return "VIRGL_FORMAT_I16_UNORM";
	case VIRGL_FORMAT_LATC1_UNORM:
		return "VIRGL_FORMAT_LATC1_UNORM";
	case VIRGL_FORMAT_LATC1_SNORM:
		return "VIRGL_FORMAT_LATC1_SNORM";
	case VIRGL_FORMAT_LATC2_UNORM:
		return "VIRGL_FORMAT_LATC2_UNORM";
	case VIRGL_FORMAT_LATC2_SNORM:
		return "VIRGL_FORMAT_LATC2_SNORM";
	case VIRGL_FORMAT_A8_SNORM:
		return "VIRGL_FORMAT_A8_SNORM";
	case VIRGL_FORMAT_L8_SNORM:
		return "VIRGL_FORMAT_L8_SNORM";
	case VIRGL_FORMAT_L8A8_SNORM:
		return "VIRGL_FORMAT_L8A8_SNORM";
	case VIRGL_FORMAT_I8_SNORM:
		return "VIRGL_FORMAT_I8_SNORM";
	case VIRGL_FORMAT_A16_SNORM:
		return "VIRGL_FORMAT_A16_SNORM";
	case VIRGL_FORMAT_L16_SNORM:
		return "VIRGL_FORMAT_L16_SNORM";
	case VIRGL_FORMAT_L16A16_SNORM:
		return "VIRGL_FORMAT_L16A16_SNORM";
	case VIRGL_FORMAT_I16_SNORM:
		return "VIRGL_FORMAT_I16_SNORM";
	case VIRGL_FORMAT_A16_FLOAT:
		return "VIRGL_FORMAT_A16_FLOAT";
	case VIRGL_FORMAT_L16_FLOAT:
		return "VIRGL_FORMAT_L16_FLOAT";
	case VIRGL_FORMAT_L16A16_FLOAT:
		return "VIRGL_FORMAT_L16A16_FLOAT";
	case VIRGL_FORMAT_I16_FLOAT:
		return "VIRGL_FORMAT_I16_FLOAT";
	case VIRGL_FORMAT_A32_FLOAT:
		return "VIRGL_FORMAT_A32_FLOAT";
	case VIRGL_FORMAT_L32_FLOAT:
		return "VIRGL_FORMAT_L32_FLOAT";
	case VIRGL_FORMAT_L32A32_FLOAT:
		return "VIRGL_FORMAT_L32A32_FLOAT";
	case VIRGL_FORMAT_I32_FLOAT:
		return "VIRGL_FORMAT_I32_FLOAT";
	case VIRGL_FORMAT_YV12:
		return "VIRGL_FORMAT_YV12";
	case VIRGL_FORMAT_YV16:
		return "VIRGL_FORMAT_YV16";
	case VIRGL_FORMAT_IYUV:
		return "VIRGL_FORMAT_IYUV";
	case VIRGL_FORMAT_NV12:
		return "VIRGL_FORMAT_NV12";
	case VIRGL_FORMAT_NV21:
		return "VIRGL_FORMAT_NV21";
	case VIRGL_FORMAT_A4R4_UNORM:
		return "VIRGL_FORMAT_A4R4_UNORM";
	case VIRGL_FORMAT_R4A4_UNORM:
		return "VIRGL_FORMAT_R4A4_UNORM";
	case VIRGL_FORMAT_R8A8_UNORM:
		return "VIRGL_FORMAT_R8A8_UNORM";
	case VIRGL_FORMAT_A8R8_UNORM:
		return "VIRGL_FORMAT_A8R8_UNORM";
	case VIRGL_FORMAT_R10G10B10A2_SSCALED:
		return "VIRGL_FORMAT_R10G10B10A2_SSCALED";
	case VIRGL_FORMAT_R10G10B10A2_SNORM:
		return "VIRGL_FORMAT_R10G10B10A2_SNORM";
	case VIRGL_FORMAT_B10G10R10A2_USCALED:
		return "VIRGL_FORMAT_B10G10R10A2_USCALED";
	case VIRGL_FORMAT_B10G10R10A2_SSCALED:
		return "VIRGL_FORMAT_B10G10R10A2_SSCALED";
	case VIRGL_FORMAT_B10G10R10A2_SNORM:
		return "VIRGL_FORMAT_B10G10R10A2_SNORM";
	case VIRGL_FORMAT_R8_UINT:
		return "VIRGL_FORMAT_R8_UINT";
	case VIRGL_FORMAT_R8G8_UINT:
		return "VIRGL_FORMAT_R8G8_UINT";
	case VIRGL_FORMAT_R8G8B8_UINT:
		return "VIRGL_FORMAT_R8G8B8_UINT";
	case VIRGL_FORMAT_R8G8B8A8_UINT:
		return "VIRGL_FORMAT_R8G8B8A8_UINT";
	case VIRGL_FORMAT_R8_SINT:
		return "VIRGL_FORMAT_R8_SINT";
	case VIRGL_FORMAT_R8G8_SINT:
		return "VIRGL_FORMAT_R8G8_SINT";
	case VIRGL_FORMAT_R8G8B8_SINT:
		return "VIRGL_FORMAT_R8G8B8_SINT";
	case VIRGL_FORMAT_R8G8B8A8_SINT:
		return "VIRGL_FORMAT_R8G8B8A8_SINT";
	case VIRGL_FORMAT_R16_UINT:
		return "VIRGL_FORMAT_R16_UINT";
	case VIRGL_FORMAT_R16G16_UINT:
		return "VIRGL_FORMAT_R16G16_UINT";
	case VIRGL_FORMAT_R16G16B16_UINT:
		return "VIRGL_FORMAT_R16G16B16_UINT";
	case VIRGL_FORMAT_R16G16B16A16_UINT:
		return "VIRGL_FORMAT_R16G16B16A16_UINT";
	case VIRGL_FORMAT_R16_SINT:
		return "VIRGL_FORMAT_R16_SINT";
	case VIRGL_FORMAT_R16G16_SINT:
		return "VIRGL_FORMAT_R16G16_SINT";
	case VIRGL_FORMAT_R16G16B16_SINT:
		return "VIRGL_FORMAT_R16G16B16_SINT";
	case VIRGL_FORMAT_R16G16B16A16_SINT:
		return "VIRGL_FORMAT_R16G16B16A16_SINT";
	case VIRGL_FORMAT_R32_UINT:
		return "VIRGL_FORMAT_R32_UINT";
	case VIRGL_FORMAT_R32G32_UINT:
		return "VIRGL_FORMAT_R32G32_UINT";
	case VIRGL_FORMAT_R32G32B32_UINT:
		return "VIRGL_FORMAT_R32G32B32_UINT";
	case VIRGL_FORMAT_R32G32B32A32_UINT:
		return "VIRGL_FORMAT_R32G32B32A32_UINT";
	case VIRGL_FORMAT_R32_SINT:
		return "VIRGL_FORMAT_R32_SINT";
	case VIRGL_FORMAT_R32G32_SINT:
		return "VIRGL_FORMAT_R32G32_SINT";
	case VIRGL_FORMAT_R32G32B32_SINT:
		return "VIRGL_FORMAT_R32G32B32_SINT";
	case VIRGL_FORMAT_R32G32B32A32_SINT:
		return "VIRGL_FORMAT_R32G32B32A32_SINT";
	case VIRGL_FORMAT_A8_UINT:
		return "VIRGL_FORMAT_A8_UINT";
	case VIRGL_FORMAT_I8_UINT:
		return "VIRGL_FORMAT_I8_UINT";
	case VIRGL_FORMAT_L8_UINT:
		return "VIRGL_FORMAT_L8_UINT";
	case VIRGL_FORMAT_L8A8_UINT:
		return "VIRGL_FORMAT_L8A8_UINT";
	case VIRGL_FORMAT_A8_SINT:
		return "VIRGL_FORMAT_A8_SINT";
	case VIRGL_FORMAT_I8_SINT:
		return "VIRGL_FORMAT_I8_SINT";
	case VIRGL_FORMAT_L8_SINT:
		return "VIRGL_FORMAT_L8_SINT";
	case VIRGL_FORMAT_L8A8_SINT:
		return "VIRGL_FORMAT_L8A8_SINT";
	case VIRGL_FORMAT_A16_UINT:
		return "VIRGL_FORMAT_A16_UINT";
	case VIRGL_FORMAT_I16_UINT:
		return "VIRGL_FORMAT_I16_UINT";
	case VIRGL_FORMAT_L16_UINT:
		return "VIRGL_FORMAT_L16_UINT";
	case VIRGL_FORMAT_L16A16_UINT:
		return "VIRGL_FORMAT_L16A16_UINT";
	case VIRGL_FORMAT_A16_SINT:
		return "VIRGL_FORMAT_A16_SINT";
	case VIRGL_FORMAT_I16_SINT:
		return "VIRGL_FORMAT_I16_SINT";
	case VIRGL_FORMAT_L16_SINT:
		return "VIRGL_FORMAT_L16_SINT";
	case VIRGL_FORMAT_L16A16_SINT:
		return "VIRGL_FORMAT_L16A16_SINT";
	case VIRGL_FORMAT_A32_UINT:
		return "VIRGL_FORMAT_A32_UINT";
	case VIRGL_FORMAT_I32_UINT:
		return "VIRGL_FORMAT_I32_UINT";
	case VIRGL_FORMAT_L32_UINT:
		return "VIRGL_FORMAT_L32_UINT";
	case VIRGL_FORMAT_L32A32_UINT:
		return "VIRGL_FORMAT_L32A32_UINT";
	case VIRGL_FORMAT_A32_SINT:
		return "VIRGL_FORMAT_A32_SINT";
	case VIRGL_FORMAT_I32_SINT:
		return "VIRGL_FORMAT_I32_SINT";
	case VIRGL_FORMAT_L32_SINT:
		return "VIRGL_FORMAT_L32_SINT";
	case VIRGL_FORMAT_L32A32_SINT:
		return "VIRGL_FORMAT_L32A32_SINT";
	case VIRGL_FORMAT_B10G10R10A2_UINT:
		return "VIRGL_FORMAT_B10G10R10A2_UINT";
	case VIRGL_FORMAT_ETC1_RGB8:
		return "VIRGL_FORMAT_ETC1_RGB8";
	case VIRGL_FORMAT_R8G8_R8B8_UNORM:
		return "VIRGL_FORMAT_R8G8_R8B8_UNORM";
	case VIRGL_FORMAT_G8R8_B8R8_UNORM:
		return "VIRGL_FORMAT_G8R8_B8R8_UNORM";
	case VIRGL_FORMAT_R8G8B8X8_SNORM:
		return "VIRGL_FORMAT_R8G8B8X8_SNORM";
	case VIRGL_FORMAT_R8G8B8X8_SRGB:
		return "VIRGL_FORMAT_R8G8B8X8_SRGB";
	case VIRGL_FORMAT_R8G8B8X8_UINT:
		return "VIRGL_FORMAT_R8G8B8X8_UINT";
	case VIRGL_FORMAT_R8G8B8X8_SINT:
		return "VIRGL_FORMAT_R8G8B8X8_SINT";
	case VIRGL_FORMAT_B10G10R10X2_UNORM:
		return "VIRGL_FORMAT_B10G10R10X2_UNORM";
	case VIRGL_FORMAT_R16G16B16X16_UNORM:
		return "VIRGL_FORMAT_R16G16B16X16_UNORM";
	case VIRGL_FORMAT_R16G16B16X16_SNORM:
		return "VIRGL_FORMAT_R16G16B16X16_SNORM";
	case VIRGL_FORMAT_R16G16B16X16_FLOAT:
		return "VIRGL_FORMAT_R16G16B16X16_FLOAT";
	case VIRGL_FORMAT_R16G16B16X16_UINT:
		return "VIRGL_FORMAT_R16G16B16X16_UINT";
	case VIRGL_FORMAT_R16G16B16X16_SINT:
		return "VIRGL_FORMAT_R16G16B16X16_SINT";
	case VIRGL_FORMAT_R32G32B32X32_FLOAT:
		return "VIRGL_FORMAT_R32G32B32X32_FLOAT";
	case VIRGL_FORMAT_R32G32B32X32_UINT:
		return "VIRGL_FORMAT_R32G32B32X32_UINT";
	case VIRGL_FORMAT_R32G32B32X32_SINT:
		return "VIRGL_FORMAT_R32G32B32X32_SINT";
	case VIRGL_FORMAT_R8A8_SNORM:
		return "VIRGL_FORMAT_R8A8_SNORM";
	case VIRGL_FORMAT_R16A16_UNORM:
		return "VIRGL_FORMAT_R16A16_UNORM";
	case VIRGL_FORMAT_R16A16_SNORM:
		return "VIRGL_FORMAT_R16A16_SNORM";
	case VIRGL_FORMAT_R16A16_FLOAT:
		return "VIRGL_FORMAT_R16A16_FLOAT";
	case VIRGL_FORMAT_R32A32_FLOAT:
		return "VIRGL_FORMAT_R32A32_FLOAT";
	case VIRGL_FORMAT_R8A8_UINT:
		return "VIRGL_FORMAT_R8A8_UINT";
	case VIRGL_FORMAT_R8A8_SINT:
		return "VIRGL_FORMAT_R8A8_SINT";
	case VIRGL_FORMAT_R16A16_UINT:
		return "VIRGL_FORMAT_R16A16_UINT";
	case VIRGL_FORMAT_R16A16_SINT:
		return "VIRGL_FORMAT_R16A16_SINT";
	case VIRGL_FORMAT_R32A32_UINT:
		return "VIRGL_FORMAT_R32A32_UINT";
	case VIRGL_FORMAT_R32A32_SINT:
		return "VIRGL_FORMAT_R32A32_SINT";
	case VIRGL_FORMAT_R10G10B10A2_UINT:
		return "VIRGL_FORMAT_R10G10B10A2_UINT";
	case VIRGL_FORMAT_B5G6R5_SRGB:
		return "VIRGL_FORMAT_B5G6R5_SRGB";
	case VIRGL_FORMAT_BPTC_RGBA_UNORM:
		return "VIRGL_FORMAT_BPTC_RGBA_UNORM";
	case VIRGL_FORMAT_BPTC_SRGBA:
		return "VIRGL_FORMAT_BPTC_SRGBA";
	case VIRGL_FORMAT_BPTC_RGB_FLOAT:
		return "VIRGL_FORMAT_BPTC_RGB_FLOAT";
	case VIRGL_FORMAT_BPTC_RGB_UFLOAT:
		return "VIRGL_FORMAT_BPTC_RGB_UFLOAT";
	case VIRGL_FORMAT_A8L8_UNORM:
		return "VIRGL_FORMAT_A8L8_UNORM";
	case VIRGL_FORMAT_A8L8_SNORM:
		return "VIRGL_FORMAT_A8L8_SNORM";
	case VIRGL_FORMAT_A8L8_SRGB:
		return "VIRGL_FORMAT_A8L8_SRGB";
	case VIRGL_FORMAT_A16L16_UNORM:
		return "VIRGL_FORMAT_A16L16_UNORM";
	case VIRGL_FORMAT_G8R8_UNORM:
		return "VIRGL_FORMAT_G8R8_UNORM";
	case VIRGL_FORMAT_G8R8_SNORM:
		return "VIRGL_FORMAT_G8R8_SNORM";
	case VIRGL_FORMAT_G16R16_UNORM:
		return "VIRGL_FORMAT_G16R16_UNORM";
	case VIRGL_FORMAT_G16R16_SNORM:
		return "VIRGL_FORMAT_G16R16_SNORM";
	case VIRGL_FORMAT_A8B8G8R8_SNORM:
		return "VIRGL_FORMAT_A8B8G8R8_SNORM";
	case VIRGL_FORMAT_X8B8G8R8_SNORM:
		return "VIRGL_FORMAT_X8B8G8R8_SNORM";
	case VIRGL_FORMAT_ETC2_RGB8:
		return "VIRGL_FORMAT_ETC2_RGB8";
	case VIRGL_FORMAT_ETC2_SRGB8:
		return "VIRGL_FORMAT_ETC2_SRGB8";
	case VIRGL_FORMAT_ETC2_RGB8A1:
		return "VIRGL_FORMAT_ETC2_RGB8A1";
	case VIRGL_FORMAT_ETC2_SRGB8A1:
		return "VIRGL_FORMAT_ETC2_SRGB8A1";
	case VIRGL_FORMAT_ETC2_RGBA8:
		return "VIRGL_FORMAT_ETC2_RGBA8";
	case VIRGL_FORMAT_ETC2_SRGBA8:
		return "VIRGL_FORMAT_ETC2_SRGBA8";
	case VIRGL_FORMAT_ETC2_R11_UNORM:
		return "VIRGL_FORMAT_ETC2_R11_UNORM";
	case VIRGL_FORMAT_ETC2_R11_SNORM:
		return "VIRGL_FORMAT_ETC2_R11_SNORM";
	case VIRGL_FORMAT_ETC2_RG11_UNORM:
		return "VIRGL_FORMAT_ETC2_RG11_UNORM";
	case VIRGL_FORMAT_ETC2_RG11_SNORM:
		return "VIRGL_FORMAT_ETC2_RG11_SNORM";
	case VIRGL_FORMAT_ASTC_4x4:
		return "VIRGL_FORMAT_ASTC_4x4";
	case VIRGL_FORMAT_ASTC_5x4:
		return "VIRGL_FORMAT_ASTC_5x4";
	case VIRGL_FORMAT_ASTC_5x5:
		return "VIRGL_FORMAT_ASTC_5x5";
	case VIRGL_FORMAT_ASTC_6x5:
		return "VIRGL_FORMAT_ASTC_6x5";
	case VIRGL_FORMAT_ASTC_6x6:
		return "VIRGL_FORMAT_ASTC_6x6";
	case VIRGL_FORMAT_ASTC_8x5:
		return "VIRGL_FORMAT_ASTC_8x5";
	case VIRGL_FORMAT_ASTC_8x6:
		return "VIRGL_FORMAT_ASTC_8x6";
	case VIRGL_FORMAT_ASTC_8x8:
		return "VIRGL_FORMAT_ASTC_8x8";
	case VIRGL_FORMAT_ASTC_10x5:
		return "VIRGL_FORMAT_ASTC_10x5";
	case VIRGL_FORMAT_ASTC_10x6:
		return "VIRGL_FORMAT_ASTC_10x6";
	case VIRGL_FORMAT_ASTC_10x8:
		return "VIRGL_FORMAT_ASTC_10x8";
	case VIRGL_FORMAT_ASTC_10x10:
		return "VIRGL_FORMAT_ASTC_10x10";
	case VIRGL_FORMAT_ASTC_12x10:
		return "VIRGL_FORMAT_ASTC_12x10";
	case VIRGL_FORMAT_ASTC_12x12:
		return "VIRGL_FORMAT_ASTC_12x12";
	case VIRGL_FORMAT_ASTC_4x4_SRGB:
		return "VIRGL_FORMAT_ASTC_4x4_SRGB";
	case VIRGL_FORMAT_ASTC_5x4_SRGB:
		return "VIRGL_FORMAT_ASTC_5x4_SRGB";
	case VIRGL_FORMAT_ASTC_5x5_SRGB:
		return "VIRGL_FORMAT_ASTC_5x5_SRGB";
	case VIRGL_FORMAT_ASTC_6x5_SRGB:
		return "VIRGL_FORMAT_ASTC_6x5_SRGB";
	case VIRGL_FORMAT_ASTC_6x6_SRGB:
		return "VIRGL_FORMAT_ASTC_6x6_SRGB";
	case VIRGL_FORMAT_ASTC_8x5_SRGB:
		return "VIRGL_FORMAT_ASTC_8x5_SRGB";
	case VIRGL_FORMAT_ASTC_8x6_SRGB:
		return "VIRGL_FORMAT_ASTC_8x6_SRGB";
	case VIRGL_FORMAT_ASTC_8x8_SRGB:
		return "VIRGL_FORMAT_ASTC_8x8_SRGB";
	case VIRGL_FORMAT_ASTC_10x5_SRGB:
		return "VIRGL_FORMAT_ASTC_10x5_SRGB";
	case VIRGL_FORMAT_ASTC_10x6_SRGB:
		return "VIRGL_FORMAT_ASTC_10x6_SRGB";
	case VIRGL_FORMAT_ASTC_10x8_SRGB:
		return "VIRGL_FORMAT_ASTC_10x8_SRGB";
	case VIRGL_FORMAT_ASTC_10x10_SRGB:
		return "VIRGL_FORMAT_ASTC_10x10_SRGB";
	case VIRGL_FORMAT_ASTC_12x10_SRGB:
		return "VIRGL_FORMAT_ASTC_12x10_SRGB";
	case VIRGL_FORMAT_ASTC_12x12_SRGB:
		return "VIRGL_FORMAT_ASTC_12x12_SRGB";
	case VIRGL_FORMAT_R10G10B10X2_UNORM:
		return "VIRGL_FORMAT_R10G10B10X2_UNORM";
	case VIRGL_FORMAT_A4B4G4R4_UNORM:
		return "VIRGL_FORMAT_A4B4G4R4_UNORM";
	case VIRGL_FORMAT_R8_SRGB:
		return "VIRGL_FORMAT_R8_SRGB";
	case VIRGL_FORMAT_R8G8_SRGB:
		return "VIRGL_FORMAT_R8G8_SRGB";
	case VIRGL_FORMAT_P010:
		return "VIRGL_FORMAT_P010";
	default:
		return "Unknown format";
	}
}

#endif /* RVGPU_VIRGL_FORMAT_H */
