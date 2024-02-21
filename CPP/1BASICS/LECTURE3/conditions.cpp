#include <iostream>

int main(){

    int n;

    std::cin >> n;

    std::cout <<  "Value of n is : " << n << std::endl;

    if (n>0){
        std::cout << " n is positive number ." <<std::endl;
    }
    else{
        std::cout << " n is negative number ." <<std::endl;
    }
}