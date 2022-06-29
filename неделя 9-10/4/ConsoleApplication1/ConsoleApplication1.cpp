#include <iostream>
//4

void Swap(float& X, float& Y)
{
    float Buf = Y;
    Y = X;
    X = Buf;
}

int main()
{
    srand(0);

    float A = rand() % 100, 
          B = rand() % 100, 
          C = rand() % 100, 
          D = rand() % 100;

    std::cout << "A = " << A << "\nB = " << B << "\nC = " << C << "\nD = " << D << "\n\n";

    Swap(A, B);
    Swap(C, D);
    Swap(B, C);

    std::cout << "A = " << A << "\nB = " << B << "\nC = " << C << "\nD = " << D << std::endl;
}