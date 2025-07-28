#include <iostream>
using namespace std;

void sayHello() { cout << "Hello"; }
void (*funcPtr)() = sayHello;


//References cannot be null or uninitialized, which reduces the risk of errors like dereferencing a null pointer.
/*
If you see & in a variable declaration:

It’s declaring a reference.
If you see & being used elsewhere:

It’s the address-of operator.
Both pointers and references have unique purposes. References are ideal for safer and simpler use cases, especially when you don't need advanced pointer capabilities. Pointers, on the other hand, provide flexibility and power, enabling complex functionalities like dynamic memory management and polymorphism. This duality makes both tools essential in C++.
*/
int main() {
    int a = 10;
    int &b = a;
    b = 102;
    cout<<a;
    funcPtr();
    return 0;
}