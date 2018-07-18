#include <iostream>


int main()
{
    int n;
    std::cin >> n;
    if (n <= 9 && n >= 1)
    {
        switch (n)
        {
            case 1:
                std::cout << "one" << std::endl;
                break;
            case 2:
                std::cout << "two" << std::endl;
                break;
            case 3:
                std::cout << "three" << std::endl;
                break;
            case 4:
                std::cout << "four" << std::endl;
                break;
            case 5:
                std::cout << "five" << std::endl;
                break;
            case 6:
                std::cout << "six" << std::endl;
                break;
            case 7:
                std::cout << "seven" << std::endl;
                break;
            case 8:
                std::cout << "eight" << std::endl;
                break;
            default:
                std::cout << "nine" << std::endl;
        }
    }
    else
    {
        std::cout << "Greater than " << 9 << std::endl;
    }
    return 0;
}
