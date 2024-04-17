#include <iostream>

int main()
{
    // Pointer to int is created , pointing to some garbage value
    // int* p;

    // Segmentation fault
    //  int *p = 0;

    int i = 5;

    // int* p = &i;

    int *p = 0;
    p = &i;

    std::cout << *p << std::endl;

    int num = 5;
    int a = num;

    a++;

    std::cout << num << std::endl;

    int *ptr = &num;

    std::cout << "before : " << num << std::endl;
    (*ptr)++;
    std::cout << "after : " << num << std::endl;

    // Copying a pointer
    int *q = ptr;

    std::cout << "q : " << q << std::endl;
    std::cout << "*q : " << *q << std::endl;
    std::cout << "ptr : " << ptr << std::endl;
    std::cout << "*ptr : " << *ptr << std::endl;

    // Important concept
    int it = 3;
    int *t = &it;
    std::cout << (*t)++ << std::endl;

    std::cout << "before : " << t << std::endl;
    t = t + 1;
    std::cout << "after : " << t << std::endl;
}