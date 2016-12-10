#include "CSVdata.h"



/////////////////////////////////////////////////////////////////////////////xs
void CSVdata::setStringStart(const int START_POINT) 
{
    Sstart = START_POINT;
}


/////////////////////////////////////////////////////////////////////////////
void CSVdata::setStringEnd(const int END_POINT) 
{
    Send = END_POINT;
}
 

/////////////////////////////////////////////////////////////////////////////       
int CSVdata::GetStringStart() 
{
    return Sstart;
}


/////////////////////////////////////////////////////////////////////////////
int CSVdata::GetStrinEnd() 
{
    return Send;
}


/////////////////////////////////////////////////////////////////////////////
void CSVdata::Init() 
{

      bool PathCond = false;
      char PathAnswer;

        // Find File path: 
        do {

              cin.ignore(100, '\n');
              cout << "Please enter the file path of the csv:" << endl;
              cin >> FilePath;
              cout << "File Path entered: " << FilePath << endl
              << "Is this correct (Y/N):" << endl;

              cin.ignore(100, '\n');
              cin >> PathAnswer;

              if(PathAnswer == 'Y' || PathAnswer == 'y') 
              {
                    PathCond = true;
              }

             } while (!PathCond);


      FILE.open(FilePath.c_str());


      if (FILE.is_open()) 
      {
        cout << "File: " << FilePath << " Has been initalised correctly, ready to readdata" << endl;
      } 
      else 
      {
        cout << "FILE COULD NOT BE INITALISED" << endl
        << "please ensure path is correct" << endl;
      }


}


/////////////////////////////////////////////////////////////////////////////
void CSVdata::ReadData() 
{

    string D, N, E, H;
    LineCount = 0;
    bool state = true;

     while(state)
     {

          if(!getline(FILE,D,',').good()) 
          {
                state = false;
                continue;
          }

          getline(FILE,N,',');
          getline(FILE,E,',');
          getline(FILE,H,'\n');

          cell.push_back(D);
          North.push_back(atof(N.c_str()));
          East.push_back(atof(E.c_str()));
          Height.push_back(atof(H.c_str()));
          LineCount++;
      }


      FILE.close();
      cout << "SOURCE: " << FilePath << endl 
      << "Number of lines read: " << LineCount << endl;

}


/////////////////////////////////////////////////////////////////////////////
void CSVdata::Display() 
{

    cout << "File contents:"<<endl;

    for (unsigned int i = 0; i < LineCount; i++) 
    {    
        cout << cell[i] << " , " << North[i] << " , " 
        << East[i] << " , " << Height[i] << endl;
    }

}

/////////////////////////////////////////////////////////////////////////////
void CSVdata::DetectBlocks() 
{
    setStringStart(0);
    setStringEnd(3);

    int startP = GetStringStart();
    int endP = GetStrinEnd();

    bool comparison = true;
    NumberOfBlocks = 1;

    
    // Assign the first Block heading: 
    BlockNames.push_back( cell[1].substr(startP,endP));

    for (unsigned long int i = 0; i < LineCount; i++ ) 
    {
        // Loop through every line in the document:    
        if ( cell[i].substr(startP,endP) != "RTC") 
        {

            for (unsigned long int j = 0; j < NumberOfBlocks; j++) 
            {
                
                // Loop through all of the current blocks names: 
                // Make a comparison between the current line 
                // and all of the current block names: 
                // If the current line and any of the block names match
                // then this name has been seen before so skip out of the loop
                // If you reach the end of all of the block names and the line hasnt 
                // matched then this is a new line: 
           

                if (cell[i].substr(startP,endP) == BlockNames[j]) 
                {
                    // The string has matched:


                    if (BlockNames.size() > rowNums.size()) 
                      {
                          // Another BLOCK has been added: 
                          rowNums.resize(BlockNames.size());
                          if (rowNums.size() > 1) { rowNums.back()++; }
         

                      }


                      rowNums[j]++;



                    
                     // Increments the 
                    comparison = false;                        
                }

                // Increment the number of blocks and add the first three letters 

            }

            if (comparison == true) 
            { 
                    // The value never matched, therefore 
                    // we have a new block:        
                    NumberOfBlocks++;
                    BlockNames.push_back(cell[i].substr(startP,endP));


             } 
             else 
             {
                comparison = true;
             }

        }
    }



    cout << "Number of Blocks Detected: " << NumberOfBlocks << endl;
    cout << "BLOCKNAMES and their respective Indicies: " << endl;
    cout << "INDEX  \t\t : \t\t BLOCKNAME \t\t : \t NUMBER OF ROWS" << endl;

    for (unsigned int k = 0; k < BlockNames.size(); k ++) 
    {
      cout << " " << k << "\t\t : \t\t " << BlockNames[k]<< " \t\t : \t\t " << rowNums[k] << endl;
    }

}


