#include <iostream>
#include <ranges>

// test program to ensure successfull c++ 20 setup and gcc setup
int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    for (int i = 0; i < numbers.size(); i++)
    {
        std::cout << numbers[i] << " ";
    }
    return 0;
}
