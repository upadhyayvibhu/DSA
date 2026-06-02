#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    // arr is pointer - 0x61fefc
    cout << arr << endl;

    // it will print 0th index values
    cout << *arr << endl;

    // ------------- exmaple lets visulaze one memory adddress here ------
    // |    a val = 10 and address 100                                   |
    // |    p val = 100 and address 300                                  |
    //---------------------------------------------------------------------

    int a = 10;
    int *p = &a;

    cout << a << endl;  // prints the value of a
    cout << p << endl;  // prints the memory address stored in p
    cout << *p << endl; // prints the value at the memory address (same as a)

    // pointer arithmatic

    //  ---> Increament (++) / Decreament (--)

    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    //  ---> Add/ Subtract Number
    return 0;
}