#include <stdio.h>
#include <stdlib.h>
#include "matrix_def.h"

/////////////// 2D matrix functions: ////////////////////

// Create 2D matrix full of doubles: 
double_matrix2D double_Create2DMatrix(uint64 row, uint64 col) 
{
	// Define mat type: 
	double_matrix2D mat;
	mat.nrows = row; // number of rows
	mat.ncols = col; // number of columns
	// Create an array full of double pointers of depth 2 that relate to  
	// the row index's for each respective columns. 
	mat.matrix = (double**)malloc(row * sizeof(double*)); 

	// Define the number of columns and set their value to 0.
	for (uint64 i = 0; i < row; i++)
	{
		mat.matrix[i] = calloc(col, sizeof(double));
	}
	
	// Resturn the matrix: 
	return mat;
}



//////////////////// Getters: ////////////////////////////
double double_Get2DMatrixValue(double_matrix2D* mat, uint64 row, uint64 col)
{

	if (row > mat->nrows) {
		fprintf(stderr, "Indexing Error row index greater that number of rows\n");
	}

	if (col > mat->ncols) {
		fprintf(stderr, "Indexing Error col index greater that number of cols\n");
	}
	return mat->matrix[row][col];
}




double* double_Get2DMatrixRow(double_matrix2D* mat, uint64 row) // Set a row in a matrix equal to a vector
{
	double* result = calloc((mat->ncols), sizeof(double));
	// Enter code here: 
	if (row > mat->nrows) {
		fprintf(stderr, "Indexing Error row index greater that number of rows\n");
	} else 
	{
		for (uint64 i = 0; i < mat->ncols; i++)
		{
			result[i] = double_Get2DMatrixValue(mat, row, i);
		}	
	}

	return result;

}




double* double_Get2DMatrixCol(double_matrix2D* mat, uint64 col) // Set a column in a matris equal to a vector
{
	double* result = calloc((mat->nrows), sizeof(double));
	// Enter code here: 
	if (col > mat->ncols) {
		fprintf(stderr, "Indexing Error col index greater that number of columns\n");
	} else 
	{
		for (uint64 i = 0; i < mat->nrows; i++)
		{
			result[i] = double_Get2DMatrixValue(mat, i, col);
		}	
	}
	return result;
}



double** double_Get2DMatrixAll(double_matrix2D* mat) // Set all values in the matrix equal to a value
{
	// Enter code here: 
	double** result = (double**)malloc(mat->nrows * sizeof(double*));
	// Define the number of columns and set their value to 0. 
	for (uint64 i = 0; i < mat->nrows; i++)
	{
		result[i] = calloc(mat->ncols, sizeof(double));
		for (uint64 j = 0; j < mat->ncols; j++)
		{ 
			result[i][j] = double_Get2DMatrixValue(mat, i, j);
		}
	}
	return result; 
}


//////////////////// Setters: ////////////////////////////
void double_Set2DMatrixValue(double_matrix2D* mat, uint64 row, uint64 col, double val)
{
	if (row > mat->nrows) 
	{
		fprintf(stderr, "Indexing Error row index greater that number of rows\n");
	} else if (col > mat->ncols) 
	{
		fprintf(stderr, "Indexing Error col index greater that number of cols\n");
	} else
	{
		mat->matrix[row][col] = val;	
	} 
}



void double_Set2DMatrixRow(double_matrix2D* mat, uint64 row, double* val) // Set a row in a matrix equal to a vector
{
	// Enter code here: 
	for (uint64 i = 0; i < mat->ncols; i++)
	{
		double_Set2DMatrixValue(mat, row, i, val[i]);
	}
}



void double_Set2DMatrixCol(double_matrix2D* mat, uint64 col, double* val) // Set a column in a matris equal to a vector
{
	// Enter code here: 
	for (uint64 i = 0; i < mat->nrows; i++)
	{
		double_Set2DMatrixValue(mat, i, col, val[i]);
	}
}


void double_Set2DMatrixAll(double_matrix2D* mat, double** val) // Set all values in the matrix equal to a value
{
	// Enter code here:
	for (uint64 i = 0; i < mat->nrows; i++)
	{
		for(uint64 j = 0; j < mat->ncols; j++)
		{
			double_Set2DMatrixValue(mat, i, j, val[i][j]);
		}
	}
}



