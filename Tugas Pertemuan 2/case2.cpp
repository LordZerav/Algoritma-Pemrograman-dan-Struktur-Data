#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi Variabel
    string namaSiswa;
    int nilai_keaktifan, nilai_tugas, nilai_ujian;
    float nilai_murni_keaktifan, nilai_murni_tugas, nilai_murni_ujian, nilai_akhir;

    //Input Data Siswa
    cout << "===== Program Hitung Nilai Akhir =====" << endl;
    cout << "Nama Siswa : ";
    getline(cin,namaSiswa);

    //Input Data Nilai Siswa
    cout << "Nilai Keaktifan : ";
    cin >> nilai_keaktifan;

    cout << "Nilai Tugas : ";
    cin >> nilai_tugas;

    cout << "Nilai Ujian : ";
    cin >> nilai_ujian;

    //Mencari Nilai Murni
    nilai_murni_keaktifan = nilai_keaktifan * 0.2;
    nilai_murni_tugas = nilai_tugas * 0.5;
    nilai_murni_ujian = nilai_ujian * 0.3;

    cout << "Nilai Murni Keaktifan : " << nilai_murni_keaktifan << endl;
    cout << "Nilai Murni Tugas : " << nilai_murni_tugas << endl;
    cout << "Nilai Murni Ujian : " << nilai_murni_ujian << endl;

    //Mencari Nilai Akhir
    nilai_akhir = nilai_murni_keaktifan + nilai_murni_tugas + nilai_murni_ujian;

    //Output
    cout << "Siswa yang bernama " << namaSiswa << endl;
    cout << "Dengan Nilai Persentasi Yang Dihasilkan. ";
    cout << "Nilai Keaktifan * 20% : " << nilai_murni_keaktifan << endl;
    cout << "Nilai Tugas * 50% : " << nilai_murni_tugas << endl;
    cout << "Nilai Ujian * 30% : " << nilai_murni_ujian << endl;
    cout << "Jadi Siswa yang bernama " << namaSiswa;
    cout << " memperoleh nilai akhir sebesar " << nilai_akhir;

    return 0;

}