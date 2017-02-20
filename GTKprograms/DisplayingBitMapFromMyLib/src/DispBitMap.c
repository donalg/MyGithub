

#include <stdio.h>
#include "bitmap.c"
#include <stdlib.h>

int main(int argc, char* argv[]) 
{

	//////////////////////////////////////////////////////////////////////////////
	printf("500w 500h \n\n");
	//////////////////////////////////////////////////////////////////////////////

	BitMap_t bitmap0;
	BitMap_t bitmap1;
	BitMap_t bitmap2;
	BitMap_t bitmap3;
	BitMap_t bitmap4;

	BitMap_t bitmap_DIY;
	FILE *DIY;
	DIY = fopen("DIY.bmp", "wb");
	InitBitMap(&bitmap_DIY, 100,100);
	SaveBitMap(&bitmap_DIY, DIY);

	fclose(DIY);

	BitMap_t bitmap_boxes;
	FILE *boxes;
	FILE *boxesOUT;
	boxes = fopen("boxes.bmp", "rb");
	boxesOUT = fopen("boxesOUT.bmp", "wb");
	OpenBitMap(&bitmap_boxes, boxes);
	SaveBitMap(&bitmap_boxes, boxesOUT);

	fclose(boxesOUT);
	fclose(boxes);

	FILE *In0;
	FILE *In1;
	FILE *In2;
	FILE *In3;
	FILE *In4;

	FILE *Out0;
	FILE *Out1;
	FILE *Out2;
	FILE *Out3;
	FILE *Out4;

	In0 = fopen("../resources/IN/white500w500h.bmp", "rb");
	In1 = fopen("../resources/IN/black500w500h.bmp", "rb");
	In2 = fopen("../resources/IN/red500w500h.bmp", "rb");
	In3 = fopen("../resources/IN/green500w500h.bmp", "rb");
	In4 = fopen("../resources/IN/blue500w500h.bmp", "rb");

	Out0 = fopen("../resources/OUT/Out_white500w500h.bmp", "rwb");
	Out1 = fopen("../resources/OUT/Out_black500w500h.bmp", "wb");
	Out2 = fopen("../resources/OUT/Out_red500w500h.bmp", "wb");
	Out3 = fopen("../resources/OUT/Out_green500w500h.bmp", "wb");
	Out4 = fopen("../resources/OUT/Out_blue500w500h.bmp", "wb");

	printf("OPENIN ____________________________________________________________________ \n\n");
	OpenBitMap(&bitmap0, In0);
	OpenBitMap(&bitmap1, In1);
	OpenBitMap(&bitmap2, In2);
	OpenBitMap(&bitmap3, In3);
	OpenBitMap(&bitmap4, In4);


	printf("\n\nSAVING ____________________________________________________________________ \n\n");
	SaveBitMap(&bitmap0, Out0);
	SaveBitMap(&bitmap1, Out1);
	SaveBitMap(&bitmap2, Out2);
	SaveBitMap(&bitmap3, Out3);
	SaveBitMap(&bitmap4, Out4);

	fclose(In0);
	fclose(In1);
	fclose(In2);
	fclose(In3);
	fclose(In4);

	fclose(Out0);
	fclose(Out1);
	fclose(Out2);
	fclose(Out3);
	fclose(Out4);

	//////////////////////////////////////////////////////////////////////////////
	printf("100w 500h \n\n");
	//////////////////////////////////////////////////////////////////////////////
	
	BitMap_t bitmap0_100_500h;
	BitMap_t bitmap1_100_500h;
	BitMap_t bitmap2_100_500h;
	BitMap_t bitmap3_100_500h;
	BitMap_t bitmap4_100_500h;

	FILE *In0_100_500h;
	FILE *In1_100_500h;
	FILE *In2_100_500h;
	FILE *In3_100_500h;
	FILE *In4_100_500h;

	FILE *Out0_100_500h;
	FILE *Out1_100_500h;
	FILE *Out2_100_500h;
	FILE *Out3_100_500h;
	FILE *Out4_100_500h;

	In0_100_500h = fopen("../resources/IN/white100w500h.bmp", "rb");
	In1_100_500h = fopen("../resources/IN/black100w500h.bmp", "rb");
	In2_100_500h = fopen("../resources/IN/red100w500h.bmp", "rb");
	In3_100_500h = fopen("../resources/IN/green100w500h.bmp", "rb");
	In4_100_500h = fopen("../resources/IN/blue100w500h.bmp", "rb");

	Out0_100_500h = fopen("../resources/OUT/Out_white100w500h.bmp", "rwb");
	Out1_100_500h = fopen("../resources/OUT/Out_black100w500h.bmp", "wb");
	Out2_100_500h = fopen("../resources/OUT/Out_red100w500h.bmp", "wb");
	Out3_100_500h = fopen("../resources/OUT/Out_green100w500h.bmp", "wb");
	Out4_100_500h = fopen("../resources/OUT/Out_blue100w500h.bmp", "wb");

	printf("OPENIN ____________________________________________________________________ \n\n");
	OpenBitMap(&bitmap0_100_500h, In0_100_500h);
	OpenBitMap(&bitmap1_100_500h, In1_100_500h);
	OpenBitMap(&bitmap2_100_500h, In2_100_500h);
	OpenBitMap(&bitmap3_100_500h, In3_100_500h);
	OpenBitMap(&bitmap4_100_500h, In4_100_500h);


	printf("\n\nSAVING ____________________________________________________________________ \n\n");
	SaveBitMap(&bitmap0_100_500h, Out0_100_500h);
	SaveBitMap(&bitmap1_100_500h, Out1_100_500h);
	SaveBitMap(&bitmap2_100_500h, Out2_100_500h);
	SaveBitMap(&bitmap3_100_500h, Out3_100_500h);
	SaveBitMap(&bitmap4_100_500h, Out4_100_500h);

	fclose(In0_100_500h);
	fclose(In1_100_500h);
	fclose(In2_100_500h);
	fclose(In3_100_500h);
	fclose(In4_100_500h);

	fclose(Out0_100_500h);
	fclose(Out1_100_500h);
	fclose(Out2_100_500h);
	fclose(Out3_100_500h);
	fclose(Out4_100_500h);


	//////////////////////////////////////////////////////////////////////////////
	printf("100w 50h \n\n");
	//////////////////////////////////////////////////////////////////////////////
	
	BitMap_t bitmap0_100w_50h;
	BitMap_t bitmap1_100w_50h;
	BitMap_t bitmap2_100w_50h;
	BitMap_t bitmap3_100w_50h;
	BitMap_t bitmap4_100w_50h;

	FILE *In0_100w_50h;
	FILE *In1_100w_50h;
	FILE *In2_100w_50h;
	FILE *In3_100w_50h;
	FILE *In4_100w_50h;

	FILE *Out0_100w_50h;
	FILE *Out1_100w_50h;
	FILE *Out2_100w_50h;
	FILE *Out3_100w_50h;
	FILE *Out4_100w_50h;

	In0_100w_50h = fopen("../resources/IN/white100w50h.bmp", "rb");
	In1_100w_50h = fopen("../resources/IN/black100w50h.bmp", "rb");
	In2_100w_50h = fopen("../resources/IN/red100w50h.bmp", "rb");
	In3_100w_50h = fopen("../resources/IN/green100w50h.bmp", "rb");
	In4_100w_50h = fopen("../resources/IN/blue100w50h.bmp", "rb");

	Out0_100w_50h = fopen("../resources/OUT/Out_white100w50h.bmp", "rwb");
	Out1_100w_50h = fopen("../resources/OUT/Out_black100w50h.bmp", "wb");
	Out2_100w_50h = fopen("../resources/OUT/Out_red100w50h.bmp", "wb");
	Out3_100w_50h = fopen("../resources/OUT/Out_green100w50h.bmp", "wb");
	Out4_100w_50h = fopen("../resources/OUT/Out_blue100w50h.bmp", "wb");

	printf("OPENIN ____________________________________________________________________ \n\n");
	OpenBitMap(&bitmap0_100w_50h, In0_100w_50h);
	OpenBitMap(&bitmap1_100w_50h, In1_100w_50h);
	OpenBitMap(&bitmap2_100w_50h, In2_100w_50h);
	OpenBitMap(&bitmap3_100w_50h, In3_100w_50h);
	OpenBitMap(&bitmap4_100w_50h, In4_100w_50h);


	printf("\n\nSAVING ____________________________________________________________________clearop \n\n");
	SaveBitMap(&bitmap0_100w_50h, Out0_100w_50h);
	SaveBitMap(&bitmap1_100w_50h, Out1_100w_50h);
	SaveBitMap(&bitmap2_100w_50h, Out2);
	SaveBitMap(&bitmap3_100w_50h, Out3_100w_50h);
	SaveBitMap(&bitmap4_100w_50h, Out4_100w_50h);

	fclose(In0_100w_50h);
	fclose(In1_100w_50h);
	fclose(In2_100w_50h);
	fclose(In3_100w_50h);
	fclose(In4_100w_50h);

	fclose(Out0_100w_50h);
	fclose(Out1_100w_50h);
	fclose(Out2_100w_50h);
	fclose(Out3_100w_50h);
	fclose(Out4_100w_50h);

	printf("\n\nSIZE OF TYPES ____________________________________________________________________clearop \n\n");
	printf("Byte: %d \n", sizeof(BYTE));
	printf("Unsigned Short: %d \n", sizeof(unsigned short int));
	printf("Unsigned int: %d \n", sizeof(unsigned int));
	printf("Unsigned Long: %d \n", sizeof(unsigned long int ));


	return 0;
}


