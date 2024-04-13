// Book Allocation Problem

#include <iostream>
#include <vector>

bool isPossible(std::vector<int> arr, int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;

            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }

            pageSum = arr[i];
        }
    }

    return true;
}

int BookAllocate(std::vector<int> arr, int n, int M)
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
        if (isPossible(arr, n, M, mid))
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
    // Number of pages in books
    std::vector arr{10, 20, 30, 40};
    int n = std::size(arr);
    int m = 2; // No. of students

    std::cout << "Minimum number of pages = "
              << BookAllocate(arr, n, m) << std::endl;
    return 0;
}