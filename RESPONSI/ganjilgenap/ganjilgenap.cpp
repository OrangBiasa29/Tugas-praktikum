#include <bits/stdc++.h>
using namespace std;

int main () {
	int n = 10;
	int bil1[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int bil2[n] = {2, 3, 5, 8, 13, 21, 34, 55, 89, 100};
	int bil3[n] = {12, 23, 31, 43, 57, 64, 76, 81, 93, 103};
	
	int ganjil1 = 0, genap1 = 0, sumGanjil1 = 0, sumGenap1 = 0;
	for (int i =0; i < n; i++) {
		if (bil1[i] % 2 == 0) {
			genap1+= 1;
			sumGenap1+= bil1[i];
		}
		else {
			ganjil1+= 1;
			sumGanjil1+= bil1[i];
		}
	}
	cout << "Test Case 1 :" << endl;
	cout << " Daftar bilangan : 1, 2, 3, 4, 5, 6, 7, 8, 9, 10" << endl;
	cout << "Jumlah bilangan genap = " << genap1 << endl;
	cout << "Penjumlahan dari semua bilangan genap = " << sumGenap1 << endl;
	cout << "Jumlah bilangan ganjil = " << ganjil1 << endl;
	cout << "Penjumlahan dari semua bilangan ganjil = " << sumGanjil1 << endl;;
	cout << endl;
	
	
	int ganjil2 = 0, genap2 = 0, sumGanjil2 = 0, sumGenap2 = 0;
	for (int i =0; i < n; i++) {
		if (bil2[i] % 2 == 0) {
			genap2+= 1;
			sumGenap2+= bil2[i];
		}
		else {
			ganjil2+= 1;
			sumGanjil2+= bil2[i];
		}
	}
	cout << "Test Case 2 :" << endl;
	cout << "Daftar Bilangan : 2, 3, 5, 8, 13, 21, 34, 55, 89, 100" << endl;
	cout << "Jumlah bilangan genap = " << genap2 << endl;
	cout << "Penjumlahan dari semua bilangan genap = " << sumGenap2 << endl;
	cout << "Jumlah bilangan ganjil = " << ganjil2 << endl;
	cout << "Penjumlahan dari semua bilangan ganjil = " << sumGanjil2 << endl;
	cout << endl;



	int ganjil3 = 0, genap3 = 0, sumGanjil3 = 0, sumGenap3 = 0;
	for (int i =0; i < n; i++) {
		if (bil3[i] % 2 == 0) {
			genap3+= 1;
			sumGenap3+= bil3[i];
		}
		else {
			ganjil3+= 1;
			sumGanjil3+= bil3[i];
		}
	}
	cout << "Test Case 3 : " << endl;
	cout << "Daftar Bilangan : 12, 23, 31, 43, 57, 64, 76, 81, 93, 103" << endl;
	cout << "Jumlah bilangan genap = " << genap3 << endl;
	cout << "Penjumlahan dari semua bilangan genap = " << sumGenap3 << endl;
	cout << "Jumlah bilangan ganjil = " << ganjil3 << endl;
	cout << "Penjumlahan dari semua bilangan ganjil = " << sumGanjil3;

}

