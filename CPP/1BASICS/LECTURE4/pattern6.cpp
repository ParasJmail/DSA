#include <iostream>

int main(){

    int n{0};
    std::cin >> n;
    std::cout << std::endl;

    int i{1};
    while(i<=n){
        int j{0};
        while(j<i){
            std::cout << i;
            j++;

        }
        std::cout << std::endl;

        i++;
    }
}