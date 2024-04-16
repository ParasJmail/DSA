#include <iostream>
#include <vector>

void insertionSort(std::vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // Shift
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{
    std::vector<int> arr{6, 2, 8, 4, 10};

    int n = arr.size();

    insertionSort(arr, n);
}