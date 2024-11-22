#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Struktur untuk menyimpan data siswa
struct Siswa {
    string NISN;
    string Nama;
    int Nilai;
};

// Fungsi untuk mencetak data siswa
void printData(const vector<Siswa>& data) {
    for (size_t i = 0; i < data.size(); i++) {
        cout << data[i].NISN << "\t" << data[i].Nama << "\t" << data[i].Nilai << endl;
    }
    cout << endl;
}

// Metode pengurutan penyisipan (Insertion Sort)
void insertionSort(vector<Siswa>& data, bool sortByNilai) {
    for (size_t i = 1; i < data.size(); i++) {
        Siswa key = data[i];
        int j = i - 1;

        while (j >= 0 && ((sortByNilai && data[j].Nilai > key.Nilai) || (!sortByNilai && data[j].NISN > key.NISN))) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}

// Metode pengurutan seleksi (Selection Sort)
void selectionSort(vector<Siswa>& data, bool sortByNilai) {
    for (size_t i = 0; i < data.size() - 1; i++) {
        size_t minIdx = i;

        for (size_t j = i + 1; j < data.size(); j++) {
            if ((sortByNilai && data[j].Nilai < data[minIdx].Nilai) || (!sortByNilai && data[j].NISN < data[minIdx].NISN)) {
                minIdx = j;
            }
        }
        swap(data[i], data[minIdx]);
    }
}

// Metode pengurutan gelembung (Bubble Sort)
void bubbleSort(vector<Siswa>& data, bool sortByNilai) {
    for (size_t i = 0; i < data.size() - 1; i++) {
        for (size_t j = 0; j < data.size() - i - 1; j++) {
            if ((sortByNilai && data[j].Nilai > data[j + 1].Nilai) || (!sortByNilai && data[j].NISN > data[j + 1].NISN)) {
                swap(data[j], data[j + 1]);
            }
        }
    }
}

// Metode pencarian bagi dua (Binary Search)
int binarySearchByNISN(const vector<Siswa>& data, const string& targetNISN) {
    int left = 0, right = data.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (data[mid].NISN == targetNISN) {
            return mid; // Return indeks ditemukan
        } else if (data[mid].NISN < targetNISN) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Tidak ditemukan
}

// Metode pencarian beruntun (Linear Search) untuk memperbarui nama
void updateNamaByNilai(vector<Siswa>& data, int nilaiTarget, const string& namaBaru) {
    for (size_t i = 0; i < data.size(); i++) {
        if (data[i].Nilai == nilaiTarget) {
            data[i].Nama = namaBaru;
        }
    }
}

// Fungsi utama
int main() {
    // Data awal
    vector<Siswa> data = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfindra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Luftianto", 65},
        {"9965653989", "Arief Budiman", 60}
    };

    cout << "Data awal:" << endl;
    printData(data);

    // Nomor 1: Urutkan Data
    cout << "Urutkan berdasarkan NISN (Insertion Sort):" << endl;
    insertionSort(data, false);
    printData(data);

    cout << "Urutkan berdasarkan Nilai (Selection Sort):" << endl;
    selectionSort(data, true);
    printData(data);

    cout << "Urutkan berdasarkan NISN (Bubble Sort):" << endl;
    bubbleSort(data, false);
    printData(data);

    // Nomor 2: Cari Data dengan Binary Search
    string targetNISN = "9950310962";
    cout << "Mencari data dengan NISN " << targetNISN << " menggunakan Binary Search..." << endl;
    int index = binarySearchByNISN(data, targetNISN);

    if (index != -1) {
        cout << "Data ditemukan. Nilai: " << data[index].Nilai << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }

    // Nomor 3: Ubah Nama Berdasarkan Nilai
    cout << "Mengubah nama siswa dengan nilai 60 menjadi Joko:" << endl;
    updateNamaByNilai(data, 60, "Joko");
    printData(data);

    return 0;
}

