#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.

    // Variables
    int a;
    long b;
    char c;
    float d;
    double e;

    // Get input
    cin >> a >> b >> c >> d >> e;
    cout << a << "\n" << b << "\n" << c << "\n";
    // Print variables each in a different line

    // fixed<<setprecision(x) controls the number of digits of a floating-p value 
    cout << fixed << setprecision(3) << d << "\n";
    cout << fixed << setprecision(9) << e << "\n";

    return 0;
}
