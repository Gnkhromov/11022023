/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
#include <iostream>

using namespace std;

int main()
{
    int arr[10]= {75,69,3,22,11,3,5,9,752,545};
    int vrem = 0;
    for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9-i; j++)
            {
                if(arr[j] > arr[j+1])
                {
                    vrem =  arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = vrem;
                }
            }
        }
    
    for(int k = 0; k < 10; k++)
    {
        cout << arr[k] <<"\n";
    }
    return 0;

}