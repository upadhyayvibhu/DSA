// rateInMaze.cpp
#include <iostream>
#include <vector>
using namespace std;

// time complexity - o(3n^2) 
void helper(vector<vector<int>> &mat, int row, int column, string path,
            vector<string> &ans, vector<vector<bool>> &visited)
{
    int n = mat.size();

    // boundary + blocked + visited check
    if (row < 0 || column < 0 || row >= n || column >= n ||
        mat[row][column] == 0 || visited[row][column])
    {
        return;
    }

    // destination reached
    if (row == n - 1 && column == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // mark visited
    visited[row][column] = true;

    // move in all directions
    helper(mat, row + 1, column, path + "D", ans, visited); // Down
    helper(mat, row - 1, column, path + "U", ans, visited); // Up
    helper(mat, row, column + 1, path + "R", ans, visited); // Right
    helper(mat, row, column - 1, path + "L", ans, visited); // Left

    // backtrack
    visited[row][column] = false;
}

// main function
vector<string> findPath(vector<vector<int>> &mat)
{
    int n = mat.size();

    vector<string> ans;
    string path = "";

    vector<vector<bool>> visited(n, vector<bool>(n, false));

    helper(mat, 0, 0, path, ans, visited);

    return ans;
}

int main()
{
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> ans = findPath(mat);

    for (string path : ans)
    {
        cout << path << endl;
    }

    return 0;
}