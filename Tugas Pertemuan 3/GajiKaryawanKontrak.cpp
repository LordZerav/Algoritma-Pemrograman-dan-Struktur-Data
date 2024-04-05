#include <iostream>
#include <string>

using namespace std;

int main () {
    //Deklarasi Variabel
    string NamaKaryawan;
    int GajiPokok = 300000;
    int GolonganJabatan;
    float TunjanganJabatan;
    string Pendidikan;
    double TunjanganPendidikan;
    int HonorLembur = 3500;
    float Honor_Lembur;
    int JamKerja;

    //Input Data Karyawan
    cout << "---- PROGRAM HITUNG GAJI KARYAWAN KONTRAK ----"<< endl;
    cout << "Nama Karyawan : ";
    getline(cin,NamaKaryawan);

    cout << "Golongan Jabatan : ";
    cin >> GolonganJabatan;

    cout << "Pendidikan : ";
    cin >> Pendidikan;

    cout << "Jumlah Jam Kerja : ";
    cin >> JamKerja;

    //Proses (Tanpa Tunjangan Pendidikan karena terjadi eror pada operasi yang type datanya berupa string (Pendidikan) dengan int(GajiPokok)).
    TunjanganJabatan = GolonganJabatan * GajiPokok;
    Honor_Lembur = (JamKerja - 8) * HonorLembur;

    //If Case Tunjangan Jabatan
    if (GolonganJabatan == 1) {
        TunjanganJabatan = 0.05 * GajiPokok;
    } else if (GolonganJabatan == 2) {
        TunjanganJabatan = 0.10 * GajiPokok;
    } else if (GolonganJabatan == 3) {
        TunjanganJabatan = 0.15 * GajiPokok;
    }

    //Else Tunjangan Jabatan
    else {
        TunjanganJabatan = 0;
    }

    //If Tunjangan Pendidikan
    if (Pendidikan =="SMA") {
        TunjanganPendidikan = 0.025 * GajiPokok;
    } else if (Pendidikan =="D1") {
        TunjanganPendidikan = 0.05 * GajiPokok;
    } else if (Pendidikan =="D3") {
        TunjanganPendidikan = 0.2 * GajiPokok;
    } else if (Pendidikan =="S1") {
        TunjanganPendidikan = 0.3 * GajiPokok;
    }

    //Else Tunjangan Pendidikan
    else {
        TunjanganPendidikan = 0;
    }

    //If Honor Lembur
    if (JamKerja > 8) {
        Honor_Lembur = (JamKerja - 8) * HonorLembur;
    }

    //Else Honor Lembur
    else {
        Honor_Lembur = 0;
    }

    //Output/Hasil
    cout << "Karyawan yang bernama " << NamaKaryawan << endl;
    cout << "Honor yang diterima : " << endl;
    cout << "Tunjangan Jabatan Rp. " << TunjanganJabatan << endl;
    cout << "Tunjangan Pendidikan Rp. " << TunjanganPendidikan << endl;
    cout << "Honor Lembur Rp. " << Honor_Lembur << endl;

return 0;

}