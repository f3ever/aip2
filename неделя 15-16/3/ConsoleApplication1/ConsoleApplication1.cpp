#include <iostream>
#include <array>
//8

void outputMatrix(std::array <std::array<int, 3>, 2> Matrix)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			std::cout << Matrix[i][j] << ' ';

		std::cout << std::endl;
	}

	std::cout << std::endl;
}

int main()
{
	srand(0);

	std::array<std::array<int, 3>, 2> M;

	for (int i = 0; i < 3; i++)
		M[0][i] = rand() % 101;

	for (int i = 0; i < 3; i++)
		M[1][i] = rand() % 3 + 1;

	outputMatrix(M);

	int max = M[0][0];

	for (int i = 1; i < 3; i++)
		if (M[1][i] == 3 && max < M[0][i])
			max = M[0][i];

	std::cout << "the most powerful engine with power : " << max << std::endl;
}