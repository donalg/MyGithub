#include "bitmap.h" // Defines funxtions and data types. 
#include <stdlib.h> // Required for malloc and calloc functions. 
#include <stdio.h>	// Required for file Input output and printf

// Functions:

// Abolute of a value: 
unsigned int absolute(signed int val)
{
	if (val < 0)
	{
	val *= -1;
	}
	return val;
}

	// Initalise a functioning bit map: 
void InitBitMap(BitMap_t* bitmap, int imageWidth, int imageHeight) // Iitialise a blank bit map
{
	// Allocate Required memory for bitmap structor on the Heap: 
		printf("%d \n" , sizeof(FileHeader_t));
		printf("%d \n" , sizeof(InfoHeader_t));

		bitmap->FileH = malloc(sizeof(FileHeader_t));
		bitmap->InfoH = malloc(sizeof(InfoHeader_t));

	// FILE HEADER // 

			// Define Bitmap B M field: 
		bitmap->FileH->BM = 'MB';

			// Define File size: (header only image context come after):
		bitmap->FileH->FileSize = sizeof(FileHeader_t) + sizeof(InfoHeader_t) + (imageHeight * imageWidth * 4); // 40 + 14 + 12 

			// Reserved field
		bitmap->FileH->Reserved1 = 0;
		bitmap->FileH->Reserved2 = 0;

			// Offset of Pixels: 
		bitmap->FileH->PixelOffset = 54;
		


	// BITMAP HEADER // 

			// Header Size: 
		bitmap->InfoH->HeaderSize = 40; // Bitmapinfoheader (40)
		//for (int i = 1; i < 3; i++) { bbitmap->_40[i] = 0; }

			// width of Image: 
		bitmap->InfoH->PixelWidth = imageWidth;

			// height of Image: 
		bitmap->InfoH->PixelHeight = -1*imageHeight;

			// Number of Color panes ( 1 = RBG )
		bitmap->InfoH->NumberOfColorPanes = 1;

			// Number of Bits per pixel: ,
		bitmap->InfoH->BitsPerPixel = 32;

			// Disable Compression: 
		bitmap->InfoH->Compression = 0;

			// Size of Raw Pixel Data: 
		bitmap->InfoH->SizeOfRawPixelData = 0; // No Compression then = 0// (imageHeight *((imageWidth /4)*24 +  (4-(imageWidth % 4)*24))  // fill from bottom up, all rows musy be a multiple of 4 this require padding, will need a function to do this. 

			// Hozizontal Pizels per Meter set 0 then calculated automatically
		bitmap->InfoH->HorizontalResolution = 0; // leave as 2835

			// Hozizontal Pizels per Meter set 0 then calculated automatically
		bitmap->InfoH->VerticalResolution = 0; // leave as 2835

			// Specifies number of colors used in bitmap: 
		bitmap->InfoH->NumberOfColors = 0; // Leave as 0 to default to all colors.

			// Important colors in Bitmap 
		bitmap->InfoH->ImportantColors = 0; // Leave as 0 to default to all colors

		printf("Creating: \n");
		printf("%0.8x\n", bitmap->FileH->BM);
		printf("%0.8x\n", bitmap->FileH->FileSize);
		printf("%0.8x\n", bitmap->FileH->Reserved1);
		printf("%0.8x\n", bitmap->FileH->Reserved2);
		printf("%0.8x\n", bitmap->FileH->PixelOffset);
		printf("%0.8x\n", bitmap->InfoH->HeaderSize);
		printf("%0.8x\n", bitmap->InfoH->PixelWidth);
		printf("%0.8x\n", bitmap->InfoH->PixelHeight);
		printf("%0.8x\n", bitmap->InfoH->NumberOfColorPanes);
		printf("%0.8x\n", bitmap->InfoH->BitsPerPixel);
		printf("%0.8x\n", bitmap->InfoH->Compression);
		printf("%0.8x\n", bitmap->InfoH->SizeOfRawPixelData);
		printf("%0.8x\n", bitmap->InfoH->HorizontalResolution);
		printf("%0.8x\n", bitmap->InfoH->VerticalResolution);
		printf("%0.8x\n", bitmap->InfoH->NumberOfColors);
		printf("%0.8x\n", bitmap->InfoH->ImportantColors);
		printf("\n\n");


	// Pixel Data // 	
		
		unsigned long int count  = 0;				
		bitmap->PixelData = (PixelData_t **) malloc(bitmap->InfoH->PixelHeight * sizeof(PixelData_t *));
		for (int rows = imageHeight-1; rows > -1; rows--) 
		{
			bitmap->PixelData[rows] = (PixelData_t *) malloc( bitmap->InfoH->PixelWidth * sizeof(PixelData_t));
			for ( int cols = 0; cols < imageWidth ; cols++)
			{		
					// Proceed as normal allowing 3 Bytes 
					bitmap->PixelData[rows][cols].r = 255;
					bitmap->PixelData[rows][cols].g = 0x26;
					bitmap->PixelData[rows][cols].b = 0;
					bitmap->PixelData[rows][cols].a = 255;			}
		}
		
}


