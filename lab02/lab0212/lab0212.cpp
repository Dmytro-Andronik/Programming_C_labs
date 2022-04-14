#include <iostream>
#include <cmath>

using namespace std;

int main()
{



    double x;
    cout << "Enter x" << endl;
    cin >> x;
    cout << pow(x, 4) / (pow(x, 5) + pow(x, 3) + x + 1) << endl;

}