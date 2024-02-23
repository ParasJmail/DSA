#include <iostream>

int binarySearch(int arr[] ,int size , int key){
    int start {0};
    int end {size -1};

    int mid  = start + (end - start)/2; //{(start + end)/2};

    while(start <= end){
        
        if (arr[mid] == key){
            return mid;
        }

            //GO TO RIGHT
        if (key > arr[mid]){
            start = mid + 1;
        }

            //GO TO LEFT
        if(key < arr[mid]){
            start = mid - 1;
        }

        mid = (start + end)/2;
    }

    return -1;

}

int main(){
    int even[6] {2,4,6,8,12,18};
    int odd[5] {3,8,11,14,16};

    int index = binarySearch(even,6,12);

    std::cout << "Index of 12 is : " << index << std::endl;
}