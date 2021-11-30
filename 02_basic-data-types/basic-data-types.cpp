#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long l;
    char c;
    float f;
    double d;


    cin >> i >> l >> c >> f >> d;

    cout << i<< "\n" << l << "\n" << c << "\n";

    //In order to define how many decimal places you want to show after the comma in floats and doubles
    //we can import the <bits/stdc++.h> library and use the setprecision(x) function:
    cout << fixed << setprecision(3) << f << "\n";
    cout << fixed << setprecision(9) << d;

    return 0;
}
