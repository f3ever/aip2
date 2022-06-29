#include <iostream>
#include <array>
//14 b

int main()
{
    std::array <int, 10> M1, M2;

    for (int i = 0; i < 10; i++)
    {
        M1[i] = rand() % 201 - 100;
        std::cout << M1[i] << ' ';
    }

    std::cout << std::endl;

    for (int i = 0; i < 10; i++)
    {
        M2[i] = rand() % 201 - 100;
        std::cout << M2[i] << ' ';
    }

    std::cout << "\n\n";

    for (int i = 0; i < 10; i++)
    {
        M1[i] -= M2[i];
        std::cout << M1[i] << ' ';
    }

    return 0;
}