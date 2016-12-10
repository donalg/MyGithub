#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matrix_def.h"

// Define potentially undefined types: 	
//typedef unsigned char uint8;
//typedef unsigned short int uint16;
//typedef unsigned long int uint32;
//typedef unsigned long long int uint64;

int main(void) 
{
	
	// Test the matrix functions previously created: 
	double_matrix2D mat1 = double_Create2DMatrix(5,5);
	double_matrix2D mat2 = double_Create2DMatrix(5,5);
	double_matrix2D mat_outMM;
    double_matrix2D mat_outT;
    double_matrix2D mat_outEM;
    double_matrix2D mat_outAM;
    double_matrix2D mat_outSM;
    double_matrix2D mat_outMC;
    double_matrix2D mat_outAC;
    
    
	for (uint64 i = 0; i < mat1.nrows; i++) 
	{
		for (uint64 j = 0; j < mat1.ncols; j++) 	
		{
			double_Set2DMatrixValue(&mat1,i,j,(25 - i+(2*j)));

		}
	}

	for (uint64 i = 0; i < mat2.nrows; i++) 
	{
		for (uint64 j = 0; j < mat2.ncols; j++) 	
		{
			double_Set2DMatrixValue(&mat2,i,j,(40 - i ));
		}
	}

	mat_outMM = double_MatMultiply2DMatirx(&mat1, &mat2);
    
    mat_outT = double_Trans2DMatrix(&mat1);
    mat_outEM = double_EleMultiply2DMatrix(&mat1, &mat2);
    mat_outAM = double_Add2DMatrix(&mat1, &mat2);
    mat_outSM = double_Sub2DMatrix(&mat1, &mat2);
    mat_outMC = double_MultiplyConst2DMatrix(&mat1, 10);
    mat_outAC = double_AddConst2DMatrix(&mat1, 1);
    

	printf("First Matrix\n" );
	double_print2DMatrix(&mat1);

	printf("Second Matrix\n");
	double_print2DMatrix(&mat2);

	printf("Multiply Matrix\n");
	double_print2DMatrix(&mat_outMM);
    
    printf("Transpose Matrix\n");
    double_print2DMatrix(&mat_outT);
    
    printf("Element Multiply\n");
    double_print2DMatrix(&mat_outEM);
    
    printf("Add Matrix\n");
    double_print2DMatrix(&mat_outAM);
    
    printf("Subtract Matrix\n");
    double_print2DMatrix(&mat_outSM);
    
    printf("Multiply Constant\n");
    double_print2DMatrix(&mat_outMC);
    
    printf("Add Constant\n");
    double_print2DMatrix(&mat_outAC);

    printf("GetRow\n");
    double_matrix2D GETROW_MAT;
    GETROW_MAT = double_Create2DMatrix(mat1.nrows, mat1.ncols);
    double* getRow_mat;
    double* getCol_mat;
    getRow_mat = double_Get2DMatrixRow(&mat1, 2);
    getCol_mat = double_Get2DMatrixCol(&mat1, 0);
    double_Set2DMatrixRow(&GETROW_MAT, 2, getRow_mat);
    double_Set2DMatrixCol(&GETROW_MAT, 0, getCol_mat);
    double_print2DMatrix(&GETROW_MAT);
    
	return EXIT_SUCCESS;
}
