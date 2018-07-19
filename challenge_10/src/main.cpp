#include <iostream>
#include <sstream>
#include <vector>
#include <string>


std::vector<int> ParseInts(std::string str)
{
    std::stringstream ss(str);
    std::vector<int> row;
    std::string CellString;

    while (std::getline(ss, CellString, ',')) {
        std::stringstream to_int(CellString);
        int cell;
        to_int >> cell;
        row.push_back(cell);
    }
    return row;
}

int main()
{
    std::string str;
    std::cin >> str;
    std::vector<int> integers = ParseInts(str);
    for(unsigned int i = 0; i < integers.size(); i++)
    {
        std::cout << integers[i] << "\n";
    }

    return 0;
}
