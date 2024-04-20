#include <iostream>

int main()
{
    int i{5};

    int *ptr1{&i};

    int **ptr2{&ptr1};
}
