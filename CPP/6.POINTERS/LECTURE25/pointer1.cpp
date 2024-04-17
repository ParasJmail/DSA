#include <iostream>

int main()
{

    int num = 5;

    std::cout << num << std::endl;

    // Address of operator -> &

    std::cout << "address of num : " << &num << std::endl;

    // Pointer
    int *ptr = &num;

    std::cout << "value is *ptr : " << *ptr << std::endl;
    std::cout << "value is ptr : " << ptr << std::endl;

    double d = 4.2;
    double *dptr = &d;

    std::cout << "value is *dptr : " << *dptr << std::endl;
    std::cout << "value is dptr : " << dptr << std::endl;

    std::cout << "size of int : " << sizeof(num) << std::endl;
    std::cout << "size of pointer : " << sizeof(ptr) << std::endl;
}