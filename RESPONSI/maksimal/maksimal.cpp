#include <iostream>
using namespace std;

int main() {
	
	int n = 10;
	int bil1[n] = {1, 4, 5, 10, 46, 54, 25, 23, 11, 20};
	int bil2[n] = {10, 43, 52, 13, 6, 5, 45, 29, 41, 23};
	int bil3[n] = {7, 4, 56, 70, 38, 32, 29, 8, 5, 80};

	
	int max1 = bil1[0];
		for (int i=0; i < n; i++) {
			if (max1 < bil1[i]+1) {
				max1 = bil1[i];
			}
		}
	cout << "Test Case 1 :" << endl;
	cout << "Daftar Bilangan : 1, 4, 5, 10, 46, 54, 25, 23, 11, 20" << endl;
	cout << "Bilangan terbesar = " << max1 << endl;
	
		int max2 = bil2[0];
		for (int i=0; i < n; i++) {
			if (max2 < bil2[i]+1) {
				max2 = bil2[i];
			}
		}
	cout << "Test Case 2 :" << endl;
	cout << "Daftar Bilangan : 10, 43, 52, 13, 6, 5, 45, 29, 41, 23" << endl;
	cout << "Bilangan terbesar = " << max2 << endl;
	
	
		int max3 = bil3[0];
		for (int i=0; i < n; i++) {
			if (max3 < bil3[i]+1) {
				max3 = bil3[i];
			}
		}
	cout << "Test Case 3 :" << endl;
	cout << "Daftar Bilangan : 7, 4, 56, 70, 38, 32, 29, 8, 5, 80" << endl;
	cout << "Bilangan terbesar = " << max3 << endl;
}
