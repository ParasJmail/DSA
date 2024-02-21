#include <iostream>

int main(){
    int n {0};
    std::cin >> n;

    std::cout<<std::endl;

    int i {0};
    int count{1};

    while (i < n){
        int j {0};
        while(j < n)
        {
            std::cout << count;
            j++;
            count++;
        }
        std::cout<<std::endl;
        i++;
    } 
}