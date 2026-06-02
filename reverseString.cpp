#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    //character array = leetcode 344
    //string 
    string str = "learning cpp";

    reverse(str.begin(), str.end()); // interator retutn
    cout << str << endl;
    return 0;

    // for finding string we are having some inbuilt stl functions
    //1. str.find(substr)
    //2. str.erase(start , end)
} 