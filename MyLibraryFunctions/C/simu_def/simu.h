#include <stdio.h>
#include <stdlib.h>
#include "bitmap_def/bitmap.h"
#include "cameraMod_def/cameraMod.h"

/* 
	Purpose of this header file is to define a structure for initalizing, incrementing, modelling and pixmap mapping simulations 
	for the pixmap file  (may in future have to adapt the camera model for viewing three dimensional models)
*/ 


// Float matrix for conversions:

	typedef struct 
	{
		typedef struct 
		{
			double value;	 // value in what ever units

			// Geometical locations Real World:
			double Xpoint;	 
			double Ypoint;
			double Zpoint;

			// Time stamp of point:
			double timestamp;

			typedef struct  
			{
			 Points_t *AdjPoints;
			 unsigned int numConnections;

			} Connections_t Connections*; // Structure to relate points and their Individual connections

		} Points_t **Points; // The individual points with values and X and Y locations (single array for the model, another for model through time)
		// Will be transfered into either a series of bitmaps or an uncompressed movie file; 

		typedef struct 
		{
			// RBGA values for mapping and corressponding values: 
			typedef struct // For linear interpolation:
			{
				double Values[5]; // R B G A val 
			} Array_t *RBGA_map;

			unsigned int numRGBA_V; // Number of these vals

		} Mapping_t pixMAP;

		// Real World Domain:
		double Domain_Real_XYZ**; // {Xmin ; Xmax}{Ymin ; Ymax} ... 

		double timeStep;
		double timeEnd;

		Bitmap_t *bitmap;

		MovieCamera Cam;


		// Size of Image that this will be 
		unsigned int imageHeight;
		unsigned int imageWidth;

	} SimU_Fixed_t ;


	void InitSimMod(SimU_Fixed_t *sim, )



