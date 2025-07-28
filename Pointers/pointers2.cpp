#include <bits/stdc++.h>
using namespace std;
#define ll long long
void sayHello(){
        cout<<"HellowHie";
}
void *notFunctionPointer();
 // this is not a function pointer this is a normal function with no params which returns void pointer


 // This is function pointer with no params which points to sayHello function
void (*functionPtr)() = sayHello;
int main() {
    std::ios_base::sync_with_stdio(false);
    
    functionPtr();
    
    
    return 0;
}