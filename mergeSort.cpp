// mergeSort.cpp
#include <iostream>
#include <vector>
using namespace std;

// division of array untile everytinh not turn into a single element
// sort and merge

//recursive function
void mergeSort(vector<int> &arr, int st, int end)
{
    if (end < st)
    {
        int mid = st + (end - st) / 2;
        // left half
        mergeSort(arr , st , mid);
        // right half
        mergeSort(arr , mid + 1 ,end);
    }
}


int main()
{
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    return 0;
};