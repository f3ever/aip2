#include <iostream>
//6

struct dath
{
    int min,
        max,
        inaccuracy,
        maxSpped;
};

int main()
{
    srand(0);

    dath D[10];

    for (int i = 0; i < 10; i++)
    {
        D[i].max = rand() % 101 + 50;
        D[i].min = rand() % 101 - 50;
        D[i].inaccuracy = rand() % 10;
        D[i].maxSpped = rand() % 100;
    }

    dath theBest = D[0];

    for (int i = 1; i < 10; i++)
        if (theBest.inaccuracy > D[i].inaccuracy)
            theBest = D[i];
    
    std::cout << "min = " << theBest.min << "\nmax = " << theBest.max << "\ninaccuracy = " 
              << theBest.inaccuracy << "\nmaxSpped = " << theBest.maxSpped << std::endl;

}