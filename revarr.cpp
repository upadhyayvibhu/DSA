#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    // we are creating here two pointers
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = 4;

    reverseArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}