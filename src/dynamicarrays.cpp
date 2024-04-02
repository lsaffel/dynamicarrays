#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Size: ";
    cin >> size;
    // int myArray[size];  // hers (video creator) gives an 
            // error here. Mine doesn't.
        // Her error said "the value of variable size 
        // cannot be used as a constant"

    int* myArray = new int[size];

    // input the array from the user
    for (int i = 0; i < size; i++) {
        cout << "Array[" << i << "] ";
        cin >> myArray[i];
    }

    // write out the array
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << "   ";
    }
    cout << endl;
    return 0;
}