#include <iostream>


int* CreateArray(int n)
{
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    return arr;
}


int main()
{
    int n;
    std::cin >> n;

    int* arr = CreateArray(n);
    for (int i = n - 1; i >= 0; i--)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}
