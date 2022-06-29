#include <iostream>
using namespace std;
//F
int main()
{
    int x;

    cout << "enter x : ";
    cin >> x;
    cout << "y = ";

    if (x > 5)
    {
        cout << 2 * pow(x, 2) + 10 << endl;
    }
    else if (x < 5)
    {
        cout << 2 * abs(x + 6) - pow(x, 2) << endl;
    }
    else if (x == 0)
    {
        cout << 0 << endl;
    }

    return 0;
}