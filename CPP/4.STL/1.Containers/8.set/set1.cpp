#include <iostream>
#include <set>

int main()
{

    std::set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    for (auto i : s)
    {
        std::cout << i << std::endl;
    }

    std::cout << std::endl;

    std::set<int>::iterator it = s.begin();

    it++;

    s.erase(it);

    for (auto i : s)
    {
        std::cout << i << std::endl;
    }

    std::cout << std::endl;

    std::cout << "5 is present or not : " << s.count(5) << std::endl;
    std::cout << "4 is present or not : " << s.count(4) << std::endl;

    std::set<int>::iterator itr = s.find(5);

    std::cout << "Value present at itr : " << *it << std::endl;

    for (auto it = itr; it != s.end(); it++)
    {
        std::cout << *it << " ";
    }

    std::cout << std::endl;
}