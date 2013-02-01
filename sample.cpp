/*#include <iostream>

using namespace std;

void ShellSort(int x[]);

int main ()
{
    int num [6] = {84, 69, 76, 86, 94, 91};
    int x = 0;

    ShellSort(num);

}

void ShellSort(int x[])
{
     int i, temp, g , flag = 1, numLength = 6;
     int d = numLength;
     while( flag || (d > 1))      // boolean flag (true when not equal to 0)
     {
          flag = 0;           // reset flag to 0 to check for future swaps
          d = (d+1) / 2;
          for (i = 0; i < (numLength+d); i++)
        {
               if (x[i + d] < x[i])
              {
                      temp = x[i + d];      // swap positions i+d and i
                      x[i + d] = x[i];
                      x[i] = temp;
                      flag = 1;
                // tells swap has occurred
              }
        }
     }
     for (g=0;g<6;g++)
     {
         cout << x[g] << endl;
     }

}*/
