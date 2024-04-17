#include <iostream>
#include <deque>

int main()
{
    std::deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    // d.pop_back();

    // for (int i : d)
    // {
    //     std::cout << i << " ";
    // }

    // std::cout << std::endl;

    std::cout << "Print First Index Element : " << d.at(1) << std::endl;
    std::cout << "Print Zeroth Index Element : " << d.at(0) << std::endl;

    std::cout << "Front : " << d.front() << std::endl;
    std::cout << "Back : " << d.back() << std::endl;

    std::cout << "Empty or not : " << std::boolalpha << d.empty() << std::endl;

    std::cout << "before erase : " << d.size() << std::endl;
    for (int i : d)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    d.erase(d.begin(), d.begin() + 1);

    std::cout << "after erase : " << d.size() << std::endl;
    for (int i : d)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}