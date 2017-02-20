#include <stdio.h>
#include <stdlib.h>


// Following outline from: https://web.archive.org/web/20080912171714/http://www.fortunecity.com/skyscraper/windows/364/bmpffrmt.html

typedef unsigned char BYTE;

// Pixbuffer for editing bits: 
	typedef struct 
	{
		BYTE r;
		BYTE b;
		BYTE g;
		BYTE a;

		unsigned int imageHeight;
		unsigned int imageWidth;
	} PixBuff_t ;

		// BITMAP FILE HEADER //
	typedef struct {

		unsigned short int BM;
		unsigned int FileSize; // File Size Header + Pixel Header + Pixel number  // 4 BYTES
		unsigned short int Reserved1; // 0 // 4 BYTES
		unsigned short int Reserved2; // 0 // 4 BYTES
		unsigned int PixelOffset; // depends on file probably going to be 54

	} FileHeader_t;

		// BITMAP INFO HEADER //

	typedef struct {

		unsigned int HeaderSize; // Bitmapinfoheader (40)
		unsigned int PixelWidth; // Width of image in pixels 
		unsigned int PixelHeight; // height of image in pixels
		unsigned short int NumberOfColorPanes; // 1
		unsigned short int BitsPerPixel; // 24;
		unsigned int Compression; // 0 = Disable
		unsigned int SizeOfRawPixelData; // number of bytes in pixel data section
		unsigned int HorizontalResolution; // leave as 2835
		unsigned int VerticalResolution; // leave as 2835
		unsigned int NumberOfColors; // Leave as 0 to default to all colors.
		unsigned int ImportantColors; // Leave as 0 to default to all colors

	} InfoHeader_t;

	typedef struct {
		BYTE r;
		BYTE b;
		BYTE g;
		BYTE a;
	} PixelData_t;


typedef struct 
{ 	//  Note: Unsinged int refers to 4 bytes of date:

		// FILE header data //
		FileHeader_t *FileH;

		// INFO header Data // 
		InfoHeader_t *InfoH;

		// RBG Quad array Data //
		//RBGQuadArray_t *RBGQuadArray;
		// Pixel Data // 

		PixelData_t **PixelData; // Actual pixels (Image Width + padding(0x00)) * Image Height * 3

} BitMap_t;


unsigned int absolute(signed int val);
void InitBitMap( BitMap_t *bitmap, int imageWidth, int imageHeight); // Iitialise a blank bit map
void OpenBitMap( BitMap_t *bitmap, FILE *file);
void SaveBitMap( BitMap_t *bitmap, FILE *file);

//BitMap_t WritePixelValues(_BitMap __BITMAP_Image, int Pixel_x, int Pixel_y, char R, char B, char G); // Write a value to a pixel
//BitMap_t Convert24Double2BitMap(_BitMap OutputImage, double ** 2Ddouble);
//double** ConvertBitMap22DDouble(_BitMap InputImage, double ** OuputDouble);


// Think of other Functions!!! 