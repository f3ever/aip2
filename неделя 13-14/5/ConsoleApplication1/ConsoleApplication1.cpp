#include <iostream>
#include <array>
//11

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

    sum /= 10;

    std::cout << "less than the arithmetic mean : ";

    for (int i = 0; i < 10; i++)
        if (M[i] < sum)
            std::cout << M[i] << ' ';

    std::cout << std::endl;

    return 0;
}