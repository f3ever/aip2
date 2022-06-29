#include <iostream>
using namespace std;
/*
Пользователь вводит параметры фигуры. Найти периметр и площадь фигур:
f. Правильный восьмиугольник
*/
int main()
{
    float r1, r2;

    cout << "Enter R1: ";
    cin >> r1;

    cout << "Enter R2: ";
    cin >> r2;

    cout << "S = " << 0.25 * 3.14 * pow((r1 + r2), 2)
         << "\nP = " << 2 * 3.14 * r2 << endl;
    return 0;
}