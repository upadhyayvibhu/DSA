// recursionSubsertBackTarcking.cpp
#include <iostream>
#include <vector>
using namespace std;

// helper function here we have assinf values as reference not a copr coz we wamt to make changes into a original one not to make a seperate copy for each & means refernce

void printSubsets(vector<int> &arr, vector<int> &ans, int i)
{
    // base case
    if (i == arr.size())
    {
        // print all the subsets
        for (int val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // inclusion step :
    ans.push_back(arr[i]);
    printSubsets(arr, ans, i + 1);

    ans.pop_back(); // backtracking
    // exclusion step  :
    printSubsets(arr, ans, i + 1);
}

int main()
{
    // create a vector
    vector<int> arr = {1, 2, 3};

    // vector -> stores substes
    vector<int> ans;

    // function call
    printSubsets(arr, ans, 0);
    return 0;
}
