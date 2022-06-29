#include <iostream>
//f

struct num
{
    int material, 
        imaginary;
};

void Fun(int i1, int i2)
{
    if (i1 > i2)
        std::cout << "Num1 material > Num2 material" << std::endl;
    else
        std::cout << "Num1 material < Num2 material" << std::endl;
}

int main()
{
    num N1, N2;

    std::cout << "Enter Num1 material namber: ";
    std::cin >> N1.material;

    std::cout << "Enter Num1 imaginary namber: ";
    std::cin >> N1.imaginary;

    std::cout << "Enter Num2 material namber: ";
    std::cin >> N2.material;

    std::cout << "Enter Num2 imaginary namber: ";
    std::cin >> N2.imaginary;

    Fun(N1.material, N2.material);

}