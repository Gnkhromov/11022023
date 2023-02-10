#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double d;
    cout<<"квадратное уравнение имеет вид: ax^2+bx+c=0\n";
    cout<<"Введите коэффицент a\n";
    cin >> a;
    cout<<"Введите коэффицент b\n";
    cin >> b;
    cout<<"Введите коэффицент c\n";
    cin >> c;
    d=(b*b)-(4*a*c);
    if(d == 0)
    {
        int x0 = (b*(-1))/(2*a);
        cout << "корень только один\n" << x0;
    }
    else if(d > 0)
    {
        int x1 = ((b*(-1))- (sqrt(d)))/(2*a);
        cout << "корень номер один\n" << x1;
        int x2 = ((b*(-1))+ (sqrt(d)))/(2*a);
        cout << "корень номер два\n" << x2;
    }
    else
    {
        cout << "Действительных корней нет";
    }
    return 0;
}