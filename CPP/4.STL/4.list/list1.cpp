#include <iostream>
#include <list>

int main()
{
    std::list<int> p(5, 100);

    std::cout << "p : ";

    for (int i : p)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    std::list<int> l;

    l.push_back(1);
    l.push_front(2);

    std::list<int> n(l);

    std::cout << "l : ";

    for (int i : l)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    std::cout << "n : ";

    for (int i : n)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    std::cout << "Before Erase" << std::endl;

    for (int i : l)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    l.erase(l.begin());

    std::cout << "After Erase" << std::endl;

    for (int i : l)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    std::cout << "Size Of List : " << l.size() << std::endl;
}