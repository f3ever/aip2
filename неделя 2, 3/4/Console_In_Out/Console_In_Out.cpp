#include <iostream>
//Вычислите значение выражения: f
int main()
{
    float a = 0.1, b = 0.2, x = 1;

    std::cout << sqrt((x * x + b) - abs(b * b * pow(sin(x + a) , 3)) / x) << std::endl;
    
    return 0;
}