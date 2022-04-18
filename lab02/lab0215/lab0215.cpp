#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int F, a, b, c, x;

    cout << "Enter F" << endl;
    cin >> F;
    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;
    cout << "Enter c" << endl;
    cin >> c;
    cout << "Enter x" << endl;
    cin >> x;

    if ((x = 0) && (b != 0)) {
        F = ((a*(x + c)) * 2);
    }
    else if ((x = 0) && (b = 0)){
        F = ((x - a) / (-c));
    }
    else {
        F = (a + (x / c));
    }
    cout << F;

}
