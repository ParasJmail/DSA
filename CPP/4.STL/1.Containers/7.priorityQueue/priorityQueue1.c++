#include <iostream>
#include <queue>

int main()
{
    // Max Heap
    std::priority_queue<int> maxi;

    // Min Heap
    std::priority_queue<int, std::vector<int>, std::greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    std::cout << "Maxi : ";
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        std::cout << maxi.top() << " ";
        maxi.pop();
    }
    std::cout << std::endl;

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    std::cout << "Mini : ";
    int ni = mini.size();

    for (int i = 0; i < ni; i++)
    {
        std::cout << mini.top() << " ";
        mini.pop();
    }
    std::cout << std::endl;

    std::cout << "Empty or not : " << mini.empty() << std::endl;
}