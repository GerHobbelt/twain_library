/*
This file is part of the Dynarithmic TWAIN Library (DTWAIN).
Copyright (c) 2002-2019 Dynarithmic Software.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

FOR ANY PART OF THE COVERED WORK IN WHICH THE COPYRIGHT IS OWNED BY
DYNARITHMIC SOFTWARE. DYNARITHMIC SOFTWARE DISCLAIMS THE WARRANTY OF NON INFRINGEMENT
OF THIRD PARTY RIGHTS.

For more information, the license file named LICENSE that is located in the root
directory of the DTWAIN installation covers the restrictions under the LGPL license.
Please read this file before deploying or distributing any application using DTWAIN.
*/

#ifndef DTWAIN_FILETYPES_H
#define DTWAIN_FILETYPES_H

/* DTWAIN File Types.  Use only if Source does not support File Transfer, or
if you want to acquire using DTWAIN's file mode */
#define DTWAIN_BMP          100   /* Windows BMP file */
#define DTWAIN_JPEG         200   /* JPEG - See DTWAIN_SetJPEGQuality  */

#define DTWAIN_PDF          250   /* Adobe Acrobat PDF File */
#define DTWAIN_PDFMULTI     251   /* Multi-page PDF file */

#define DTWAIN_PCX          300   /* ZSoft file */
#define DTWAIN_DCX          301   /* Multi-page PCX file */
#define DTWAIN_TGA          400   /* TARGA */
#define DTWAIN_TIFFLZW      500   /* TIFF with LZW compression */
#define DTWAIN_TIFFNONE     600   /* Uncompressed TIFF */
#define DTWAIN_TIFFG3       700   /* Group 3 CCITT Tiff (FAX format) */
#define DTWAIN_TIFFG4       800   /* Group 4 CCITT Tiff (FAX format) */
#define DTWAIN_TIFFPACKBITS 801   /* Huffman encoded Tiff */
#define DTWAIN_TIFFDEFLATE  802   /* TIFF packed with z-lib encoded data*/
#define DTWAIN_TIFFJPEG     803   /* See DTWAIN_SetJPEGQuality  */
#define DTWAIN_TIFFJBIG     804   /* TIFF-JBIG compression (not implemented due to patent) */
#define DTWAIN_TIFFPIXARLOG 805   /* TIFF Pixar Log compression (not implemented )*/
#define DTWAIN_TIFFNONEMULTI  900 /* Multi-page TIFF, No compression by default */
#define DTWAIN_TIFFG3MULTI    901 /* Multi-page TIFF, Group 3 */
#define DTWAIN_TIFFG4MULTI    902 /* Multi-page TIFF, Group 4 */
#define DTWAIN_TIFFPACKBITSMULTI  903   /* Multi-page TIFF, Huffman encoded */
#define DTWAIN_TIFFDEFLATEMULTI   904   /* Multi-pageTIFF, zlib compression */
#define DTWAIN_TIFFJPEGMULTI   905   /* Multi-pageTIFF, JPEG compression */
#define DTWAIN_TIFFLZWMULTI 906   /* Multi-page TIFF, LZW compression */
#define DTWAIN_TIFFJBIGMULTI 907  /* Multi-page TIFF, JBIG compression (not implememnted due to patent) */
#define DTWAIN_TIFFPIXARLOGMULTI 908   /* Multi-page TIFF Pixar Log compression (not implemented )*/
#define DTWAIN_WMF          850   /* Windows meta-file */
#define DTWAIN_EMF          851   /* Enhanced Windows meta-file */
#define DTWAIN_GIF          950   /* GIF Format */
#define DTWAIN_PNG          1000  /* Portable Network Graphics */
#define DTWAIN_PSD          2000  /* Adobe Photoshop PSD file */
#define DTWAIN_JPEG2000     3000  /* JPEG-2000 file */
#define DTWAIN_POSTSCRIPT1  4000  /* Postcript Level 1 */
#define DTWAIN_POSTSCRIPT2  4001  /* Postcript Level 2 */
#define DTWAIN_POSTSCRIPT3  4002  /* Postcript Level 3 */
#define DTWAIN_POSTSCRIPT1MULTI  4003  /* Postcript Level 1 Multipage */
#define DTWAIN_POSTSCRIPT2MULTI  4004  /* Postcript Level 2 Multipage */
#define DTWAIN_POSTSCRIPT3MULTI  4005  /* Postcript Level 3 Multipage */
#define DTWAIN_TEXT              6000  /* Text file produced from OCR */
#define DTWAIN_TEXTMULTI         6001  /* Multi-page text file */
#define DTWAIN_TIFFMULTI         7000  /* Only to be used for standalone OCR engines */
#define DTWAIN_ICO               8000  /* Windows ICO (icon) format */
#define DTWAIN_ICO_VISTA         8001  /* Windows ICO (icon) format for Vista and above OS */
#define DTWAIN_WBMP              8500  /* Wireless Bitmap (WAP) format */
#define DTWAIN_WEBP              8501  /* Google webp format */
#define DTWAIN_PCD               9000  /* Kodak PCD */
#define DTWAIN_PBM               10000 /* Portable bitmap*/
#endif
