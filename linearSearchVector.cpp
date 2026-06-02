#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &vec, int target)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    // creating vector
    vector<int> vec = {1, 2, 3, 4};

    int target;
    cout << "Enter a number to search : " << endl;
    cin >> target;

    int result = linearSearch(vec, target);

    if (result != -1)

        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}
