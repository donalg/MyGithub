


#ifndef CSVDATA_H_
#define CSVDATA_H_

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <stdio.h>
#include <vector>
#include <stdlib.h>

// Write class definition here: 

using namespace std;

class CSVdata {

private:

    ifstream FILE;
    vector < shared_ptr <ofstream> > FormattedBlocks; 
    string FilePath;

    vector <string> cell;
    vector <double> North, East, Height;

    int NumberOfBlocks;
   // int rowNumbers[100];
    vector <string> BlockNames;

    int Sstart;
    int Send;

  	unsigned long int LineCount;

  	// The three
  	vector < vector< vector <double> > > GPSpoints;
  	vector <unsigned long int> rowNums;
    vector <double> BlockAreas;




public:

    void setStringStart(const int START_POINT);

    void setStringEnd(const int END_POINT);

    int GetStringStart();

    int GetStrinEnd();

    void Init();

    void ReadData();

    void Display();

    void DetectBlocks();

    void Format();

    void PolygonAreaCompute();

    void SaveFormattedBlocks();

     

};


#endif