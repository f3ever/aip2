#include <iostream>
#include <array>
//5

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

int main()
{
	srand(0);

	std::array<std::array<int, 10>, 10> M;

	int buf = 0, min;

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			M[i][j] = rand() % 200 - 100;

	outputMatrix(M);

	for (int i = 0, num = 0; i < 10; i++)
	{
		min = M[i][1];

		for (int j = 1; j < 10; j++)
			if (min > M[i][j])
			{
				min = M[i][j];
				num = j;
			}
		buf = M[i][i];
		M[i][i] = min;
		M[i][num] = buf;
	}

	outputMatrix(M);
}