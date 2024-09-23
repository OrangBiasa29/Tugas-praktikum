#include <iostream>
using namespace std;
int main () {
	int n, a, b = 1;
	cout << "input number : ";
	cin >> n;
	for (int i=1; i<=10; i++) {
		a = n*i;
		cout << b << " x " << n << " = " << a << endl;
		b +=1;		
	} 
}
