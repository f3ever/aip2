#include <iostream>
#include <cmath>
//3 j

int main()
{
	int N, X, y;

	std::cin >> N >> X;

	y = X;

	for (int i = 2; i <= N; i++)
		y += pow(X, i) / (i + 1);

	std::cout << "y = " << y << std::endl;
}