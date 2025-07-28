#include <iostream>
#include <vector>
using namespace std;

class Data{
public:
string name;
int age;
vector <string> subs;
Data(string namee , int agee){
    name = namee;
    age = agee;
}
void display(){
    cout<<name<<endl;
    cout<<age<<endl;
}
};
int main() {
    Data d1("rishabh",18);
    d1.display();
    return 0;
}