void OpenBitMap( BitMap_t *bitmap, FILE *file )
{
	if (!file) // File is not open: 
	{
		printf("Unable to open file.\n");
	}
	 else 
	{
		printf("%d \n" , sizeof(FileHeader_t));
		printf("%d \n" , sizeof(InfoHeader_t));
		bitmap->FileH = (FileHeader_t *) malloc(sizeof(FileHeader_t));
		bitmap->InfoH = (InfoHeader_t *) malloc(sizeof(InfoHeader_t));
		

			// Read in File Header: 
		fread(&bitmap->FileH->BM, sizeof(bitmap->FileH->BM), 1, file);
		fread(&bitmap->FileH->FileSize, sizeof(bitmap->FileH->FileSize), 1, file);
		fread(&bitmap->FileH->Reserved1, sizeof(bitmap->FileH->Reserved1), 1, file);
		fread(&bitmap->FileH->Reserved2, sizeof(bitmap->FileH->Reserved2), 1, file);
		fread(&bitmap->FileH->PixelOffset, sizeof(bitmap->FileH->PixelOffset), 1, file);

			// Read in Info Header: 
		fread(&bitmap->InfoH->HeaderSize, sizeof(bitmap->InfoH->HeaderSize), 1, file);
		fread(&bitmap->InfoH->PixelWidth, sizeof(bitmap->InfoH->PixelWidth), 1, file);
		fread(&bitmap->InfoH->PixelHeight, sizeof(bitmap->InfoH->PixelHeight), 1, file);
		fread(&bitmap->InfoH->NumberOfColorPanes, sizeof(bitmap->InfoH->NumberOfColorPanes), 1, file);
		fread(&bitmap->InfoH->BitsPerPixel, sizeof(bitmap->InfoH->BitsPerPixel), 1, file);
		fread(&bitmap->InfoH->Compression, sizeof(bitmap->InfoH->Compression), 1, file);
		fread(&bitmap->InfoH->SizeOfRawPixelData, sizeof(bitmap->InfoH->SizeOfRawPixelData), 1, file);
		fread(&bitmap->InfoH->HorizontalResolution, sizeof(bitmap->InfoH->HorizontalResolution), 1, file);
		fread(&bitmap->InfoH->VerticalResolution, sizeof(bitmap->InfoH->NumberOfColors), 1, file);
		fread(&bitmap->InfoH->NumberOfColors, sizeof(bitmap->InfoH->NumberOfColors), 1, file);
		fread(&bitmap->InfoH->ImportantColors, sizeof(bitmap->InfoH->ImportantColors), 1, file);
		
		printf("Opening: \n");
		printf("BM: \t hex %0.8x \t deci: %d\n", bitmap->FileH->BM, bitmap->FileH->BM);
		printf("File Size: \t hex %0.8x \t deci: %d\n", bitmap->FileH->FileSize, bitmap->FileH->FileSize);
		printf("Reserved 1: \t hex %0.8x \t deci: %d\n", bitmap->FileH->Reserved1, bitmap->FileH->Reserved1);
		printf("Reserved 2: \t hex %0.8x \t deci: %d\n", bitmap->FileH->Reserved2, bitmap->FileH->Reserved2);
		printf("Pixel Offset: \t hex %0.8x \t deci: %d\n", bitmap->FileH->PixelOffset, bitmap->FileH->PixelOffset);
		printf("Header Size: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->HeaderSize, bitmap->InfoH->HeaderSize);
		printf("Pixel Width: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->PixelWidth, bitmap->InfoH->PixelWidth);
		printf("Pixel Heaight: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->PixelHeight, bitmap->InfoH->PixelHeight);
		printf("Number of Color: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->NumberOfColorPanes, bitmap->InfoH->NumberOfColorPanes);
		printf("Bits Per Pixel: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->BitsPerPixel, bitmap->InfoH->BitsPerPixel);
		printf("Compression: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->Compression, bitmap->InfoH->Compression);
		printf("Size of raw data: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->SizeOfRawPixelData, bitmap->InfoH->SizeOfRawPixelData);
		printf("Horizontal Resolution: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->HorizontalResolution, bitmap->InfoH->HorizontalResolution);
		printf("Vertical Resolution: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->VerticalResolution, bitmap->InfoH->VerticalResolution);
		printf("Number of Colors: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->ImportantColors, bitmap->InfoH->ImportantColors);
		printf("Important Colors: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->ImportantColors, bitmap->InfoH->ImportantColors);
		printf("\n\n");


		/*
			Methodology: 
							Take (bitmap->InfoH->BitsPerPixel) sections at a time this corressponds to an indiviaual pixel. 
							(will need to be seperated into three as to corressed the RBG) 
							take continue to take this until the number of iterations equal the number of pixels. 
							Work out the next multiple of 4 and through the remainder! 
							Continue on until all rows and columns have been accounted for.
							(bitmap->InfoH->PixelWidth * (bitmap->InfoH->BitsPerPixel/8)
		*/
		 						
		bitmap->PixelData = (PixelData_t **) malloc(absolute(bitmap->InfoH->PixelHeight) * absolute(bitmap->InfoH->PixelWidth) * sizeof(PixelData_t *));
		for (int rows = (absolute(bitmap->InfoH->PixelHeight)-1); rows > -1; rows--) // FLIP IMAGE IN MEMORY //
		{
			bitmap->PixelData[rows] = (PixelData_t *) malloc( bitmap->InfoH->PixelWidth * sizeof(PixelData_t));
			for (unsigned int cols = 0; cols < bitmap->InfoH->PixelWidth; cols++)
			{
				////////////////////////////////////////////////////////////////
				// Reading Bytes! 
				////////////////////////////////////////////////////////////////
				
				if(bitmap->InfoH->BitsPerPixel == 32)
				{
					fread(&bitmap->PixelData[rows][cols].r, sizeof(bitmap->PixelData[rows][cols].b), 1, file);
					fread(&bitmap->PixelData[rows][cols].g, sizeof(bitmap->PixelData[rows][cols].g), 1, file);
					fread(&bitmap->PixelData[rows][cols].b, sizeof(bitmap->PixelData[rows][cols].r), 1, file);
					fread(&bitmap->PixelData[rows][cols].a, sizeof(bitmap->PixelData[rows][cols].r), 1, file);

				} else if (bitmap->InfoH->BitsPerPixel == 24)
				{
					fread(&bitmap->PixelData[rows][cols].r, sizeof(bitmap->PixelData[rows][cols].b), 1, file);
					fread(&bitmap->PixelData[rows][cols].g, sizeof(bitmap->PixelData[rows][cols].g), 1, file);
					fread(&bitmap->PixelData[rows][cols].b, sizeof(bitmap->PixelData[rows][cols].r), 1, file);
				} else 
				{
					printf("Cannot Interprite Bits per pixel. \n");
					exit(-1);
				}

				////////////////////////////////////////////////////////////////
				// Ensuring no 0x00 buffer! 
				////////////////////////////////////////////////////////////////
				
				if ((cols == bitmap->InfoH->PixelWidth) && ((bitmap->InfoH->PixelWidth * ((bitmap->InfoH->BitsPerPixel) % 4) %4) != 0))
				{
					// read out false bytes:

					char temp; 
					int  buff = ((bitmap->InfoH->PixelWidth * ((bitmap->InfoH->BitsPerPixel) % 4) %4) != 0);
					fread(&temp, sizeof(temp), buff, file);
				}
			}
		}
			
	}
	
	printf("\n\n\n\n");
}


void SaveBitMap(BitMap_t *bitmap, FILE *file)
{
	if (!file) // File is not open: 
	{
		printf("Unable to open file.\n");
	} 
	else 
	{

			// Read in File Header: 
		fwrite(&bitmap->FileH->BM, sizeof(bitmap->FileH->BM), 1, file);
		fwrite(&bitmap->FileH->FileSize, sizeof(bitmap->FileH->FileSize), 1, file);
		fwrite(&bitmap->FileH->Reserved1, sizeof(bitmap->FileH->Reserved1), 1, file);
		fwrite(&bitmap->FileH->Reserved2, sizeof(bitmap->FileH->Reserved2), 1, file);
		fwrite(&bitmap->FileH->PixelOffset, sizeof(bitmap->FileH->PixelOffset), 1, file);

			// Read in Info Header: 
		fwrite(&bitmap->InfoH->HeaderSize, sizeof(bitmap->InfoH->HeaderSize), 1, file);
		fwrite(&bitmap->InfoH->PixelWidth, sizeof(bitmap->InfoH->PixelWidth), 1, file);
		fwrite(&bitmap->InfoH->PixelHeight, sizeof(bitmap->InfoH->PixelHeight), 1, file);
		fwrite(&bitmap->InfoH->NumberOfColorPanes, sizeof(bitmap->InfoH->NumberOfColorPanes), 1, file);
		fwrite(&bitmap->InfoH->BitsPerPixel, sizeof(bitmap->InfoH->BitsPerPixel), 1, file);
		fwrite(&bitmap->InfoH->Compression, sizeof(bitmap->InfoH->Compression), 1, file);
		fwrite(&bitmap->InfoH->SizeOfRawPixelData, sizeof(bitmap->InfoH->SizeOfRawPixelData), 1, file);
		fwrite(&bitmap->InfoH->HorizontalResolution, sizeof(bitmap->InfoH->HorizontalResolution), 1, file);
		fwrite(&bitmap->InfoH->VerticalResolution, sizeof(bitmap->InfoH->NumberOfColors), 1, file);
		fwrite(&bitmap->InfoH->NumberOfColors, sizeof(bitmap->InfoH->NumberOfColors), 1, file);
		fwrite(&bitmap->InfoH->ImportantColors, sizeof(bitmap->InfoH->ImportantColors), 1, file);

		printf("Saving: \n");
		printf("BM: \t hex %0.8x \t deci: %d\n", bitmap->FileH->BM, bitmap->FileH->BM);
		printf("File Size: \t hex %0.8x \t deci: %d\n", bitmap->FileH->FileSize, bitmap->FileH->FileSize);
		printf("Reserved 1: \t hex %0.8x \t deci: %d\n", bitmap->FileH->Reserved1, bitmap->FileH->Reserved1);
		printf("Reserved 2: \t hex %0.8x \t deci: %d\n", bitmap->FileH->Reserved2, bitmap->FileH->Reserved2);
		printf("Pixel Offset: \t hex %0.8x \t deci: %d\n", bitmap->FileH->PixelOffset, bitmap->FileH->PixelOffset);
		printf("Header Size: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->HeaderSize, bitmap->InfoH->HeaderSize);
		printf("Pixel Width: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->PixelWidth, bitmap->InfoH->PixelWidth);
		printf("Pixel Heaight: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->PixelHeight, bitmap->InfoH->PixelHeight);
		printf("Number of Color: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->NumberOfColorPanes, bitmap->InfoH->NumberOfColorPanes);
		printf("Bits Per Pixel: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->BitsPerPixel, bitmap->InfoH->BitsPerPixel);
		printf("Compression: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->Compression, bitmap->InfoH->Compression);
		printf("Size of raw data: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->SizeOfRawPixelData, bitmap->InfoH->SizeOfRawPixelData);
		printf("Horizontal Resolution: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->HorizontalResolution, bitmap->InfoH->HorizontalResolution);
		printf("Vertical Resolution: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->VerticalResolution, bitmap->InfoH->VerticalResolution);
		printf("Number of Colors: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->ImportantColors, bitmap->InfoH->ImportantColors);
		printf("Important Colors: \t hex %0.8x \t deci: %d\n", bitmap->InfoH->ImportantColors, bitmap->InfoH->ImportantColors);
		printf("\n\n");

			// Read in Pixel Info: 

		/*
			Methodology: 
							Take (bitmap->InfoH->BitsPerPixel) sections at a time this corressponds to an indiviaual pixel. 
							(will need to be seperated into three as to corressed the RBG) 
							take continue to take this until the number of iterations equal the number of pixels. 
							Work out the next multiple of 4 and through the remainder! 
							Continue on until all rows and columns have been accounted for.
		*/
		
		for (int rows = (absolute(bitmap->InfoH->PixelHeight)-1); rows > -1; rows--) // FLIP IMAGE IN MEMORY //
		{
			//bitmap->PixelData[rows] = (PixelData_t *) malloc( bitmap->InfoH->PixelWidth * sizeof(PixelData_t));
			for (unsigned int cols = 0; cols < bitmap->InfoH->PixelWidth; cols++)
			{
				////////////////////////////////////////////////////////////////
				// Writeing Bytes! 
				////////////////////////////////////////////////////////////////

				if(bitmap->InfoH->BitsPerPixel == 32)
				{
					fwrite(&bitmap->PixelData[rows][cols].b, sizeof(bitmap->PixelData[rows][cols].b), 1, file);
					fwrite(&bitmap->PixelData[rows][cols].g, sizeof(bitmap->PixelData[rows][cols].g), 1, file);
					fwrite(&bitmap->PixelData[rows][cols].r, sizeof(bitmap->PixelData[rows][cols].r), 1, file);
					fwrite(&bitmap->PixelData[rows][cols].a, sizeof(bitmap->PixelData[rows][cols].r), 1, file);
					printf("32\n");

				} else if (bitmap->InfoH->BitsPerPixel == 24)
				{
					fwrite(&bitmap->PixelData[rows][cols].b, sizeof(bitmap->PixelData[rows][cols].b), 1, file);
					fwrite(&bitmap->PixelData[rows][cols].g, sizeof(bitmap->PixelData[rows][cols].g), 1, file);
					fwrite(&bitmap->PixelData[rows][cols].r, sizeof(bitmap->PixelData[rows][cols].r), 1, file);
					printf("24\n");
				} else 
				{
					printf("Cannot Interprite Bits per pixel. \n");
					exit(-1);
				}

				////////////////////////////////////////////////////////////////
				// Ensuring no 0x00 buffer! 
				////////////////////////////////////////////////////////////////
				
				if ((cols == bitmap->InfoH->PixelWidth) && ((bitmap->InfoH->PixelWidth * ((bitmap->InfoH->BitsPerPixel) % 4) %4) != 0))
				{
					// read out false bytes:

					char temp; 
					int  buff = ((bitmap->InfoH->PixelWidth * ((bitmap->InfoH->BitsPerPixel) % 4) %4) != 0);
					fwrite(&temp, sizeof(temp), buff, file);
				}
			}
		}		

	}
}

/* 

BitMap_t WritePixelValues(_BitMap __BITMAP_Image, int Pixel_x, int Pixel_y, char R, char B, char G) // Write a value to a pixel
{
	//

}
BitMap_t Convert24Double2BitMap(_BitMap OutputImage, double ** 2Ddouble)
{
	//

}
double** ConvertBitMap22DDouble(_BitMap InputImage, double ** OuputDouble)
{
	//

}

*/