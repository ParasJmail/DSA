#include <iostream>
#include <map>

int main()
{

    std::map<int, std::string> m;

    m[1] = "Paras";
    m[2] = "Narendra";
    m[13] = "Jaitly";

    m.insert({5, "new"});

    for (auto i : m)
    {
        std::cout << i.first << " " << i.second << std::endl;
    }

    std::cout << "before erase : ";
    for (auto i : m)
    {
        std::cout << i.first << " " << i.second << std::endl;
    }

    std::cout << "finding 13 : " << m.count(13) << std::endl;

    m.erase(13);

    std::cout << "after erase : ";
    for (auto i : m)
    {
        std::cout << i.first << " " << i.second << std::endl;
    }

    std::cout << std::endl;
    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        std::cout << (*i).first << std::endl;
    }
}