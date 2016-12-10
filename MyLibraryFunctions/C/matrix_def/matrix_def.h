/* 
	Purpose of this code is to define a matrix data type 
	along with all matrix manipulation based functions. For both 2D 
	and 3D matricies. To be used in standard computations.

	// As of: 3/12/2016 scope is defined within 2D and 3D double. 
*/

// Define potentially undefined types: 	
typedef unsigned char uint8;	
typedef unsigned short int uint16;
typedef unsigned long int uint32;
typedef unsigned long long int uint64; 

///////////////////////////////////////////////////////////////////////
// Matrix Definitions: 
///////////////////////////////////////////////////////////////////////


// 2D matrix structure containing double precision floating point numbers: 
struct double_matrix2D_
{
	uint64 nrows, ncols; // uint64 for potentially very larges rows and columns. 
	double** matrix;
};
typedef struct double_matrix2D_ double_matrix2D;

// Create nessercery 2D Matrix functions for matrix manipulations:
double_matrix2D double_Create2DMatrix(uint64 row, uint64 col); // Create Matrix full of zeros

// Getters:
double double_Get2DMatrixValue(double_matrix2D* mat, uint64 row, uint64 col); // Get a value out of a matrix
double* double_Get2DMatrixRow(double_matrix2D* mat, uint64 row); // Set a row in a matrix equal to a vector
double* double_Get2DMatrixCol(double_matrix2D* mat, uint64 col); // Set a column in a matris equal to a vector
double** double_Get2DMatrixAll(double_matrix2D* mat); // Set all values in the matrix equal to a value

// Setters: 
void double_Set2DMatrixValue(double_matrix2D* mat, uint64 row, uint64 col, double val); // Set a value into a matrix 
void double_Set2DMatrixRow(double_matrix2D* mat, uint64 row, double* val); // Set a row in a matrix equal to a vector
void double_Set2DMatrixCol(double_matrix2D* mat, uint64 col, double* val); // Set a column in a matris equal to a vector
void double_Set2DMatrixAll(double_matrix2D* mat, double** val); // Set all values in the matrix equal to a value

// Math operations
double_matrix2D double_MatMultiply2DMatirx(double_matrix2D* mat1, double_matrix2D* mat2); // Matrix Multiplication
double_matrix2D double_inverse_2DMatrix(double_matrix2D* mat); // Computing the Inverse
double_matrix3D double_LUDecomp2DMatrix(double_matrix2D* mat); // Compute the LU decomposition
double_matrix3D double_QRDecomp2DMatrix(double_matrix2D* mat); // Compute the QR decomposition (Retun Q in (0th) matrix of 3D and R in (1st) matrix of 3D)
double double_det2DMatrix(double_matrix2D* mat); // Computing the Determinate
double_matrix2D double_Trans2DMatrix(double_matrix2D* mat); // Transpose a Matrix
double_matrix2D double_EleMultiply2DMatrix(double_matrix2D* mat1, double_matrix2D* mat2); // Element Wise Matrix multiplication
double_matrix2D double_Add2DMatrix(double_matrix2D* mat1, double_matrix2D* mat2); // Matrix Addition
double_matrix2D double_Sub2DMatrix(double_matrix2D* mat1, double_matrix2D* mat2); // Matrix Subtraction
double_matrix2D double_MultiplyConst2DMatrix(double_matrix2D* mat, double val); // Matrix times a constant
double_matrix2D double_AddConst2DMatrix(double_matrix2D* mat, double val); // Matrix add a constant


// UI based operations:
void double_print2DMatrix(double_matrix2D* mat); // Print matrix contents to screen
void double_saveCSV2DMatrix(double_matrix2D* mat, char* filename_csv); // Save matrix to CSV file.


///
///
///


// 3D matrix containing double precision floating point numbers: 
struct double_matrix3D_
{
	uint64 nrows, ncols, nsets;
	double*** matrix;
};
typedef struct double_matrix3D_ double_matrix3D;


// Create nesercery 3D matrix functions:

// Createor:
double_matrix3D double_Create3DMatrix(uint64 row, uint64 col, uint64 set);

// Converter: 
double_matrix2D double_Convert3Dto2DMatrix(double_matrix3D *mat, uint64 set);
double_matrix3D double_Set2Dto3DMatrix(double_matrix3D *mat3D, double_matrix2D *mat2D, uint64 set);

// Getters:
double double_Get3DMatrixValue(double_matrix3D* mat, uint64 row, uint64 col, uint64 set);
double* double_Get3DMatrixRow(double_matrix3D* mat, uint64 row, uint64 set); 
double* double_Get3DMatrixCol(double_matrix3D* mat, uint64 col, uint64 set); 
double** double_Get3DMatrixSet(double_matrix3D* mat, uint64 set); 
double*** double_Get3DMatrixAll(double_matrix3D* mat); 

// Setters:
void double_Set3DMatrixValue(double_matrix3D* mat, uint64 row, uint64 ccol, uint64 set, double val);
void double_Set3DMatrixRow(double_matrix3D* mat, uint64 row, double* val); // Set a row in a matrix equal to a vector
void double_Set3DMatrixCol(double_matrix3D* mat, uint64 col, double* val); // Set a column in a matris equal to a vector
void double_Set3DMatrixSet(double_matrix3D* mat, uint64 set, double** val); // Set a column in a matris equal to a vector
void double_Set3DMatrixAll(double_matrix3D* mat, double*** val); // Set all values in the matrix equal to a value

// Math operations:
double_matrix3D double_Multiply3DMatirx(double_matrix3D* mat1, double_matrix3D* mat2);
double_matrix3D double_inverse_3DMatrix(double_matrix3D* mat);
double_matrix2D double_SumSetsto2DMatrix(double_matrix2D* mat);

// UI based Operations
void double_print3DMatrix(double_matrix3D* mat);












