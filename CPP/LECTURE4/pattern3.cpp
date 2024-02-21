#include <iostream>

int main(){
    int n{0};
    std::cin >> n;
    std::cout << std::endl;

    int i{1};
    
    while (i <= n){
        int j{1};
        while (j <= n){
            std::cout << j;
            j++;
        }
        std::cout << std::endl;
        i++;
    }

    std::cout << std::endl;

    i = 1;
    while (i <= n){
        int j{1};
        while (j <= n){
            std::cout << n-j+1;
            j++;
        }
        std::cout << std::endl;
        i++;
    }

}