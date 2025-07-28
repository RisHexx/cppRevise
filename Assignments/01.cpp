#include <iostream>

int main() {
    int rooms{0};
    float service_cost{30};
    float total{0};
    std::cout<<"Enter The No of rooms : ";
    std::cin>>rooms;
    total = rooms * service_cost ;
    float tax = total * 0.06 ; 
    total += tax;     
    std::cout<<"The total amount is : "<<total;
    return 0;
}