#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void tampilkanMenuUtama() {
    cout << "\n";
    cout << "=============================================================\n";
    cout << "|             PROGRAM MANAJEMEN JADWAL DOKTER               |\n";
    cout << "=============================================================\n";
    cout << "\n";

    cout << "Menu Utama :\n";
    cout << "\n";
    cout << "[1] Tambah Jadwal\n";
    cout << "[2] Hapus Jadwal\n";
    cout << "[3] Cari Jadwal\n";
    cout << "[4] Edit Jadwal\n";
    cout << "[5] Tampilkan Daftar Jadwal\n";
    cout << "[6] Keluar dan Simpan Data\n";
    cout << "\n";
    cout << "Pilih opsi: ";
}

// int main() {
//     tampilkanMenuUtama();

//     while (true) {
//         int pilihan;
//         cin >> pilihan;
//         switch (pilihan) {
//             case 1:
//                 tambahJadwal();
//                 break;
//             case 2:
//                 hapusJadwal();
//                 break;
//             case 3:
//                 cariJadwal();
//                 break;
//             case 4:
//                 editJadwal();
//                 break;
//             case 5:
//                 tampilkanDaftarJadwal();
//                 break;
//             case 6:
//                 cout << "Data berhasil disimpan. Keluar program.\n";
//                 return 0;
//             default:
//                 cout << "Pilihan tidak valid. Silakan coba lagi.\n";
//         }
//     } return 0;
// }

struct Jadwal {
    int id;
    string namaDokter;
    string spesialisasi;
    string hari;
    string jamPraktek;

    // Kontruktor Jadwal
    Jadwal() : id(0) {}

    // Format string untuk penyimpanan ke FILE
    string toString() const {
        return to_string(id) + ";" + namaDokter + ";" + spesialisasi + ";" + hari + ";" + jamPraktek + "\n";
    }
};

// void tampilkanMenuUtama() {
//     cout << "Menu Utama:\n";
//     cout << "1. Tambah Jadwal\n";
//     cout << "2. Hapus Jadwal\n";
//     cout << "3. Edit Jadwal\n";
//     cout << "4. Cari Jadwal\n";
//     cout << "5. Tampilkan Daftar Jadwal\n";
//     cout << "6. Keluar dan Simpan Data\n";
//     cout << "Pilih opsi: ";
// }

void tambahJadwal() {
    Jadwal jadwalBaru;
    system("cls");
    cout << "\n";
    cout << "======================================\n";
    cout << "|       TAMBAHKAN JADWAL DOKTER      |\n";
    cout << "======================================\n";
    cout << "\n";
    cout << "Masukkan ID \t: ";
    cin >> jadwalBaru.id;
    cin.ignore();
    cout << "Masukkan nama dokter \t: ";
    getline(cin, jadwalBaru.namaDokter);
    cout << "Masukkan spesialisasi \t: ";
    getline(cin, jadwalBaru.spesialisasi);
    cout << "Masukkan hari praktek \t: ";
    getline(cin, jadwalBaru.hari);
    cout << "Masukkan jam praktek \t: ";
    getline(cin, jadwalBaru.jamPraktek);

    ofstream file("jadwal.txt", ios::app);
    file << jadwalBaru.id << "," << jadwalBaru.namaDokter << "," << jadwalBaru.spesialisasi << "," << jadwalBaru.hari << "," << jadwalBaru.jamPraktek << "\n";
    file.close();

    system("cls");
    cout << "Jadwal berhasil ditambahkan.\n";
}

void hapusJadwal() {
    int id;
    system("cls");
    cout << "\n";
    cout << "======================================\n";
    cout << "|       MENGHAPUS JADWAL DOKTER      |\n";
    cout << "======================================\n";
    cout << "\n";
    cout << "Masukkan ID jadwal yang akan dihapus \t: ";
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
        system("cls");
        cout << "Jadwal berhasil dihapus.\n";
    } else {
        system("cls");
        cout << "Jadwal tidak ditemukan.\n";
    }   
}

void cariJadwal() {
    string kataKunci;
    system("cls");
    cout << "\n";
    cout << "======================================\n";
    cout << "|       MENCARI JADWAL DOKTER        |\n";
    cout << "======================================\n";
    cout << "\n";
    cout << "Masukkan Nama Dokter atau ID Jadwal yang akan dicari \t: ";
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
            system("cls");
            cout << line << "\n";
            found = true;
        }
    }

    file.close();
    if (!found) {
        system("cls");
        cout << "Jadwal tidak ditemukan.\n";
    }
}

void editJadwal() {
    int id;
    system("cls");
    cout << "\n";
    cout << "======================================\n";
    cout << "|       MENGEDIT JADWAL DOKTER       |\n";
    cout << "======================================\n";
    cout << "\n";
    cout << "Masukkan ID Jadwal yang akan diedit \t: ";
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
            system("cls");
            cout << "ID Jadwal ditemukan\n";
            Jadwal jadwalBaru;
            cout << "\n";
            cout << "=============================================\n";
            cout << "|       MENAMBAHKAN JADWAL DOKTER BARU      |\n";
            cout << "=============================================\n";
            cout << "\n";
            jadwalBaru.id = id;
            cout << "Masukkan Nama Dokter Baru \t: ";
            getline(cin, jadwalBaru.namaDokter);
            cout << "Masukkan Spesialisasi Baru \t: ";
            getline(cin, jadwalBaru.spesialisasi);
            cout << "Masukkan Hari Praktek Baru \t: ";
            getline(cin, jadwalBaru.hari);
            cout << "Masukkan Jam Praktek Baru \t: ";
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
        system("cls");
        cout << "Jadwal berhasil diupdate.\n";
    } else {
        system("cls");
        cout << "ID jadwal tidak ditemukan.\n";
    }
}

void tampilkanDaftarJadwal() {
    system("cls");
    ifstream file("jadwal.txt");
    string line;
    string temp;

    cout << "\n";
    cout << "===============================================\n";
    cout << "|       MENAMPILKAN DAFTAR JADWAL DOKTER      |\n";
    cout << "===============================================\n";

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