#include <iostream>
#include <string>

using namespace std;

int main () {
    // Deklarasi Variabel
    string NamaSiswa;
    int NilaiKeaktifan, NilaiTugas, NilaiUjian;
    float NilaiMurniKeaktifan, NilaiMurniTugas, NilaiMurniUjian, NilaiAKhir;
    char Grade;

    //Input Data Siswa
    cout << "---- PROGRAM HITUNG NILAI AKHIR ----" << endl;
    cout << "Nama Siswa : ";
    getline(cin, NamaSiswa);

    //Input Nilai
    cout << "Nilai Keaktifan : ";
    cin >> NilaiKeaktifan;

    cout << "Nilai Tugas : ";
    cin >> NilaiTugas;

    cout << "Nilai Ujian : ";
    cin >> NilaiUjian;

    //Proses
    NilaiMurniKeaktifan = NilaiKeaktifan * 0.2;
    NilaiMurniTugas = NilaiTugas * 0.3;
    NilaiMurniUjian = NilaiUjian * 0.5;
    NilaiAKhir = NilaiMurniKeaktifan + NilaiMurniTugas + NilaiMurniUjian;

    //If
    if (NilaiAKhir > 80.00) {
        Grade ='A';

    } else if (NilaiAKhir > 70.00) {
        Grade ='B';

    } else if (NilaiAKhir > 56.00) {
        Grade ='C';

    } else if (NilaiAKhir > 46,00) {
        Grade ='D';
    }

    //Else
    else {
        Grade ='E';
    }

    //Output/Hasil
    cout << "Siswa yang bernama " << NamaSiswa << endl;
    cout << "Dengan Nilai Persentasi Yang dihasilkan. " << endl;
    cout << "Nilai Keaktfian * 20% : " << NilaiMurniKeaktifan << endl;
    cout << "Nilai Tugas * 30% : " << NilaiMurniTugas << endl;
    cout << "Nilai Ujian * 50% : " << NilaiMurniUjian << endl;
    cout << "Jadi Siswa yang bernama " << NamaSiswa;
    cout << " memperoleh nilai akhir sebesar " << NilaiAKhir;
    cout << " dengan grade " << Grade;

return 0;

}