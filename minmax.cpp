#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>

using namespace std;

int main()
 {
ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail())
  {
      cerr << "File cannot be opened for reading." << endl;
      exit(1); // exit if failed to open the file
  }

string junk;        // new string variable
getline(fin, junk); // read one line from the file

string date;
double eastSt, eastEl, westSt, westEl;

double min = 10000;
double lastmin = 10000;
double max = 0;
double lastmax = 0;



while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
{
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration

    fin.ignore(INT_MAX, '\n'); //skips to the end of line,
                          //ignorring the remaining columns
                          while(eastSt < min)
                                {min = eastSt;}

                          while(eastSt > max)
                                {max = eastSt;}

}
cout <<  "The min is: " << min << endl;
cout << "The max is: " << max << endl;
fin.close();

 }
