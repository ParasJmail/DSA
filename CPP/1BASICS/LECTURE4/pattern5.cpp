#include <iostream>

int main(){

    int n {0};
    std::cin >> n;

    std::cout<<std::endl;

    int i{0};
    while(i<n){
        int j{0};
        while(j <= i){
            std::cout << '*';
            j++;
        }
        std::cout<<std::endl;
        i++;
    }
}