///////////////////////// Math: //////////////////////
double_matrix2D double_MatMultiply2DMatirx(double_matrix2D* mat1, double_matrix2D* mat2) // Matrix multiplication:
{
	//uint64 mat1nrow = mat1->nrows;
	//uint64 mat1ncol = mat1->ncols;
	//uint64 mat2nrow = mat2->nrows;
	//uint64 mat2ncol = mat2->ncols;

	double_matrix2D mat_;

	if (mat1->ncols == mat2->nrows)
	{
	mat_ = double_Create2DMatrix(mat1->nrows, mat2->ncols);
	double val = 0;
	for (uint64 i = 0; i < mat1->nrows; i++) // Matrix 1 row index's
	{
		for (uint64 j = 0; j < mat2->ncols; j++) // Matrix 2 column index's
		{
			for (uint64 x = 0; x < mat1->ncols; x++) // times and accumulate the rows of mat1 with the columns of mat 2
				// if theyre not equal then segmentation fault. 
			{
					val = val + double_Get2DMatrixValue(mat1,i,x) * double_Get2DMatrixValue(mat2,x,j);
			}
			double_Set2DMatrixValue(&mat_, i, j, val);
			val = 0;
		}
	}
	} else 
	{
		fprintf(stderr, "Matrix dimensions do not apply with matrix multiplication rules.\n Number columes mat 1 must equal Number of rows mat 2.");
	}
	return mat_;
}




double_matrix2D double_inverse_2DMatrix(double_matrix2D* mat) // Inverse
{
	// Enter code here: 
	double_matrix2D out; 
	return out;
}




double double_det2DMatrix(double_matrix2D* mat) // Determinate
{
    // Enter code here:

    if (mat->nrows == mat->ncols)
    {
    	double Det_;
    	double_matrix2D* mat_temp;
    	//double** temp; 
    	for (uint64 i = mat->ncols; i > 2; i--);
    	{
    		mat_temp[i] = double_Create2DMatrix(i,i);
    	}
    	//for (uint64 i = 0; i < )
    	if (mat->nrows == 2)
    	{
    		Det_ = (double_Get2DMatrixValue(mat, 0, 0) * double_Get2DMatrixValue(mat, 1, 1) ) - (double_Get2DMatrixValue(mat, 0, 1) * double_Get2DMatrixValue(mat, 1, 0));
   			return Det_;
    	} else 
    	{
    		for (uint64 i = 0; i < mat->ncols; i++) // Loop through all rows: 
    		{



    		}
    	}


    } else 
    {
    	fprintf(stderr, "Matrix is NOT square");
    }
    
}



double_matrix2D double_Trans2DMatrix(double_matrix2D* mat) // Transpose a Matrix
{
    double_matrix2D mat_;
    
        mat_ = double_Create2DMatrix(mat->ncols,mat->nrows);
    
        for (uint64 i = 0; i < mat->nrows; i++) // Matrix 1 row index's
        {
            for (uint64 j = 0; j < mat->ncols; j++) // Matrix 2 column index's
            {
                double_Set2DMatrixValue(&mat_, j, i, double_Get2DMatrixValue(mat,i,j));
            }
        }
        return mat_;
}


double_matrix2D double_EleMultiply2DMatrix(double_matrix2D* mat1 , double_matrix2D* mat2) // Elemenewise Matrix Multiplication (Squaring a Matrix, etc..)
{
    double_matrix2D mat_;
    
    if ((mat1->nrows == mat2->nrows) && (mat1->ncols == mat2->ncols))
    {
        mat_ = double_Create2DMatrix(mat1->nrows, mat2->ncols);
        double val = 0;
        for (uint64 i = 0; i < mat1->nrows; i++) // Matrix 1 row index's
        {
            for (uint64 j = 0; j < mat1->ncols; j++) // Matrix 2 column index's
            {
                val = double_Get2DMatrixValue(mat1,i,j) * double_Get2DMatrixValue(mat2,i,j);
                double_Set2DMatrixValue(&mat_, i, j, val);
                val = 0;
            }
        }
    } else
    {
        fprintf(stderr, "Matrix dimensions do not apply with element wise multiplication rules.\n Number of rows and columns  for mat 1 must equal Number of rows and columns of mat 2.");
    }
    return mat_; 
}


