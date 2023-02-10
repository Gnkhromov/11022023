#include <iostream>
 
using namespace std;
 
int main()
{
    int a, b, c;
    cout << "Все пифагоровы числа, меньше 1000:" << endl;
    for (int c = 1; c < 1000; c++)
    {
        for (int b = 1; b < 1000; b++)
        {
            for (int a = 1; a < 1000; a++)
            {
                if (a*a + b*b == c*c)
                    {
                        cout << a << " ";
                        cout << b << " ";
                        cout << c << " ";
                        cout << "\n";
                    }
            }
        }
    }
    return 0;
}