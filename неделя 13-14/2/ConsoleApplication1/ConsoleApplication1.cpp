#include <iostream>
#include <array>
//c

int main()
{
    srand(8);

    std::array<int, 10> M;

    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        M[i] = rand() % 10;
        std::cout << M[i] << ' ';
    }

    std::cout << std::endl;

    for (int i = 0; i < 10; i++)
        if (M.at(i) < 5)
            sum += M.at(i);

    std::cout << "sum < 5 = " << sum << std::endl;

    sum = 0;

    for (int i = 0; i < 10; i++)
        if (M.at(i) > 6)
            sum += M.at(i);

    std::cout << "sum > 6 = " << sum << std::endl;

    sum = 0;

    for (int i = 0; i < 10; i++)
        if (M.at(i) < 4)
            sum += M.at(i);

    std::cout << "sum < 4 = " << sum;
}