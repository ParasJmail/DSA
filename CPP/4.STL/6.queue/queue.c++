#include <iostream>
#include <queue>

int main()
{
    std::queue<std::string> q;

    q.push("Paras");
    q.push("Narendra");
    q.push("Jaitly");

    std::cout << "Size before pop : " << q.size() << std::endl;
    std::cout << "First element : " << q.front() << std::endl;
    q.pop();
    std::cout << "Size after pop : " << q.size() << std::endl;
    std::cout << "First element : " << q.front() << std::endl;
}