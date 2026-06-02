#include <iostream>
using namespace std;

// learing 2d arrays

int main()
{

    // normal array initilization
    int arr[5] = {1, 2, 3, 4, 5};

    // multidimention array initilization

    // rows , columns // fiest we are passing 1 row element then 2 row element nd so on..
    int matrix[4][3];
    // = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int columns = 3;

    // how to access element , we are goint to trac cell using rows and colms
    // cout << matrix[2][1] << endl;

    // changeing element on array
    // matrix[2][1] = 0;
    // cout << matrix[2][1] << endl;

    // input
    cout << "Enter 12 matrix values:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // output
    //  loops on 2D arrays oyutput & input matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    //  array stores in memory in linearly
    // 2d arreas are also store in linearly 
    //  i - > row major
    // ii -> column major
    return 0;
}