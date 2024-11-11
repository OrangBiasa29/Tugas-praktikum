#include <iostream>
using namespace std;

double hitungJumlah(int n) {
    if (n == 0) {
        return 0;
    }

    double angka;
    cout << "Masukkan angka ke-" << n << ": ";
    cin >> angka;

    return angka + hitungJumlah(n - 1);
}

double hitungRataRata(int n) {
    if (n == 0) {
        return 0;
    }

    double total = hitungJumlah(n);
    return total / n;
}

int main() {
    int n;
    cout << "Masukkan jumlah angka: ";
    cin >> n;

    if (n > 0) {
        double rataRata = hitungRataRata(n);
        cout << "Rata-rata dari angka yang dimasukkan adalah: " << rataRata << endl;
    } else {
        cout << "Jumlah angka harus lebih dari 0." << endl;
    }

    return 0;
}
