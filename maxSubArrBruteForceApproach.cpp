#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int count = 5;
    int arr[] = {3, -4, 5, 4, -1, 7, -8};

    int maxSum = INT_MIN;
    for (int start = 0; start < count; start++)
    {
        int currentSum = 0;
        for (int end = start; end < count; end++)
        {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }

    cout << "max subarray sum  = " << maxSum << endl;
    return 0;
}