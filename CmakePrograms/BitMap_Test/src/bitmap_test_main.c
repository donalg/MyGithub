#include <stdio.h>

//#include "bitmap.h"
#include "bitmap.c"

//assumes little endian
void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;

    for (i=size-1;i>=0;i--)
    {
        for (j=7;j>=0;j--)
        {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    puts("");
}

int main (int argc, char* argv[])
{
	// Init Bitmap: 
	BitMap_t newBitMap;
	InitBitMap(&newBitMap, 100, 100 );

		printf("%ld \n", sizeof(newBitMap.FileHeader->B));
		printf("%d \n", (newBitMap.InfoHeader->BitsPerPixel));
		printf("%ld \n", sizeof(newBitMap.RBGQuadArray));
		printf("%ld \n", sizeof(newBitMap.PixelData[1][2][2]));
		printf("%d \n", (newBitMap.PixelData[2][4][1]));

		printf("\n\n");

		printBits(sizeof(newBitMap.FileHeader->B), &(newBitMap.FileHeader->B));
		printBits(sizeof(newBitMap.FileHeader->M), &(newBitMap.FileHeader->M));
		printBits(sizeof(newBitMap.PixelData[1][2][3]), &(newBitMap.PixelData[1][2][3]));
		printBits(sizeof(newBitMap.InfoHeader->BitsPerPixel), &(newBitMap.InfoHeader->BitsPerPixel));

	// Init File:
		//FILE *save_Bitmap;

		//save_Bitmap = fopen("img.bmp", "wb");
		//fwrite(save_Bitmap, )


	return 0;
}