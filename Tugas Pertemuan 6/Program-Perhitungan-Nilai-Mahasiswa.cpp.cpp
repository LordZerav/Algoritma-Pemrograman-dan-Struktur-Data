#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

struct Mahasiswa { // Buat nyimpen data Mahasiswa
    int no;
    string nama;
    char nilaiHuruf;
    float nilaiUTS;
    float nilaiUAS;
    float nilaiAkhir;
};

int main () {
    int jumlahData;

    // Input Jumlah Data Mahasiswa
    cout << "Masukkan Banyak Data Mahasiswa : ";
    cin >> jumlahData;

    // Vektor buat nyimpan data Mahasiswa
    vector <Mahasiswa> dataMahasiswa (jumlahData);

    // Input data Mahasiswanya
    for (int i = 0; i < jumlahData; ++i) {
        cout << "Data Mahasiswa ke-" << i + 1 << " :\n";
        dataMahasiswa[i].no = i + 1;

        cout << "Nama Mahasiswa : ";
        cin.ignore();
        getline(cin, dataMahasiswa[i].nama);

        cout << "Nilai UTS : ";
        cin >> dataMahasiswa[i].nilaiUTS;

        cout << "Nilai UAS : ";
        cin >> dataMahasiswa[i].nilaiUAS;

        // Hitung Nilai Akhir dan Nilai Huruf
        dataMahasiswa[i].nilaiAkhir = (dataMahasiswa[i].nilaiUTS * 0.6 + dataMahasiswa[i].nilaiUAS * 0.4);
        if (dataMahasiswa[i].nilaiAkhir >= 80) {
            dataMahasiswa[i].nilaiHuruf = 'A';
        } else if (dataMahasiswa[i].nilaiAkhir >= 70) {
            dataMahasiswa[i].nilaiHuruf = 'B';            
        } else if (dataMahasiswa[i].nilaiAkhir >= 56) {
            dataMahasiswa[i].nilaiHuruf = 'C';
        } else if (dataMahasiswa[i].nilaiAkhir >= 47) {
            dataMahasiswa[i].nilaiHuruf = 'D';
        } else {
            dataMahasiswa[i].nilaiHuruf = 'E';
        }
    }

    // Output Tabel Data Mahasiswa
    // cout << "\nTabel Nilai Mahasiswa :\n";
    // cout << setw(4) << "No" << setw(20) << "Nama Mahasiswa" << setw(10) << "Nilai UTS" << setw(10) << "Nilai UAS" << setw(12) << "Nilai Akhir" << setw(12) << "Nilai Huruf" << endl;
    // cout << setfill ('-') << setw(68) << setfill (' ') << endl;

    cout << "\nTabel Nilai Mahasiswa\n";
    cout << "|  No  |" << " Nama Mahasiswa |" << " Nilai UTS |" << " Nilai UAS |" << " Nilai Akhir |" << " Nilai Huruf |" << endl;
    cout << setfill ('-') << setw(10) << setfill (' ') << endl;
    for (int i = 0; i < jumlahData; ++i) {
        cout << setw(4) << dataMahasiswa[i].no << setw(15) << dataMahasiswa[i].nama << setw(12) << dataMahasiswa[i].nilaiUTS << setw(12) << dataMahasiswa[i].nilaiUAS << setw(14) << fixed << setprecision(1) << dataMahasiswa[i].nilaiAkhir << setw(14) << dataMahasiswa[i].nilaiHuruf << endl;
    
    }
    return 0;
}