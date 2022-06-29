#include <iostream>
using namespace std;
/*
4. Пользователь вводит два числа. Необходимо поменять значения переменных так,
чтобы значение первой оказалось во второй, а второй - в первой.
*/
int main()
{
    int a, b, buf;
    
    cout << "Enter a : ";
    cin >> a;

    cout << "Enter b : ";
    cin >> b;

    buf = a;
    a = b;
    b = buf;

    cout << "\na = " << a
         << "\nb = " << b << endl;

    return 0;
}