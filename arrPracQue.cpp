#include <iostream>
using namespace std;

// WAF to calculate sum & product of all the number in array.
void sumProductArray(int arr[], int size)
{
    int sum = 0;
    int product = 1;

    // loop for sum and product
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;
}
// WAF to swap the max and min number of an array.
// WAF to print all the unique values in array.
// WAF to print intersaction of a array.
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    // printing array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sumProductArray(arr, size);
    return 0;
}