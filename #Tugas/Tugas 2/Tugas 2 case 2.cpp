#include <iostream>
using namespace std;

int main(){
	string nama;
	int nilai_keaktifan, nilai_tugas, nilai_ujian, nilai_murni_keaktifan, nilai_murni_tugas, nilai_murni_ujian, nilai_akhir;
	
	cout << "PROGRAM HITUNG NILAI AKHIR" <<endl;
	cout << " Masukan Nama Siswa :" ;
	cin>>nama;
	cout << " Masukan Nilai Keaktifan :" ;
	cin>>nilai_keaktifan;
	cout << " Masukan Nilai Tugas :" ;
	cin>>nilai_tugas;
	cout << " Masukan Nilai Ujian :" ;
	cin>>nilai_ujian;
	
	nilai_murni_keaktifan = nilai_keaktifan*0.2;
	nilai_murni_tugas = nilai_tugas*0.5;
	nilai_murni_ujian = nilai_ujian*0.3;
	
	nilai_akhir = nilai_murni_keaktifan + nilai_murni_tugas + nilai_murni_ujian;
	
	cout << "PROGRAM HITUNG NILAI AKHIR" <<endl;
	cout << "Nama Siswa : " << nama << endl;
	cout << "Nilai Keaktifan : " << nilai_murni_keaktifan << endl;
	cout << "Nilai Tugas : " << nilai_murni_tugas << endl;
	cout << "Nilai Ujian : " << nilai_murni_ujian << endl;
	cout << "Nilai Akhir : " << nilai_akhir << endl;
	cout << "Jadi Siswa yang bernama " << nama << " memperoleh nilai akhir sebesar " << nilai_akhir << endl;
	
	return 0;
}
