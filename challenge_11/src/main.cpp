#include <iostream>
#include <string>


void swap_first_char(std::string& a, std::string& b)
{
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
}


int main()
{
    std::string a, b;
    std::getline(std::cin, a);
    std::getline(std::cin, b);

    std::cout << a.size() << ' ' << b.size() << std::endl;
    std::cout << a + b << std::endl;

    swap_first_char(a, b);
    std::cout << a << ' ' << b << std::endl;
    return 0;
}
