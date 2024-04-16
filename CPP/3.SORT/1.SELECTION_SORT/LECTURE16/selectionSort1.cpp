// Section Sort

#include <iostream>
#include <vector>

void SelectionSort(std::vector<int> &arr, int n)
{
    // std::cout << "Array Before : ";
    // for (int i = 0; i < n; i++)
    // {

    //     std::cout << arr[i] << " ";
    // }

    // std::cout << std::endl;

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        std::swap(arr[minIndex], arr[i]);
    }
    // std::cout << "Array After : ";
    // for (int i = 0; i < n; i++)
    // {

    //     std::cout << arr[i] << " ";
    // }
}
int main()
{
    std::vector<int> arr{29, 72, 98, 13, 87, 66, 52, 51, 36};

    int n = arr.size();

    SelectionSort(arr, n);
}