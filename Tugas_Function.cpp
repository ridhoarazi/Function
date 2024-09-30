#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung gaji pokok
double pokok(int jamKerja) {
    return jamKerja * 7500;
}

// Fungsi untuk menghitung uang lembur
double lembur(int jamKerja) {
    if (jamKerja > 8) {
        return (jamKerja - 8) * 1.5 * 7500;
    }
    return 0;
}

// Fungsi untuk menghitung uang makan
double makan(int jamKerja) {
    if (jamKerja >= 9) {
        return 10000;
    }
    return 0;
}

// Fungsi untuk menghitung uang transport
double transport(int jamKerja) {
    if (jamKerja >= 10) {
        return 13000;
    }
    return 0;
}

// Fungsi utama
int main() {
    string NIP, nama;
    int jamKerja;

    // Input
    cout << "Masukkan NIP: ";
    cin >> NIP;
    cout << "Masukkan Nama: ";
    cin.ignore();
    getline(cin, nama);
    cout << "Masukkan Jumlah Jam Kerja: ";
    cin >> jamKerja;

    // Perhitungan
    double gajiPokok = pokok(jamKerja);
    double uangLembur = lembur(jamKerja);
    double uangMakan = makan(jamKerja);
    double uangTransport = transport(jamKerja);

    // Output
    cout << "\nNIP: " << NIP << endl;
    cout << "Nama: " << nama << endl;
    cout << "Gaji Pokok: Rp. " << gajiPokok << endl;
    cout << "Lembur: Rp. " << uangLembur << endl;
    cout << "Uang Makan: Rp. " << uangMakan << endl;
    cout << "Transport: Rp. " << uangTransport << endl;

    return 0;
}
