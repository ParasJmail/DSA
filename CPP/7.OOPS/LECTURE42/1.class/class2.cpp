#include <iostream>
#include "Hero.cpp"

class Hero
{
public:
    // properties
    char name[100];
    int health;
    char level;
};

int main()
{
    // made a object  ->  h1
    Hero paras;

    // access propety or data member using dot operator

    std::cout << "health is" << paras.health << std::endl;
    std::cout << "level is" << paras.level << std::endl;
}