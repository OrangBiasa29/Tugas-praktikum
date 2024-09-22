#include <iostream>
#include <cmath>
using namespace std;
int main () {
    float a, b, c, D, x2, x1;

cout << "a = ";
cin >> a;
cout << "b = ";
cin >> b;
cout << "c = ";
cin >> c;

    D = b*b - 4*a*c;

 if (D > 0) {
    x1 = (-b + sqrt(D))/(2*a);
    x2 = (-b - sqrt(D))/(2*a);
    cout << "akar-akarnya adalah " << x1 << " dan " << x2;
 }
 else if (D == 0) {
    cout << " maka x1 dan x2 bersifat riil dan sama ";
 }
 else if (D < 0) {
    cout << " maka x1 dan x2 bersifat imaginer ";
 }
}