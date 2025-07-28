#include <iostream>
using namespace std;

template <typename T>
T mymax(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cout << mymax(5, 2) << endl;
    cout << mymax(5.4, 5.5) << endl;
    return 0;
}
