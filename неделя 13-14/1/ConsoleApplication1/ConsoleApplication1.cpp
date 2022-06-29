#include <iostream>
#include <array>
//f

void main()
{
	srand(0);

	std::array<int, 10> F;

	for (int i = 0; i < 10; i++)
		F.at(i) = rand() % 20;

	for (int i = 0; i < 10; i++)
		std::cout << F.at(i) << ' ';

}