#include <iostream>
using namespace std;

int main()
{
    // cout << "Hello world" << endl;
    // creting array
    double price[] = {100.20, 22.25, 5.0}; // automatically contains 3 size

    // int marks[5] = {50, 49, 22, 15, 8};
    int marks[5];
    int size = 5;
    cout << sizeof(marks) / sizeof(int) << endl;

    // how to acces the value of array
    //  cout << marks[3] << endl;
    cout << "Enter the values of an Array: " << endl;
    // taken input from user
    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }

    // loops : 0 to n-1
    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }
}