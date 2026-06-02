#include <iostream>
#include <climits>
using namespace std;

int getMaxColSum(int matrix[][3], int rows, int columns)
{
    int maxColumnSum = INT_MIN;

    for (int i = 0; i < columns; i++) // iterate over columns
    {
        int colSum = 0;

        for (int j = 0; j < rows; j++) // iterate over rows
        {
            colSum += matrix[j][i]; // sum column elements
        }

        maxColumnSum = max(maxColumnSum, colSum); // update max
    }

    return maxColumnSum;
}

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int columns = 3;

    cout << getMaxColSum(matrix, rows, columns) << endl;

    return 0;
}