double_matrix2D double_Add2DMatrix(double_matrix2D* mat1, double_matrix2D* mat2) // Matrix Addition
{
    double_matrix2D mat_;
    
    if ((mat1->nrows == mat2->nrows) && (mat1->ncols == mat2->ncols))
    {
        
        mat_ = double_Create2DMatrix(mat1->nrows, mat2->ncols);
        double val = 0;
        
        for (uint64 i = 0; i < mat1->nrows; i++) // Matrix 1 row index's
        {
            for (uint64 j = 0; j < mat1->ncols; j++) // Matrix 2 column index's
            {
                val = double_Get2DMatrixValue(mat1,i,j) + double_Get2DMatrixValue(mat2,i,j);
                double_Set2DMatrixValue(&mat_, i, j, val);
                val = 0;
            }
        }
    } else
    {
        fprintf(stderr, "Matrix dimensions do not apply with element wise multiplication rules.\n Number of rows and columns  for mat 1 must equal Number of rows and columns of mat 2.");
    }
    
    return mat_;  
}


double_matrix2D double_Sub2DMatrix(double_matrix2D* mat1, double_matrix2D* mat2) // Matrix Subtraction
{
    
    double_matrix2D mat_;
    
    if ((mat1->nrows == mat2->nrows) && (mat1->ncols == mat2->ncols))
    {
        
        mat_ = double_Create2DMatrix(mat1->nrows, mat2->ncols);
        double val = 0;
        
        for (uint64 i = 0; i < mat1->nrows; i++) // Matrix 1 row index's
        {
            for (uint64 j = 0; j < mat1->ncols; j++) // Matrix 2 column index's
            {
                val = double_Get2DMatrixValue(mat1,i,j) - double_Get2DMatrixValue(mat2,i,j);
                double_Set2DMatrixValue(&mat_, i, j, val);
                val = 0;
            }
        }
        
    } else
    {
        fprintf(stderr, "Matrix dimensions do not apply with element wise multiplication rules.\n Number of rows and columns  for mat 1 must equal Number of rows and columns of mat 2.");
    }
    return mat_;  
}


double_matrix2D double_MultiplyConst2DMatrix(double_matrix2D* mat, double val) // Matrix times a constant (divide it val = 1/value);
{
    
        double_matrix2D mat_;
        mat_ = double_Create2DMatrix(mat->nrows, mat->ncols);
        double result = 0;
        
        for (uint64 i = 0; i < mat->nrows; i++) // Matrix 1 row index's
        {
            for (uint64 j = 0; j < mat->ncols; j++) // Matrix 2 column index's
            {
                
                result = val * double_Get2DMatrixValue(mat,i,j);
                double_Set2DMatrixValue(&mat_, i, j, result);
                result = 0;
                
            }
        }
    
    return mat_;
}


double_matrix2D double_AddConst2DMatrix(double_matrix2D* mat, double val) // Matrix add a constant (Subtract if value is negative)
{
    double_matrix2D mat_;
    mat_ = double_Create2DMatrix(mat->nrows, mat->ncols);
    double result = 0;
    
    for (uint64 i = 0; i < mat->nrows; i++) // Matrix 1 row index's
    {
        for (uint64 j = 0; j < mat->ncols; j++) // Matrix 2 column index's
        {
            
            result = val + double_Get2DMatrixValue(mat,i,j);
            double_Set2DMatrixValue(&mat_, i, j, result);
            result = 0;
            
        }
    }
    
    return mat_;
}

///////////////// UI based functions: /////////////////////
void double_print2DMatrix(double_matrix2D* mat)
{
	uint64 matnrow = mat->nrows;
	uint64 matncol = mat->ncols;
	for (uint64 i = 0; i < matnrow; i++) 
	{
		for (uint64 j = 0; j < matncol; j++) 
		{
			printf("\t %f", double_Get2DMatrixValue(mat,i,j));
		}
		printf("\n");
	}
}

void double_saveCSV2DMatrix(double_matrix2D* mat, char* filename_csv) // Save matrix to CSV file.
{
    // Enter code here:
}

/////////////// 3D matrix functions: ////////////////////

double_matrix3D double_Create3DMatrix(uint64 row, uint64 col, uint64 set)
{
	// Define mat type: 
	double_matrix3D mat;
	mat.nrows = row; // number of rows
	mat.ncols = col; // number of columns
	mat.nsets = set; // number of sets
	// Create an array full of double pointers of depth 2 that relate to  
	// the row index's for each respective columns. 
	mat.matrix = (double***)malloc(row * sizeof(double**)); 

	// Define the number of columns and set their value to 0.
	for (uint64 i = 0; i < row; i++)
	{
		mat.matrix[i] = malloc(col * sizeof(double*));
		for (uint64 j = 0; j < col; j++)
		{
			mat.matrix[i][j] = calloc(set, sizeof(double));
		}
	}
	// Resturn the matrix: 
	return mat;
}
// Converters: 
double_matrix2D double_Convert3Dto2DMatrix(double_matrix3D *mat, uint64 set)
{
	double_matrix2D result;
	double_Create2DMatrix(mat->nrows, mat->ncols);
	for (uint64 i = 0; i < mat->nrows; i++)
	{
		for (uint64 j = 0; j < mat->ncols; j++)
		{
			double_Set2DMatrixValue(result,i,j,double_Get3DMatrixValue(mat,i,j,set));
		}
	}
	return result;
}
void double_Set2Dto3DMatrix(double_matrix3D *mat3D, double_matrix2D *mat2D, uint64 set)
{
	for (uint64 i = 0; i < mat3D->nrows; i++)
	{
		for (uint64 j = 0; j < mat3D->ncols; j++)
		{
			double_Set3DMatrixValue(mat3Di,j,set, double_Get2DMatrixValue(mat2D,i,j));
		}
	}
}


