#include <iostream>

int FindSqRt(int n)
{

    if (n == 0 || n == 1)
    {
        return n;
    }

    int start = 0;
    int end = n;

    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        double square = static_cast<double>(mid) * mid;

        if (square > n)
        {
            end = mid - 1;
        }
        else if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (square == n)
        {
            return mid;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{

    int ans = FindSqRt(36);

    std::cout << ans;
}