#include <iostream>
#include <cmath>


void update(int* a, int* b)
{
    int temp = *a;
    *a = *b + temp;
    *b = abs(*b - temp);
}

int main()
{
    int a, b;
    int* pa = &a;
    int* pb = &b;
    std::cin >> a >> b;
    update(pa, pb);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return 0;
}

