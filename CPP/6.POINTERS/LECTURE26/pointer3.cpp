#include <iostream>

int main()
{
    int arr[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << "address of 1st memory block is : " << arr << std::endl;
    std::cout << "address of 1st memory block is : " << &arr[0] << std::endl;

    std::cout << "0th : " << *arr << std::endl;
    std::cout << "4th : " << *arr + 1 << std::endl;
    std::cout << "4th : " << *(arr + 1) << std::endl;
}