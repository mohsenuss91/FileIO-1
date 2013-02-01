#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void sortArray(int x[]);

int main()
{
    int x=0, n=0,largestNum=0;
    int numbers[10000];
    string line;
    ifstream myfile; //Declaration
    myfile.open("data10k.txt"); //File name

    while (myfile.good()){

    getline(myfile, line);
    stringstream (line) >> numbers[x];
   if (x<10000)
    {
        x++;
    }


    }

    sortArray(numbers);

    myfile.close();

    return 0;
}

void sortArray(int x[])
{
    int i, temp,n ,flag = 1, numLength = 10000;
    int d = numLength;
    while( flag || (d > 1))
     {
          flag = 0;
          d = (d+1) / 2;
          for (i = 0; i < (numLength-d); i++)
        {
               if (x[i + d] < x[i])
              {
                      temp = x[i + d];
                      x[i + d] = x[i];
                      x[i] = temp;
                      flag = 1;
              }
        }
     }
     for (n=0;n<10000;n++)
    {
        cout << x[n] << endl;
    }
}

