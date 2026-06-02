// matrixDiagonalSum.cpp
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

// time complexity = O(n square)
// primary diagonal = i == j
// secondary diagonal = i-j-1;
// after time complexity O(n) == linear time complexity
int digonalSum(int matrix[][4], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        // for (int j = 0; j < n; j++)
        // {
        //     if (i == j)
        //     {
        //         sum += matrix[i][j];
        //     }
        //     else if (j == n - i - 1)
        //     {
        //         sum += matrix[i][j];
        //     }
        // }

        sum += matrix[i][i];
        if (i != n - i - 1)
        {
            sum += matrix[i][n - i - 1];
        }
    }

    return sum;
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int n = 4;

    cout << digonalSum(matrix, n) << endl;

    // creating 2D vector
    vector<vector<int>> mat = {{111, 112, 113}, {114, 115, 116}, {117, 118, 119}};

    // dynmaically calculate size
    // rows => mat.size();
    // columns => mat[i].size();
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}