#include <iostream>
#include <cmath>
using namespace std;
int main () {

float a, b, c, D, xi, xj, x;

cout << "a = ";
cin >> a;
cout << "b = ";
cin >> b;
cout << "c = ";
cin >> c;

D = (b*b) - (4*a*c);
if (D > 0) {
    xi = (-b + sqrt(D))/(2*a);
    xj = (-b - sqrt(D))/(2*a);
    cout << "there are two distrinc roots, " << xi << "and" << xj << endl;
}
else if (D == 0) {
    x = (-b)/(2*a);
    cout << "there is exactly one real root, which is " << x << endl;
}
else {
    cout << "the roots are complex";
}
}
