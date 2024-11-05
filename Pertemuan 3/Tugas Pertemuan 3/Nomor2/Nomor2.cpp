#include <iostream>
using namespace std;
int main () {
    int a, b, c;

   cout << " Input bilangan 1 : ";
   cin >> a;
   cout << " Input bilangan 2 : ";
   cin >> b;
   cout << " Input bilangan 3 : ";
   cin >> c;

   if (a > b && a > c) {
    cout << "Bilangan terbesar adalah " << a << endl;
   }
    else if (b > a && b > c) {
    cout << "Bilangan terbesar adalah " << b << endl;
    }     
    else if (c > a && c > b) {
    cout << "Bilangan terbesar adalah " << c << endl;
    }
    else if (a == c || b == c) {
    cout << "Bilangan terbesar adalah " << c << endl;
    }
    else if (a == b) {
    cout << "Bilangan terbesar adalah " << a << endl;
    }
}