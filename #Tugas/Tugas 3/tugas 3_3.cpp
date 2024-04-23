#include <iostream>
#include <string>
using namespace std;

int main() {
    // Deklarasi variabel
    string namaKaryawan, pendidikan;
    int golongan, jumlahJamKerja;
    const int gajiPokok = 300000;
    const int honorPerJam = 3500;
    double tunjanganJabatan = 0, tunjanganPendidikan = 0, honorLembur = 0, totalGaji;

    // Input
    cout << "PROGRAM HITUNG GAJI KARYAWAN\n";
    cout << "Nama Karyawan: ";
    getline(cin, namaKaryawan);
    cout << "Golongan Jabatan (1, 2, 3): ";
    cin >> golongan;
    cout << "Pendidikan (SMA, D1, D3, S1): ";
    cin >> pendidikan;
    cout << "Jumlah jam kerja: ";
    cin >> jumlahJamKerja;

    // Proses tunjangan jabatan
    switch (golongan) {
        case 1: tunjanganJabatan = 0.05 * gajiPokok; break;
        case 2: tunjanganJabatan = 0.10 * gajiPokok; break;
        case 3: tunjanganJabatan = 0.15 * gajiPokok; break;
    }

    // Proses tunjangan pendidikan
    if (pendidikan == "SMA") {
        tunjanganPendidikan = 0.025 * gajiPokok;
    } else if (pendidikan == "D1") {
        tunjanganPendidikan = 0.05 * gajiPokok;
    } else if (pendidikan == "D3") {
        tunjanganPendidikan = 0.20 * gajiPokok;
    } else if (pendidikan == "S1") {
        tunjanganPendidikan = 0.30 * gajiPokok;
    }

    // Proses honor lembur
    if (jumlahJamKerja > 8) {
        honorLembur = (jumlahJamKerja - 8) * honorPerJam;
    }

    // Hitung total gaji
    totalGaji = gajiPokok + tunjanganJabatan + tunjanganPendidikan + honorLembur;

    // Output
    cout << "\nKaryawan yang bernama " << namaKaryawan << " mendapatkan:\n";
    cout << "Tunjangan Jabatan: Rp " << tunjanganJabatan << "\n";
    cout << "Tunjangan Pendidikan: Rp " << tunjanganPendidikan << "\n";
    cout << "Honor Lembur: Rp " << honorLembur << "\n";
    cout << "Total Gaji: Rp " << totalGaji << endl;

    return 0;
}

