#include <iostream>
#include <array>

int main()
{
    int normal_array[3]{1, 2, 3};

    // std::array<int,4> std_array = {1,2,3,4};
    std::array<int, 4> stl_array{1, 2, 3, 4};

    int size = stl_array.size();

    for (int i = 0; i < size; i++)
    {
        std::cout << stl_array[i] << std::endl;
    }

    std::cout << "Element at 2nd index :" << stl_array.at(2) << std::endl;
    std::cout << "Empty or not : " << std::boolalpha << stl_array.empty() << std::endl;

    std::cout << "First element : " << stl_array.front() << std::endl;
    std::cout << "Last element : " << stl_array.back() << std::endl;
}