#include <iostream>
#include <array>
//12

void outputMatrix(std::array <std::array<int, 5>, 5> Matrix)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            std::cout << Matrix[i][j] << ' ';

        std::cout << std::endl;
    }

    std::cout << std::endl;
}

int main()
{
    srand(0);

    std::array <std::array<int, 5>, 5> M;

    int sum = 0;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            M[i][j] = rand() % 2;

    outputMatrix(M);

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (M[i][j] == 1)
                sum++;

    std::cout << "sum with black dots: " << sum << std::endl;

    getchar();

    return 0;
}