#include <iostream>
using namespace std;
int main() {
    
    string nama;
    int NIM, nilai1, nilai2, nilai3, rata2;
    
    cout << "Algotitma Menghitung Nilai Rata-rata Siswa" << endl;
    cout << "Nama Siswa: ";
    cin >>nama;
    cout << " Masukan NIM: ";
    cin >>NIM;
    cout << " Masukan Nilai Tugas 1: ";
    cin >>nilai1;
    cout << " Masukan Nilai Tugas 2: ";
    cin >>nilai2;
    cout << " Masukan Nilai Tugas 3: ";
    cin >>nilai3;
    
    rata2 = (nilai1+nilai2+nilai3)/3;
    
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "Nama Siswa: " << nama << endl;
    cout << "NIM Siswa : " << NIM << endl;
    cout << " Nilai Tugas 1: " << nilai1 << endl;
    cout << " Nilai Tugas 2: " << nilai2 << endl;
    cout << " Nilai Tugas 3: " << nilai3 << endl;
    cout << " Rata-rata Nilai Siswa: " << rata2 << endl;
    cout << " NIM " << NIM << " Siswa yang bernama " << nama << endl;
	cout << " Memperoleh nilai rata-rata " << rata2 << " dari hasil tugas yang diikutinya.";
    return 0;
}
