#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <stdio.h>
#include <vector>
#include <stdlib.h>

#include "CSVdata.h"


using namespace std;


// Prompt and wait function:
void prompt(void) {
    cout << "Press Enter to continue:" << endl;
    cin.ignore(100,'\n');
    cin.get();

}


int main()
{
    
    CSVdata NewData;
    NewData.Init();
    prompt();
    NewData.ReadData();
    prompt();
    NewData.Display();
    prompt();
    NewData.DetectBlocks();
    prompt();
    NewData.Format();
    prompt();
    NewData.PolygonAreaCompute();
    prompt(); 
    NewData.SaveFormattedBlocks();
    return 0;
    
}
