#include <iostream>

int main(){
    int n;
    std::cin >> n;

    int i{1};

    while (i<=n)
    {
        std::cout << i <<" ";
        i++;
    }

    int sum{0};
    
    int j{1};
    while(j<=n){
        sum=sum+j;
        j++;
    }
    std::cout<< " sume : "<< sum;
    
}