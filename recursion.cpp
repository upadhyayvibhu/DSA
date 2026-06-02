#include <iostream>
using namespace std;

void printNums(int n)
{
    // base case
    if (n == 1)
    {
        cout << "1\n";
        return;
    }
    cout << n << " ";      // print first
    printNums(n - 1);      // then recurse
}

int main()
{
    printNums(5);
    return 0;
}