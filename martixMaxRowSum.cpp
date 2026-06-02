// martixMaxRowSum.cpp
#include <iostream>
#include <climits>
using namespace std;

// function to get maximum rows sum
int getMaxSum(int matrix[][3], int rows, int columns)
{
    int maxRowSum = INT_MIN;

    for (int i = 0; i < rows; i++)
    {
        int rowSumI = 0;
        for (int j = 0; j < columns; j++)
        {
            rowSumI += matrix[i][j];
        }
        maxRowSum = max(maxRowSum , rowSumI);
    }
    return maxRowSum;
}

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int columns = 3;

    // calling funaction getMaxSum
    cout << getMaxSum(matrix, rows, columns) << endl;
    return 0;
}