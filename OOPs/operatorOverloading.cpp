#include <iostream>
using namespace std;

class Complex{
    private:
    float real, imag;
    public:

    Complex(float realnum , float imagnum):  real(realnum) , imag(imagnum){}

    void display(){
        cout<<"The real num is "<<this->real<<" and imaginary num is "<<this->imag<<endl;
    }

    Complex operator+(const Complex& obj){
        Complex temp(0,0);
        temp.real = this->real + obj.real;
        temp.imag = this->imag + obj.imag;
        return temp;
    }

    Complex operator++() {
    ++real;
    ++imag;
    return *this; // This returns a copy of the updated object
}
};
int main() {
    
    Complex c1(4,5);
    Complex c2(1,5);
    c1.display();
    c2.display();
    Complex c3 = c1 + c2 ;
    c3.display();
    
    
    return 0;
}