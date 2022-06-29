#include <iostream>
#define pi 3.141
using namespace std;
/*
Сделать конвертер величин.Формат ввода : Направление_Перевода Величина.
f. Давление (паскаль, бар, фунт на квадратный дюйм
*/
int main()
{   
    int nap, x;

    cout << "Введите напровление\n1)перевод в бар\n2)перевод в паскаль\n3)перевод в фунт" << endl;
    cin >> nap;

    cout << "Введите чесло в атмосферах: ";
    cin >> x;

    cout << "Результат Перевода: ";

    switch (nap)
    {
    case 1:
        cout << x * 1.013 << endl;
        break;
    case 2:
        cout << x * 101325 << endl;
        break;
    case 3:
        cout << x * 14.696 << endl;
        break;
    default:
        cout << "Неверное напровление перевода";
    }
    
    return 0;
}