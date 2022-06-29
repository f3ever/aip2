#include <iostream>
//3 f

int main()
{
	int N, X, y = 0;

	std::cin >> N >> X;

	for (int i = 1; i <= N; i++)
		if (i % 2 == 0)
			y += -i * X;
		else 
			y += i * X; 

	std::cout << "y = " << y << std::endl;
}