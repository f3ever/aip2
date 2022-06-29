#include <iostream>
//7

void ShiftLeft3(float& A,float& B,float& C)
{
    float Buf = A;
    A = B;
    B = C;
    C = Buf;
}

int main()
{
    float A, B, C;

    std::cin >> A >> B >> C;

    ShiftLeft3(A, B, C);

    std::cout << "A = " << A << "\nB = " << B << "\nC = " << C << std::endl;
}