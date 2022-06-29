#include <string>
#include <iostream>
#include <array>
//20 a, b, c

struct people
{
	std::string surname;
	int age;
	int height;
};

int main()
{
	srand(0);

	const int N = 10;

	std::array<people, 10> M;

	for (int i = 0; i < N; i++)
	{
		M[i].age = rand() % 18 + 7;
		M[i].height = rand() % 60 + 120;
		M[i].surname = "name";
	}

	//a
	int maxLength = M[0].height;

	for (int i = 1; i < N; i++)
		if (maxLength < M[i].height)
			maxLength = M[i].height;

	std::cout << "The surname of the tallest: " << maxLength << "\n\n";

	//b
	int average = 0;

	for (int i = 1; i < N; i++)
		average += M[i].age;

	average /= N;

	std::cout << "surnames and ages that are above average: \n";

	for (int i = 1; i < N; i++)
		if (M[i].age > average)
			std::cout << '\n' << M[i].surname << '\t' << M[i].age << std::endl;

	std::cout << std::endl;

	//c
	int averageAge = 0, averageHeing = 0;

	for (int i = 1; i < N; i++)
	{
		averageAge += M[i].age;
		averageHeing += M[i].height;
	}

	averageAge /= N;
	averageHeing /= N;

	std::cout << "information about those whose age is below average and height is above average in the section.: \n";

	for (int i = 1; i < N; i++)
		if (M[i].age < averageAge && M[i].height > averageHeing)
			std::cout << '\n' << M[i].surname << '\t' << M[i].age << '\t' << M[i].height << std::endl;

	return 0;
}