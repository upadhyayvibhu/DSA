// sumOfnRecursion
#include <iostream>
using namespace std;

int sum(int n)
{
    // base case
    if (n == 1)
    {
        return 1;
    }
    return n + sum(n - 1);
}

int main()
{
    cout << sum(4) << endl; // should print 10
    return 0;
}