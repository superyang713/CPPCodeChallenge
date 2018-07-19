#include <iostream>


struct Query {
    int i;
    int j;
};


int* CreateArray(int n)
{
    int* arr  = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    return arr;
}


void DisplayQueryResult(int* arr[], Query query[], int total)
{
    for (int n = 0; n < total; n++)
    {
        std::cout << arr[query[n].i][query[n].j] << std::endl;
    }
}


int main()
{
    int NumberOfRow, NumberOfCol, TotalQueries;
    std::cin >> NumberOfRow >> TotalQueries;

    int* arr[NumberOfRow];
    for (int n = 0; n < NumberOfRow; n++)
    {
        std::cin >> NumberOfCol;
        arr[n] = CreateArray(NumberOfCol);
    }

    Query queries[TotalQueries];
    for (int n = 0; n < TotalQueries; n++)
    {
        std::cin >> queries[n].i >> queries[n].j;
    }

    DisplayQueryResult(arr, queries, TotalQueries);

    return 0;
}
