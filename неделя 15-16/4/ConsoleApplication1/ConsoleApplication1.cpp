#include <iostream>
#include <array>
//9 a

struct pix
{
    float R,
          G,
          B;
};

void outputMatrix(std::array <std::array<pix, 3>, 3> Scrin)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            std::cout << Scrin[i][j].R << ' ' << Scrin[i][j].G << ' ' << Scrin[i][j].B << '|';

        std::cout << std::endl;
    }

    std::cout << std::endl;
}


int main()
{
    std::array<std::array<pix, 3>, 3> M;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            std::cout << "red = ";
            std::cin >> M[i][j].R;

            std::cout << "green = ";
            std::cin >> M[i][j].G;

            std::cout << "blue = ";
            std::cin >> M[i][j].B;
        }

    outputMatrix(M);

    return 0;
}