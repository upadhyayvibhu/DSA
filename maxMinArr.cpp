#include <iostream>
#include <climits>
using namespace std;

// find largest and smallest values in given array
int main()
{

    // define array
    int nums[] = {5, 15, 22, 1, -15, 2};

    // iniialise size of array
    int size = sizeof(nums) / sizeof(nums[0]);

    // temp var with +infinity (largest possible integer value) for compare values with laast array value
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int minIndex = -1;
    int maxIndex = -1;

    // loop to access through entire array
    for (int i = 0; i < size; i++)
    {
        // explicit inbuilt max and min function
        // smallest = min(size, smallest);
        // largest = max(nums[i], largest);

        if (nums[i] < smallest)
        {
            // updates the values of smallest with latest one
            smallest = nums[i];
            minIndex = i;
        }
        if (nums[i] > largest)
        {
            largest = nums[i];
            maxIndex = i;
        }

        // printing the updates smallest value
    }

    cout << "Smallest Number of Array is: " << smallest
         << " at index " << minIndex << endl;
    cout << "Largest Number of Array is : " << largest
         << " at index " << maxIndex << endl;

    return 0;
}