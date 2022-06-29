#include <iostream>
using namespace std;
//e
int main()
{
    float x, y;

    cout << "Enter x : ";
    cin >> x;

    cout << "Enter y : ";
    cin >> y;

    bool l = (((x * x) + (y * y)) < 1);

    if (l && (y >= x*(-1)) || (y <= x && x >= 0)) cout << "Hit" << endl;
    else cout << "Mis" << endl;

    return 0;
}