/////////////////////////////////////////////////////////////////////////////
void CSVdata::Format() 
{


    int startP = GetStringStart();
    int endP = GetStrinEnd();

    unsigned long int count = 0;

     
    if (BlockNames[1].empty()) 
    {
        cout << "Block names and numbers were not defined...." <<endl;
        DetectBlocks();
    }

      // Resize 3D vector to fit the amout ot data: 
    cout << GPSpoints.size() << endl;
    GPSpoints.resize(BlockNames.size());
    cout << GPSpoints.size() << endl;
    for (unsigned long int i = 0; i < BlockNames.size(); i++) 
    {
        GPSpoints[i].resize(rowNums[i]);
        for (int j = 0; j < rowNums[i]; j++) 
        {
            GPSpoints[i][j].resize(3,0);

                GPSpoints[i][j][0] = North[count];
                GPSpoints[i][j][1] = East[count];
                GPSpoints[i][j][2] = Height[count];
                count++;

                cout << "Block: " << BlockNames[i] << "     Row: " << j << "\t\t";
            for (int k = 0; k < 3; k++) 
              {  
                cout << GPSpoints[i][j][k] << " ";
              }     
              cout << endl;       
        }
    }

}

////////////////////////////////////////////////////////////

void CSVdata::PolygonAreaCompute() {

      BlockAreas.resize(BlockNames.size(), 0);
      long double tempArea = 0;
      unsigned long int k;


      for (unsigned int i = 0; i < BlockNames.size(); i++) 
      {
          // Loop through all of the Blocks: 
        k = rowNums[i] - 1;
        for (unsigned long int j = 0; j < (rowNums[i]-1); j++) 
        {
          // Loop through all of the Rows in the specific block: 

              // Compute the area and store in tempArea
        //                                (x1)                  (x2)                  (y2)                  (y1)
          tempArea = tempArea + ((GPSpoints[i][j][0] + GPSpoints[i][k][0]) * (GPSpoints[i][k][1] - GPSpoints[i][j][1]));

          //                            (x1)                (y2)                  (y1)                  (x2)
          //tempArea = tempArea + ((GPSpoints[i][j][0] * GPSpoints[i][k][1]) - (GPSpoints[i][j][1] * GPSpoints[i][k][0]));

          cout << "i = " << i << " temp area = " << ((GPSpoints[i][j][0] * GPSpoints[i][k][1]) - (GPSpoints[i][j][1] * GPSpoints[i][k][0])) << endl;


          k = j;


        }


        if (tempArea < 0 ) 
        { 
          tempArea = -1*tempArea; 
        }
        tempArea = tempArea/2; 
        BlockAreas[i] = tempArea;
        tempArea = 0;
        cout << "Area of Block: " << BlockNames[i] << " \t " << BlockAreas[i] << "m^2"
        << endl << "\t\t\t "<<" OR: " << (BlockAreas[i]/10000) << "Hectares" << endl;


      }

}


void CSVdata::SaveFormattedBlocks() 
{
  char appendfile;
  char appendAreaChar;
  bool appendArea = false;
  string appendstring;
  string FileName;
  unsigned int count = 0;
  string tempString;
  string PATH = "../Results/";

  if (GPSpoints.empty()) {
    cout << "Calling Format function:" << endl;
    Format();
  }
  // See if they would like to add any information to the file: 
  cout << "Would you like to append the File names with a description (i.e. Home Farm)? (Y/N)" <<endl;
  cin >> appendfile;
  if ((appendfile == 'y') || (appendfile == 'Y')) 
  {
    cout << "Please enter the string to appendfile: (All files stored in the results folder of this Project)"; 
    cin >> appendstring; 
    cout << endl;
  }

  cout << "Would you like to append the Block area as well in Both m^2 and Hectares? (Y/N)" << endl;
  cin >> appendAreaChar;
  if ((appendAreaChar == 'y') || (appendAreaChar == 'Y'))
  {
    appendArea = true;
  }
  // Create Block names: 
  for (unsigned int i = 0; i < BlockNames.size(); i++) 
  {
    shared_ptr <ofstream> out(new ofstream);
    if (appendstring.empty()) 
    { 
      FileName = PATH + BlockNames[i] + ".csv";
    } 
    else 
    {
      FileName = PATH+appendstring + "_" + BlockNames[i] + ".csv";
    }

    // ios::binary
    out->open(FileName.c_str(), ios::out | ios::app);

    FormattedBlocks.push_back(out);
    if (FormattedBlocks[i]->is_open()) 
    {
    (*FormattedBlocks[i]) << "Description "
                          << "," << "Northing/Lat" << "," 
                          << "Easting/Long" << "," << "Height" << "\r\n";

    for (unsigned int j = 0; j < rowNums[i]; j++) 
    {
      // save the row informations into a csv file<<
      (*FormattedBlocks[i]) <<  BlockNames[i] << "-" 
                            << count << "," 
                            << GPSpoints[i][j][0] << "," 
                            << GPSpoints[i][j][1] << "," 
                            << GPSpoints[i][j][2] << "\r\n";
      count++;
    }

    if (appendArea) 
    {
      (*FormattedBlocks[i]) << "Block Area: " << "," << "m^2:" << ","
      << BlockAreas[i] << endl << "," << "Hectares:" << "," << BlockAreas[1]/10000 << endl;
    }

    out->close();
    count = 0;

    }
    else 
    {
      cout << "Didn\'t work bro" << endl;
    }

  }











}




