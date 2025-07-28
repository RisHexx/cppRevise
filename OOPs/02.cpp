#include <iostream>
using namespace std;

// ClassA declaration
class ClassA {
private:
    int secretValue; // Private member

public:
    ClassA() : secretValue(42) {} // Constructor initializes the private member

    // Declare ClassB as a friend of ClassA
    friend class ClassB;
};

// ClassB declaration
class ClassB {
public:
    void showSecret(ClassA obj) {
        // Accessing the private member of ClassA
        obj.secretValue = 12;
        cout << "The secret value of ClassA is: " << obj.secretValue << endl;
    }
};

int main() {
    ClassA a;  // Create an object of ClassA
    ClassB b;  // Create an object of ClassB

    // Access the private member of ClassA through ClassB
    b.showSecret(a);
    

    return 0;
}
