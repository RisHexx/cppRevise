#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> score {1,2,3,4,5,6};
    score.at(0) = 9;
    cout<<score.at(0)<<endl;
    
    cout<<score.size();
    return 0;
}