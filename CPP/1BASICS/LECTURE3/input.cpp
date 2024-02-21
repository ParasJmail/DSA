#include <iostream>

int main(){
    int a,b;

    std::cin >> a >>b;

    std::cout << " value of a and b is" <<a << " " <<b <<std::endl;

    int p = std::cin.get();

    std::cout << "value of p is :" << p <<std::endl;

    int i,j;

    std::cout << "Enter the value of i " <<std::endl;
    std::cin >> i;

    std::cout << "Enter the value of j " <<std::endl;
    std::cin >> j;

    if (i > j){
        std::cout << "i is greater " <<std::endl;
    }
    if (b>a){
        std::cout << "j is greater " <<std::endl;
    }


    int s;
    std::cout << "Enter the value of s " <<std::endl;
    std::cin >> s;

    if (s >0 ){
        std::cout << "s is positive " <<std::endl;
    }
    else{
        if (s < 0) {
            std::cout << "s is negative " << std::endl;
        }
        // else{

        // }
    }

    int t;
    std::cout << "Enter the value of t " <<std::endl;
    std::cin >> t;

     if (t >0 ){
        std::cout << "t is positive " <<std::endl;
    }else if (t<0){
        std::cout << "t is negative " <<std::endl;
    }



 }