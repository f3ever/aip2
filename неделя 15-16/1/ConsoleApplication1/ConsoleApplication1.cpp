#include <iostream>
#include <array>
//3

void outputMatrix(std::array <std::array<int, 10>, 10> Matrix)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			std::cout << Matrix[i][j] << ' ';

		std::cout << std::endl;
	}

	std::cout << std::endl;
}

void main()
{
	srand(0);

	std::array<std::array<int, 10>, 10> M;

	int sum = 0;

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			M[i][j] = rand() % 200 - 100;

	outputMatrix(M);

	for (int i = 0; i < 10; i++)
		if (M[i][i] < 0)
			sum += M[i][i];

	std::cout << "\nsum = " << sum << std::endl;
}