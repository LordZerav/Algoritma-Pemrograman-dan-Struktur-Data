#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void tampilkanMenuUtama() {
    cout << "Menu Utama:\n";
    cout << "1. Tambah Jadwal\n";
    cout << "2. Hapus Jadwal\n";
    cout << "3. Cari Jadwal\n";
    cout << "4. Edit Jadwal\n";
    cout << "5. Tampilkan Daftar Jadwal\n";
    cout << "6. Keluar dan Simpan Data\n";
    cout << "Pilih opsi: ";
}
int main() {
    while (true) {
        tampilkanMenuUtama();
        int pilihan;
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahJadwal();
                break;
            case 2:
                hapusJadwal();
                break;
            case 3:
                cariJadwal();
                break;
            case 4:
                editJadwal();
                break;
            case 5:
                tampilkanDaftarJadwal();
                break;
            case 6:
                cout << "Data berhasil disimpan. Keluar program.\n";
                return 0;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    }
}
struct Jadwal {
    int id;
    string namaDokter;
    string spesialisasi;
    string hari;
    string jamPraktek;
};
void tampilkanMenuUtama() {
    cout << "Menu Utama:\n";
    cout << "1. Tambah Jadwal\n";
    cout << "2. Hapus Jadwal\n";
    cout << "3. Edit Jadwal\n";
    cout << "4. Cari Jadwal\n";
    cout << "5. Tampilkan Daftar Jadwal\n";
    cout << "6. Keluar dan Simpan Data\n";
    cout << "Pilih opsi: ";
}
void tambahJadwal() {
    Jadwal jadwalBaru;

    cout << "Masukkan ID: ";
    cin >> jadwalBaru.id;
    cin.ignore();

    cout << "Masukkan nama dokter: ";
    getline(cin, jadwalBaru.namaDokter);

    cout << "Masukkan spesialisasi: ";
    getline(cin, jadwalBaru.spesialisasi);

    cout << "Masukkan hari praktek: ";
    getline(cin, jadwalBaru.hari);

    cout << "Masukkan jam praktek: ";
    getline(cin, jadwalBaru.jamPraktek);

    ofstream file("jadwal.txt", ios::app);
    file << jadwalBaru.id << "," << jadwalBaru.namaDokter << "," << jadwalBaru.spesialisasi << "," << jadwalBaru.hari << "," << jadwalBaru.jamPraktek << "\n";
    file.close();

    cout << "Jadwal berhasil ditambahkan.\n";
}
void hapusJadwal() {
    int id;

    cout << "Masukkan ID jadwal yang akan dihapus: ";
    cin >> id;

    ifstream fileIn("jadwal.txt");
    ofstream fileOut("temp.txt");

    string line;
    bool found = false;

    while (getline(fileIn, line)) {
        size_t pos = line.find(",");

        int currId = stoi(line.substr(0, pos));
        if (currId != id) {
            fileOut << line << "\n";
        } else {
            found = true;
        }
    }

    fileIn.close();
    fileOut.close();

    remove("jadwal.txt");
    rename("temp.txt", "jadwal.txt");

    if (found) {
        cout << "Jadwal berhasil dihapus.\n";
    } else {
        cout << "Jadwal tidak ditemukan.\n";
    }
}
void cariJadwal() {
    string kataKunci;
    cout << "Masukkan nama dokter atau ID jadwal yang akan dicari: ";
    cin.ignore();
    getline(cin, kataKunci);

    ifstream file("jadwal.txt");
    string line;
    bool found = false;

    while (getline(file, line)) {
        size_t pos = line.find(",");
        int currId = stoi(line.substr(0, pos));
        string currNamaDokter = line.substr(pos + 1, line.find(",", pos + 1) - (pos + 1));

        if (to_string(currId) == kataKunci || currNamaDokter == kataKunci) {
            cout << line << "\n";
            found = true;
        }
    }

    file.close();
    if (!found) {
        cout << "Jadwal tidak ditemukan.\n";
    }
}
void editJadwal() {
    int id;
    cout << "Masukkan ID jadwal yang akan diedit: ";
    cin >> id;
    cin.ignore();

    ifstream fileIn("jadwal.txt");
    ofstream fileOut("temp.txt");
    string line;
    bool found = false;

    while (getline(fileIn, line)) {
        size_t pos = line.find(",");
        int currId = stoi(line.substr(0, pos));

        if (currId != id) {
            fileOut << line << "\n";
        } else {
            Jadwal jadwalBaru;
            jadwalBaru.id = id;
            cout << "Masukkan nama dokter baru: ";
            getline(cin, jadwalBaru.namaDokter);
            cout << "Masukkan spesialisasi baru: ";
            getline(cin, jadwalBaru.spesialisasi);
            cout << "Masukkan hari praktek baru: ";
            getline(cin, jadwalBaru.hari);
            cout << "Masukkan jam praktek baru: ";
            getline(cin, jadwalBaru.jamPraktek);

            fileOut << jadwalBaru.id << "," << jadwalBaru.namaDokter << "," << jadwalBaru.spesialisasi << "," << jadwalBaru.hari << "," << jadwalBaru.jamPraktek << "\n";
            found = true;
        }
}

fileIn.close();
fileOut.close();
remove("jadwal.txt");
rename("temp.txt", "jadwal.txt");

    if (found) {
        cout << "Jadwal berhasil diupdate.\n";
    } else {
        cout << "Jadwal tidak ditemukan.\n";
    }
}

void tampilkanDaftarJadwal() {
    ifstream file("jadwal.txt");
    string line;
    string temp;

    while (getline(file, line)) {
        string nextLine;
        getline(file, nextLine);

        size_t pos1 = line.find(",");
        size_t pos2 = nextLine.find(",");

        string namaDokter1 = line.substr(pos1 + 1, line.find(",", pos1 + 1) - (pos1 + 1));
        string namaDokter2 = nextLine.substr(pos2 + 1, nextLine.find(",", pos2 + 1) - (pos2 + 1));

        if (namaDokter1 > namaDokter2) {
            temp = line;
            line = nextLine;
            nextLine = temp;
        }

        cout << line << "\n";
        cout << nextLine << "\n";

        ofstream output;
        output.open("output.txt", ios_base::app);
        output << line << "\n";
        output << nextLine << "\n";
    
    }
    file.close();

}

int main() {
    tampilkanMenuUtama();

    while (true) {
        int pilihan;

        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahJadwal();
                break;

            case 2:
                hapusJadwal();
                break;

            case 3:
                cariJadwal();
                break;

            case 4:
                editJadwal();
                break;

            case 5:
                tampilkanDaftarJadwal();
                break;

            case 6:
                cout << "Data berhasil disimpan. Keluar program.\n";
                return 0;

            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    }

    return 0;
}