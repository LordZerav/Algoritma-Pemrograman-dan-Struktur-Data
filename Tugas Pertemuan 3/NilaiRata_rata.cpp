#include <iostream>
#include <string>

using namespace std;

int main () {
    //Deklarasi Variabel
    string NamaSiswa;
    int NilaiPertandinganI, NilaiPertandinganII, NilaiPertandinganIII;
    float NilaiRata_rata;
    int Juara;

    //Input Data Siswa
    cout << "---- PROGRAM HITUNG NILAI RATA-RATA ----" << endl;
    cout << "Nama Siswa : ";
    getline(cin, NamaSiswa);
    
    //Input Nilai
    cout << "Nilai Pertandingan I : ";
    cin >> NilaiPertandinganI;
    cout << "Nilai Pertandingan II : ";
    cin >> NilaiPertandinganII;
    cout << "Nilai Pertandingan III : ";
    cin >> NilaiPertandinganIII;

    //Proses
    NilaiRata_rata = (NilaiPertandinganI + NilaiPertandinganII + NilaiPertandinganIII) / 3.0;
    cout << "Nilai Rata-rata : " << NilaiRata_rata << endl;

    //If
    if (NilaiRata_rata > 80) {
        Juara = 1;
    }

    else if (NilaiRata_rata > 75) {
        Juara = 2;
    }

    else if (NilaiRata_rata > 65) {
        Juara = 3;
    }

    // Else
    else {
        Juara = 0; 
    }

    //Output/Hasil
    cout << "Siswa yang bernama " << NamaSiswa << endl;
    cout << "Memperoleh nilai rata-rata " << NilaiRata_rata;
    cout << " dan menjadi juara ke- " << Juara;
    cout << " dari hasil perlombaan yang diikutinya. ";

return 0;

}