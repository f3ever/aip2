#include <iostream>
//12

bool IsPower5(int K)
{
    if (K % 5 == 0)
        return true;
    else
        return false;
}

int main()
{
    srand(5);

    //по условию задачи нобор из 10 чисил находим по условию

    for (int i = 0; i < 10; i++)
        std::cout << IsPower5(rand() % 99) << '\n';
    
}