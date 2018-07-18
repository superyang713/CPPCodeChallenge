/*
* Complete the function solveMeFirst to compute the sum of two integers.
*
* Function prototype:
*    int solveMeFirst(int x, int y);
* where,
*    x is the first integer input.
*    y is the second integer input
* Return values
*    sum of the above two integers
*/

#include <iostream>


int solveMeFirst(int x, int y)
{
    return x + y;
}

int main()
{
    int num1, num2;
    int sum;
    std::cin >> num1 >> num2;
    sum = solveMeFirst(num1, num2);
    std::cout << sum << std::endl;
    return 0;
}
