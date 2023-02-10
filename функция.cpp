#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x,y;
    cout << "Введите x";
    cin >> x;
    cout << "Введите y";
    cin >> y;
    double f = (sqrt(((2+y)*(2+y))+pow((sin(y+5)),(1/7))))/(log((x+1)-y*y*y));
    cout << f;
}
