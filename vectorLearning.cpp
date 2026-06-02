#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // creating first vetor
    vector<int> vec = {1, 2, 3, 4}; // right now the size of vector is 0

    // size fucntion
    cout << "Size of vector : " << vec.size() << endl;

    // puch back funtion for adding values at last of element
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);

    cout << "Size of vector After Push Back: " << vec.size() << endl;

    // pop back funtion for deleting values at last of element
    vec.pop_back();
    cout << "Size of vector After Pop Back: " << vec.size() << endl;

    // front function for accessing front first val of vector
    cout << "first val of vector : " << vec.front() << endl;

    // back function for accessing front last val of vector
    cout << "last val of vector : " << vec.back() << endl;

    // at function for accessing value of any particular index
    cout << "index value" << vec.at(4) << endl;

    // for each loop for accessing each values of vetors
    for (int values : vec)
    {
        cout << values << endl;
    }

    return 0;
}