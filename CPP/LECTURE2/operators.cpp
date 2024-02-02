#include <iostream>

int main(){


    int a = 2/5;

    std::cout << a << std::endl;

    std::cout << 2.0/5 << std::endl;

    //Relational operator

    int p = 2;
    int q = 3;
    std::cout << std::boolalpha;

    bool first =  (p==q);
    std::cout << first <<std::endl;

    bool second =  (p<=q);
    std::cout << second <<std::endl;

    bool third =  (p>=q);
    std::cout << third <<std::endl;

    bool fourth =  (p!=q);
    std::cout << fourth <<std::endl;

    std::cout << std::endl;
    std::cout << std::noboolalpha;
    //Logical
    int l = 0;
    std::cout << !l <<std::endl;


}