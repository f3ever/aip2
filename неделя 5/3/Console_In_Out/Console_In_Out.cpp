#include <iostream>
using namespace std;
//I
int main()
{
    int x;

    cout << "enter x : ";
    cin >> x;
    cout << "y = ";

    if (x > 7) 
        cout << 2 * pow(x, 2) - 10;
    else if (x < 7) 
        cout << 2 * abs(x) + 3;
    else cout << 0;

    cout << endl;

    return 0;
}