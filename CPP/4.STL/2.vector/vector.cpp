#include <iostream>
#include <vector>

int main()
{

    std::vector<int> v;

    std::vector<int> a(5, 1);
    std::vector<int> last(a);

    for (int i : last)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    std::cout << "Capacity : " << v.capacity() << std::endl;
    std::cout << "Size : " << v.capacity() << std::endl;

    std::cout << std::endl;

    v.push_back(1);
    std::cout << "Capacity : " << v.capacity() << std::endl;
    std::cout << "Size : " << v.capacity() << std::endl;

    std::cout << std::endl;

    v.push_back(2);
    std::cout << "Capacity : " << v.capacity() << std::endl;
    std::cout << "Size : " << v.size() << std::endl;

    std::cout << std::endl;

    v.push_back(3);
    std::cout << "Capacity : " << v.capacity() << std::endl;
    std::cout << "Size : " << v.size() << std::endl;

    std::cout << std::endl;

    v.push_back(4);
    std::cout << "Capacity : " << v.capacity() << std::endl;
    std::cout << "Size : " << v.size() << std::endl;

    std::cout << std::endl;

    v.push_back(5);
    std::cout << "Capacity : " << v.capacity() << std::endl;
    std::cout << "Size : " << v.size() << std::endl;

    std::cout << "Element at 2nd index :" << v.at(2) << std::endl;

    std::cout << "First element : " << v.front() << std::endl;
    std::cout << "Last element : " << v.back() << std::endl;

    std::cout << std::endl;

    std::cout << "Before Pop" << std::endl;

    for (int i : v)
    {
        std::cout << i << " ";
    }

    v.pop_back();

    std::cout << std::endl;

    std::cout << "After Pop" << std::endl;

    for (int i : v)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    std::cout << "Before Clear Size" << v.size() << std::endl;

    v.clear();

    std::cout << "After Clear Size" << v.size() << std::endl;
}