#include <iostream>
#include <random>

void random_number(int arr[], int i = 0)
{
    int num = rand() % 10;
    if (i == 4)
    {
        return;
    }
    if (i == 0 && num == 0)
    {
        random_number(arr, i);
    }
    for (int j = 0; j < i; ++j)
    {
        if (arr[j] == num)
        {
            random_number(arr, i);
        }
    }
    arr[i] = num;
    random_number(arr, ++i);
}


int main()
{
    bool sort = true;

    if (sort)
    {
        std::cout << "FALSE";
    }
}
