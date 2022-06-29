#include <iostream>
//10

int main()
{

    for (int x = 0;x < 100;x++)
        for (int y = 0;y < 100;y++)
            for (int z = 0;z < 100;z++)
                if (15 * x + 20 * y + 30 * z == 270)
                {
                    std::cout << "x = " << x << "\ny = " << y << "\nz = " << z << std::endl;
                    return 0;
                }
}