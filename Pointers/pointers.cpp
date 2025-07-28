#include <iostream>
using namespace std;

int main() {
    int a = 10;
    /*
    Two diff use case of & operator
    */
    // Reference variable
    int &ref = a; // ref is a reference to a

    // Address-of operator
    int *ptr = &a; // ptr stores the address of a

    // Access values
    cout << "Value of a: " << a << endl;       // 10
    cout << "Value through ref: " << ref << endl; // 10
    cout << "Address of a: " << &a << endl;    // Address of a
    cout << "Address stored in ptr: " << ptr << endl; // Address of a

    return 0;
}
