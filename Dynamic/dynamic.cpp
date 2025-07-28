#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    std::ios_base::sync_with_stdio(false);
    int *pNum = new int;
    *pNum = 12;
    cout<<"Address : "<<pNum<<endl;
    cout<<"Value : "<<*pNum;
    
    delete pNum;
    
    return 0;
}