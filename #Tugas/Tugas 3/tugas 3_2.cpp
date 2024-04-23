#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Judul program
    cout << "PROGRAM HITUNG NILAI AKHIR\n";

    // Deklarasi variabel
    string namaSiswa;
    double nilaiKeaktifan, nilaiTugas, nilaiUjian;
    double nilaiMurniKeaktifan, nilaiMurniTugas, nilaiMurniUjian, nilaiAkhir;
    char grade;

    // Input data siswa
    cout << "Nama Siswa: ";
    getline(cin, namaSiswa);

    cout << "Nilai Keaktifan: ";
    cin >> nilaiKeaktifan;

    cout << "Nilai Tugas: ";
    cin >> nilaiTugas;

    cout << "Nilai Ujian: ";
    cin >> nilaiUjian;

    // Menghitung nilai murni
    nilaiMurniKeaktifan = nilaiKeaktifan * 0.20;
    nilaiMurniTugas = nilaiTugas * 0.30;
    nilaiMurniUjian = nilaiUjian * 0.50;

    // Menghitung nilai akhir
    nilaiAkhir = nilaiMurniKeaktifan + nilaiMurniTugas + nilaiMurniUjian;

    // Menentukan grade
    if (nilaiAkhir > 80) {
        grade = 'A';
    } else if (nilaiAkhir > 70) {
        grade = 'B';
    } else if (nilaiAkhir > 56) {
        grade = 'C';
    } else if (nilaiAkhir > 46) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    // Menampilkan hasil
    cout << fixed << setprecision(2); // Set presisi untuk output desimal
    cout << "Siswa yang bernama " << namaSiswa << "\n";
    cout << "Dengan Nilai Persentasi Yang dihasilkan.\n";
    cout << "Nilai Keaktifan * 20% : " << nilaiMurniKeaktifan << "\n";
    cout << "Nilai Tugas * 30% : " << nilaiMurniTugas << "\n";
    cout << "Nilai Ujian * 50% : " << nilaiMurniUjian << "\n";
    cout << "Jadi Siswa yang bernama " << namaSiswa << " memperoleh nilai akhir sebesar " << nilaiAkhir << " dengan grade " << grade << endl;

    return 0;
}

