#include <iostream>
#include <string>
using namespace std;

int main() {
    // Judul program
    cout << "PROGRAM HITUNG NILAI RATA-RATA\n";

    // Deklarasi variabel
    string namaSiswa;
    double nilai1, nilai2, nilai3, nilaiRataRata;
    string juara;

    // Input data siswa
    cout << "Nama Siswa : ";
    getline(cin, namaSiswa);

    cout << "Nilai Pertandingan I : ";
    cin >> nilai1;

    cout << "Nilai Pertandingan II : ";
    cin >> nilai2;

    cout << "Nilai Pertandingan III : ";
    cin >> nilai3;

    // Menghitung nilai rata-rata
    nilaiRataRata = (nilai1 + nilai2 + nilai3) / 3;

    // Menentukan juara
    if (nilaiRataRata > 80) {
        juara = "I";
    } else if (nilaiRataRata > 75) {
        juara = "II";
    } else if (nilaiRataRata > 65) {
        juara = "III";
    } else {
        juara = "tidak juara";
    }

    // Menampilkan hasil
    cout << "Siswa yang bernama " << namaSiswa << "\n";
    cout << "Memperoleh nilai rata-rata " << nilaiRataRata << " dan menjadi juara ke-" << juara << " dari hasil perlombaan yang diikutinya." << endl;

    return 0;
}

