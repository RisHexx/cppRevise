#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    std::ios_base::sync_with_stdio(false);
    int size;
    cout<<"Enter the Size : ";
    cin>>size;
    char *pGrade = new char[size];
    for(int i = 0; i < size ; i++){
        cin>>pGrade[i];
    }
    for(int i = 0; i < size ; i++){
        cout<<pGrade[i];
    }
    delete pGrade;
    return 0;
}