#include <stdio.h>
#

// Initialise Data types and values: 
char Hex = {'1', '2', '3', '4,', '5', '6', '7', '8', '9', '10', 'A', 'B', 'C', 'D', 'E', 'F'};
char Deci = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15', '16'};
char Bin = {'0000', '0001', '0010', '0011', '0100', '0101', '0110', '0111', '1000', '1001', '1010', '1011', '1100', '1101', '1110', '1111'};

int main (int argc, char * argv[])
{
	char cond = 0;
	char  filenameHEX[strlen(argv[1]) +4];
	char  filenameDEC[strlen(argv[1]) +7];
	char  filenameBIN[strlen(argv[1]) +7];
	printf("%s\n", filenameHEX);
	printf("%s\n", filenameDEC);
	printf("%s\n", filenameBIN);

	printf("%d \t %s\n", argc, argv[1]);
	printf("%d\n", strlen(argv[1]));

	printf("1\n");
	filenameHEX = strcat(argv[1], '.txt');
	filenameDEC = strcat(argv[1], 'DEC.txt');
	filenameBIN = strcat(argv[1], 'BIN.txt');
	printf("%s\n", filenameHEX);
	printf("%s\n", filenameDEC);
	printf("%s\n", filenameBIN);

	printf("1\n");
	FILE *fileHEX, *fileDEC, *fileBIN;
	fileHEX = fopen (filenameHEX, 'r');
	fileDEC = fopen (filenameDEC, 'w');
	fileBIN = fopen (filenameBIN, 'w');
	printf("1\n");
	if (!fileHEX)
	{
		printf("Could not Open HEX file\n");
		printf("%s\n\n", filenameHEX );
		cond = 1;
	}

	if (!fileDEC)
	{
		printf("Could not Open DEC file\n");
		printf("%s\n\n", filenameDEC);
		cond = 1;
	}

	if (!fileBIN)
	{
		printf("Could not Open BIN file\n");
		printf("%s\n\n", filenameBIN );
		cond = 1;
	}
	if (cond)
	{
		return;
	}



	for (int i = 0; i < 16; i++)
	{
		

	}
	fclose(fileHEX);
	fclose(fileDEC);
	fclose(fileBIN);
	return 1;
}