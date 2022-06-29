#include <iostream>
#include <array>
//8

int main()
{
    std::array <int, 10> M;

    int sumP = 0, sumN = 0;

    for (int i = 0; i < 10; i++)
    {
        M[i] = rand() % 201 - 100;
        std::cout << M[i] << ' ';
    }

    std::cout << std::endl;

    for (int i = 0; i < 10; i++)
        if (M[i] >= 0)
            sumP += M[i];
        else
            sumN += M[i];

    std::cout << "Positive namber : " << sumP << std::endl;

    std::cout << "Negative namber : " << sumN << std::endl;

    return 0;
}