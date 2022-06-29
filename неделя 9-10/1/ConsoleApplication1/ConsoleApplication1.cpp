#include <iostream>
#include <cmath>
//1   взято из 4 недели 7 задание

float Fun(int X, int N)
{
    float y = X;

    for (int i = 2; i <= N; i++)
        y += pow(X, i) / (i + 1);

    return y;
}

int main()
{
    int N, X;

    std::cin >> N >> X;

    std::cout << "y = " << Fun(X, N) << std::endl;
    
    return 0;
}