#include <iostream>
using namespace std;
//E
int main()
{
    float x, y;

    cout << "Enter x : ";
    cin >> x;

    cout << "Enter y : ";
    cin >> y;

    bool arg1 = y < exp(x);

    bool arg2 = y < exp(x * (-1));

    bool arg3 = y > x * x;

    if (arg1 && arg2 && arg3) cout << "Hit" << endl;
    else cout << "Mis" << endl;

    return 0;
}