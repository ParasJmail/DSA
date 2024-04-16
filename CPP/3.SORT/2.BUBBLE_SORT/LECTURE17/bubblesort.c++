#include <iostream>
#include <vector>

void bubbleSort(std::vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            break;
        }
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

    bubbleSort(arr, n);
}