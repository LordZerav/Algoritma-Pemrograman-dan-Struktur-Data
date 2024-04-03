#include <iostream>
#include <string>

using namespace std;

int main () {
    // Deklarasi variabel
    int NIM;
    string Nama_Siswa;
    int nilaiTugas_I, nilaiTugas_II, nilaiTugas_III, nilaiRata_rata;

    //Input Data Siswa
    cout << "===== Program Hitung Nilai Rata-rata =====" << endl;

    cout << "NIM Siswa : " << endl;
    cin >> NIM;

    cout << "Nama Siswa : " << endl;
    cin >> Nama_Siswa;

    //Input Nilai Tugas
    cout << "Nilai Tugas I : " << endl;
    cin >> nilaiTugas_I;

    cout << "Nilai Tugas II : " << endl;
    cin >> nilaiTugas_II;

    cout << "Nilai Tugas III : " << endl;
    cin >> nilaiTugas_III;

    //Penghitungan nilaiRata_rata
    nilaiRata_rata = (nilaiTugas_I + nilaiTugas_II + nilaiTugas_III) / 3;

    //Output
    cout << "NIM " << NIM;
    cout << " Siswa yang bernama " << Nama_Siswa;
    cout << " Memperoleh nilai rata_rata " << nilaiRata_rata; 
    cout << " dari hasil tugas yang diikutinya. " << endl;

    return 0;
}