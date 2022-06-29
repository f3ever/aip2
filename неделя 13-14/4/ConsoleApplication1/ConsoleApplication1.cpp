#include <iostream>
#include <array>
//7

int main()
{
    std::array <int, 10> M;

    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        M[i] = rand() % 201 - 100;
        std::cout << M[i] << ' ';
    }

    std::cout << std::endl;

    for (int i = 0; i < 10; i++)
        sum += M[i];

    std::cout << "arithmetic averages : " <<  sum / 10 << std::endl;

}