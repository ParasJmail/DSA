#include <iostream>
#include <stack>

int main()
{

    std::stack<std::string> s;

    s.push("Paras");
    s.push("Narendra");
    s.push("Jaitly");

    std::cout << "Top Element : " << s.top() << std::endl;

    s.pop();

    std::cout << "Top Element : " << s.top() << std::endl;

    std::cout << "Size of Stack : " << s.size() << std::endl;

    std::cout << "Empty or not : " << s.empty() << std::endl;
}