#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

struct PegawaiHonorer { // Buat nyimpen data Pegawai
    int no;
    string nama;
    int jamKerja;
    int kelebihanJamKerja;
    int honorHarian;
    int honorLembur;
    int totalHonor;
};

int main () {
    int jumlahData;

    // Input Jumlah Data Pegawai
    cout << "Masukkan Banyak Data Pegawai : ";
    cin >> jumlahData;

    // Vektor buat nyimpan data Pegawai
    vector <PegawaiHonorer> dataPegawai (jumlahData);

    // Input data Pegawainya
    for (int i = 0; i < jumlahData; ++i) {
        cout << "Data Pegawai ke-" << i + 1 << " :\n";
        dataPegawai[i].no = i + 1;

        cout << "Nama Pegawai : ";
        cin.ignore();
        getline(cin, dataPegawai[i].nama);

        cout << "Jumlah Jam Kerja : ";
        cin >> dataPegawai[i].jamKerja;

        cout << "Kelebihan Jam Kerja : ";
        cin >> dataPegawai[i].kelebihanJamKerja;

        cout << "Honor Harian yang Diperoleh : ";
        cin >> dataPegawai[i].honorHarian;

        // Hitung Honor Lembur dan Total Honor Lembur
        if (dataPegawai[i].kelebihanJamKerja >= 1) {
            dataPegawai[i].honorLembur = dataPegawai[i].kelebihanJamKerja * 5000;
        } else {
            dataPegawai[i].honorLembur = 0;
        }
        dataPegawai[i].totalHonor = (dataPegawai[i].honorHarian + dataPegawai[i].honorLembur);
    }

    cout << "\nTabel Honor Pegawai\n";
    cout << "|  No  |" << " Nama Pegawai |" << " Jam Kerja |" << " Honor Lembur |" << " Total Honor |" << endl;
    cout << setfill ('-') << setw(10) << setfill (' ') << endl;
    for (int i = 0; i < jumlahData; ++i) {
        cout << setw(4) << dataPegawai[i].no << setw(15) << dataPegawai[i].nama << setw(12) << dataPegawai[i].jamKerja << setw(12) << dataPegawai[i].honorLembur << setw(14) << fixed << setprecision(1) << dataPegawai[i].totalHonor << endl;
    
    }
    return 0;
}