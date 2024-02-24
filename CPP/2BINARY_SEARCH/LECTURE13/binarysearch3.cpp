//Find Peak In Mountain Array.
#include <iostream>

int Peak(int arr[],int size,int key){
    int s {0};
    int e {size -1};

    int mid {s + (e -s)/2};

    while (s<e)
    {
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }

    return s;
    
}

int main(){
    int Arr[5] {1,3,5,4,2};

    int Ans = Peak(Arr,5,5);

    std::cout << Ans << std::endl;


}