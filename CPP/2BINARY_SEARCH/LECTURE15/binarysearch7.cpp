// Painter's Partition Problem

#include <iostream>
#include <vector>

bool isPossible(std::vector<int> arr, int n, int m, int mid)
{
    int painterCount = 1;
    int boardSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (boardSum + arr[i] <= mid)
        {
            boardSum += arr[i];
        }
        else
        {
            painterCount++;

            if (painterCount > m || arr[i] > mid)
            {
                return false;
            }

            boardSum = arr[i];
        }
    }

    return true;
}

int FindPaint(std::vector<int> arr, int n, int m)
{

    int start = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    // Number of boards
    std::vector arr{5, 5, 5, 5};
    int n = std::size(arr);
    int m = 2; // No. of painter

    std::cout << "Minimum number of pages = "
              << FindPaint(arr, n, m) << std::endl;
    return 0;
}