#include <iostream>
using namespace std;
/*
15. Сделать калькулятор. Формат ввода: Операция Ч1 Ч2.
*/
int main()
{
    float n1, n2;
    char sig;

    cout << "Калькулятор Формат ввода Ч1 <действие> Ч2:" << endl;
    cin >> n1 >> sig >> n2;

    switch (sig)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;
    default:
        cout << "ошипка, неверное действие." << endl;
    }

    return 0;
}