#include <iostream>
#include <vector>
using namespace std;

// function for insertion sort
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++) // start from index 1
    {
        int currentValue = arr[i];
        int previousVal = i - 1;

        // shift elements greater than currentValue
        while (previousVal >= 0 && arr[previousVal] > currentValue)
        {
            arr[previousVal + 1] = arr[previousVal];
            previousVal--;
        }
        // insert currentValue at the right position
        arr[previousVal + 1] = currentValue;
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
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}