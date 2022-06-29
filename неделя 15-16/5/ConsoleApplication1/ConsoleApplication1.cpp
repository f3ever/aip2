#include <iostream>
#include <array>
//10

void addition(std::array <std::array<int, 3>, 3> M1, std::array <std::array<int, 3>, 3> M2, std::array <std::array<int, 3>, 3>& MAdd)
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            MAdd[i][j] = M1[i][j] + M2[i][j];
}

void subtraction(std::array <std::array<int, 3>, 3> M1, std::array <std::array<int, 3>, 3> M2, std::array <std::array<int, 3>, 3>& MSub)
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            MSub[i][j] = M1[i][j] - M2[i][j];
}

void multiplication(std::array <std::array<int, 3>, 3> M1, std::array <std::array<int, 3>, 3> M2, std::array <std::array<int, 3>, 3>& MMul)
{
    for (int i = 0; i < 3; i++)
        for (int j = 0, sum; j < 3; j++)
        {
            sum = 0;

            for (int k = 0; k < 3; k++)
                sum += M1[i][k] * M2[k][j];

            MMul[i][j] = sum;
        }
}

void transposition(std::array <std::array<int, 3>, 3> M1, std::array <std::array<int, 3>, 3>& MTran)
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            MTran[i][j] = M1[j][i];
}

void outputMatrix(std::array <std::array<int, 3>, 3> Matrix)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            std::cout << Matrix[i][j] << ' ';

        std::cout << std::endl;
    }

    std::cout << std::endl;
}

int main()
{
    
    std::array <std::array<int, 3>, 3> M1, M2, M3;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            M1[i][j] = rand() % 201 - 100;
            M2[i][j] = rand() % 201 - 100;
        }

    std::cout << "matrix 1: \n" << std::endl;

    outputMatrix(M1);

    std::cout << "matrix 2: \n" << std::endl;

    outputMatrix(M2);

    std::cout << "matrix summation: \n" << std::endl;

    addition(M1, M2, M3);
    outputMatrix(M3);

    std::cout << "matrix subtraction: \n" << std::endl;

    subtraction(M1, M2, M3);
    outputMatrix(M3);

    std::cout << "matrix multiplication: \n" << std::endl;

    multiplication(M1, M2, M3);
    outputMatrix(M3);

    std::cout << "transposing the first matrix: \n" << std::endl;

    transposition(M1, M3);
    outputMatrix(M3);

    getchar();

    return 0;
}