#include <iostream>
//j

void tabul(int step, int start, int end)
{
    for (int x = start; x <= end;x += step)
        if (x < 5)
            std::cout << 2 * abs(x - 2) + 5 << '\t';
        else if (x > 5)
            std::cout << 3 * x - 5 << '\t';
        else
            std::cout << 10 << '\t';
}

int main()
{
    int step, start, end;

    std::cout << "Enter step: ";
    std::cin >> step;

    std::cout << "Enter start: ";
    std::cin >> start;

    std::cout << "Enter end: ";
    std::cin >> end;

    tabul(step, start, end);
}