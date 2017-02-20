#include <stdio.h>
#include "simu_def/simu.h"
#include "bitmap_def/bitmap.h"


/*
	File defining the camera model along with convolution and posiotioning
*/

typedef struct 
{
	// Define Camera Extrinsic Parameters: 
	double Xpos;
	double Ypos;
	double Zpos;
	double AngX;
	double AngY;
	double AngZ;
} CameraPos_t;

typedef struct 
{
	// Define Camera Intrinsic Parameters:
} CameraProp_t;


typedef struct 
{
	// Define Camera model Matrix: 

} CameraMod_t;

typedef struct 
{
	CameraPos_t Pos*;
	CameraProp_t Properties;

	CameraMod_t Cam*;

	double timeStart;
	double timestep;
	double timeEnd;
} MovieCamera;