// Getters: 
double double_Get3DMatrixValue(double_matrix2D* mat, uint64 row, uint64 col, uint64 set)
{
	
	if (row > mat->nrows) {
		fprintf(stderr, "Indexing Error row index greater that number of rows\n");
	} else if (col > mat->ncols) {
		fprintf(stderr, "Indexing Error col index greater that number of cols\n");
	} else if (set > mat->nsets) {
		fprintf(stderr, "Indexing Error set index greater that number of sets\n");
	} else 
	{
		return mat->matrix[row][col][set];
	}
}

double* double_Get3DMatrixRow(double_matrix3D* mat, uint64 row); 
double* double_Get3DMatrixCol(double_matrix3D* mat, uint64 col); 

double** double_Get3DMatrixSet(double_matrix3D* mat, uint64 set)
{
	double** result = (double**)mallov((mat->nrows) * sizeof(double*));
	
	for (uint64 i = 0; i < mat->nrows; i++)
	{
		result[i] = calloc(mat->ncols, sizeof(double));
		for (uint64 j = 0; j < mat->ncols; j++)
		{
			result[i][j] = double_Get3DMatrixValue(mat, i, j, set);
		}
	}
	return result;
}

double*** double_Get3DMatrixAll(double_matrix3D* mat)
{
	double*** result = (double***)malloc(mat->nrows * sizeof(double**));
	for (uint64 i = 0; i < mat->nrows; i++)
	{
		result[i] = (double**)malloc(mat->nrows * sizeof(double*));
		for (uint64 j = 0; j < mat->ncols; j++)
		{
			result[i][j] = calloc(mat->nsets, sizeof(double));
			for (uint64 k = 0; k < mat->nsets; k++)
			{
				result[i][j][k] = double_Get3DMatrixValue(mat, i, j, k);
			}
		}
	}
	return result;
}

// Setters:
void double_Set3DMatrixValue(double_matrix3D* mat, uint64 row, uint64 ccol, uint64 set, double val)
{
	if (row > mat->nrows) {
		fprintf(stderr, "Indexing Error row index greater that number of rows\n");
	} else if (col > mat->ncols) {
		fprintf(stderr, "Indexing Error col index greater that number of cols\n");
	} else if (set > mat->nsets) {
		fprintf(stderr, "Indexing Error set index greater that number of sets\n");
	} else 
	{
		mat->matrix[row][col][set] = val;
	}
}

void double_Set3DMatrixRow(double_matrix3D* mat, uint64 row, double* val); // Set a row in a matrix equal to a vector
void double_Set3DMatrixCol(double_matrix3D* mat, uint64 col, double* val); // Set a column in a matris equal to a vector
void double_Set3DMatrixSet(double_matrix3D* mat, uint64 set, double** val); 
void double_Set3DMatrixAll(double_matrix3D* mat, double*** val); // Set all values in the matrix equal to a value

// Math operations
double_matrix3D double_Multiply3DMatirx(double_matrix3D* mat1, double_matrix3D* mat2)
{
	if (mat1->nsets == mat2->nsets)
	{
		double_matrix3D mat;
		double_Create3DMatrix(mat, mat1->nrows, mat2->ncols, mat1->nsets);
		for (uint64 i = 0; i < mat1->nsets; i++)
		{
			//mat Do this! 
		}
	} else 
	{
		fprintf(stderr, "Unequal number of sets..");
	}
}

double_matrix3D double_inverse_3DMatrix(double_matrix3D* mat)
{
	// Enter code here: 
	double_matrix3D out;
	return out;
}

double_matrix2D double_SumSetsto2DMatrix(double_matrix2D* mat);


// UI based functions:
void double_print3DMatrix(double_matrix3D* mat)
{
	// Enter code here: 

}

