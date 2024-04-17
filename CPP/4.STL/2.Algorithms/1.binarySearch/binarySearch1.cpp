#include <iostream>
#include <algorithm>
#include <vector>

int main()
{

    std::vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    std::cout << "checking if 6 is present or not : " << std::binary_search(v.begin(), v.end(), 6) << std::endl;

    std::cout << "lower bound : " << std::lower_bound(v.begin(), v.end(), 6) - v.begin() << std::endl;
    std::cout << "upper bound : " << std::upper_bound(v.begin(), v.end(), 6) - v.begin() << std::endl;

    int a = 3;
    int b = 5;

    std::cout << "max : " << std::max(a, b) << std::endl;
    std::cout << "min : " << std::min(a, b) << std::endl;

    std::swap(a, b);

    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    std::string abcd = "abcd";

    std::reverse(abcd.begin(), abcd.end());

    std::cout << "abcd : " << abcd << std::endl;

    std::rotate(v.begin(), v.begin() + 1, v.end());

    std::cout << "after rotate : ";

    for (auto i : v)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    std::sort(v.begin(), v.end());

    std::cout << "after sorting : ";

    for (auto i : v)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
}