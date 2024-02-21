#include <iostream>

int main(){

    int n {0};
    std::cin >> n;
    std::cout << std::endl;

    int i{1};
    while (i<=n)
    {
        int j {1};
        while (j<=i)
        {
            std::cout << i-j+1;
            j++;
        }
        std::cout << std::endl;
        i++;
        
    }
    
}