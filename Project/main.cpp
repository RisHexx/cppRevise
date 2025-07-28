#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <list>
#include <deque>
#include <ctime>

using namespace std;

struct Product
{
    int productID;
    string productName;
    string category;
};

struct Order{
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderdate;
};

struct Customer{
    string name;
    string phonNo;
    int age;
};