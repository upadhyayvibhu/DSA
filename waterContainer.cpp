// waterContainer.cpp
// brute force approach
// time complexity = o(n2)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int maxWater = 0;

    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {

            int width = j - i;
            int hei = min(height[i], height[j]);
            int currentWater = width * hei;

            maxWater = max(maxWater, currentWater);
        }
    }

    cout << "Maximum Water Container Area: " << maxWater << endl;

    return 0;
}