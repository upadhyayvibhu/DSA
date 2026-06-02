#include <iostream>
#include <vector>
using namespace std;

// function for selction sort
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // unsorted part starting
        int smallestIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestIndex])
            {
                smallestIndex = j;
            }
        }

        //  swap the elements
        swap(arr[i], arr[smallestIndex]);
    }
}

// function for printing array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
    selectionSort(arr, n);
    printArray(arr,n);
    return 0;
}