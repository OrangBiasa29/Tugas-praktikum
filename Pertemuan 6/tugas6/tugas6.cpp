#include <iostream>
using namespace std;

struct pasar{
	string nama;
	int kode;
	int harga;
	int jumlah;
	};
	pasar barang[50];
	int main () {
		 int n, total, sum;
		cout << "Masukkan banyaknya Barang : "; cin >> n; 
		cout << endl;
		for (int i=0; i<n; i++) {
		cout << "Data Barang ke " << i+1 << endl;
		cout << "Nama Barang : ";
		cin.ignore();
		getline (cin, barang[i].nama);
		cout << "Kode barang : "; cin >> barang[i].kode;
		cout << "Harga barang : "; cin >> barang[i].harga;
		cout << "Jumlah barang : "; cin >> barang[i].jumlah;
		cout << endl;
		}
		total = 0;
		sum = 0;
		for (int i=0; i<n; i++) {
			total += barang[i].jumlah;
			sum += barang[i].harga;  
		}
		sum = sum/n;
		cout << "jumlah seluruh barang = " << total << endl;
		cout << "rata-rata harga barang = " << sum;
	}
	
	

