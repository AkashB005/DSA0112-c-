#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    do {
        if (a > b) {
            a -= b; 
        } else {
            b -= a;
        }
    } while (a != b);

    cout << "GCD: " << a << endl;

    return 0;
}

