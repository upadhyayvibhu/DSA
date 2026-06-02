// LinearSearchTwoDArray.cpp
#include <iostream>
using namespace std;

pair<int, int>  linearSearch(int matrix[][3], int rows, int columns, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (matrix[i][j] == key)
            {
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int columns = 3;

    // calling a linearSearch function
    pair<int , int> result = linearSearch(matrix, rows, columns, 8);
    cout << result.first << " " << result.second << endl;
    // cout << linearSearch(matrix, rows, columns, 8) << endl;
    return 0;
}