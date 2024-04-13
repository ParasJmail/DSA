// Agressive Cows

#include <iostream>
#include <vector>
#include <algorithm>

bool isPossible(std::vector<int> arr, int m, int mid)
{
    int cowCount = 1;
    int lastPost = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] - lastPost >= mid)
        {
            cowCount++;
            if (cowCount == m)
            {
                return true;
            }
            lastPost = arr[i];
        }
    }

    return false;
}

int FindStall(std::vector<int> arr, int n, int m)
{

    std::sort(arr.begin(), arr.end());

    int start = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        maxi += std::max(maxi, arr[i]);
    }

    int end = maxi;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (isPossible(arr, m, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    // Number of boards
    std::vector arr{4, 2, 3, 1, 6};
    int n = std::size(arr);
    int m = 2; // No. of painter

    std::cout << "Largest Minimum Distance is : "
              << FindStall(arr, n, m) << std::endl;
    return 0;
}