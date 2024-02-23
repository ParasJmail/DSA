// First and Last Position of an element in an srted array.

#include <iostream>

int firstOccurence(int arr[] , int size , int key){

    int start {0};
    int end {size -1};
    int mid {start + (end - start)/2};
    int ans {-1};

    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            end = mid -1;
        }
        else if (key > arr[mid]) //Right
        {
            start = mid + 1;
        }
        else if (key < arr[mid]) //Left
        {
             end = mid - 1;
        }
        
        mid = start + (end-start)/2;

    }

    return ans;
}

int lasttOccurence(int arr[] , int size , int key){

    int start {0};
    int end {size -1};
    int mid {start + (end - start)/2};
    int ans {-1};

    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            start = mid +1;
        }
        else if (key > arr[mid]) //Right
        {
            start = mid + 1;
        }
        else if (key < arr[mid]) //Left
        {
             end = mid - 1;
        }
        
        mid = start + (end-start)/2;

    }

    return ans;
}




int main(){

    int arr[6] {0,5,5,6,6,6};

    int fst = firstOccurence(arr ,6,6); 
    int lst = lasttOccurence(arr ,6,5); 

    std::cout << fst << std::endl;
    std::cout << lst << std::endl;

    return 0;
}