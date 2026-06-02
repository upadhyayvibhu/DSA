#include <iostream>
#include <vector>
using namespace std;

// we are printing all the possible subarrays with bruteforce approach
int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}