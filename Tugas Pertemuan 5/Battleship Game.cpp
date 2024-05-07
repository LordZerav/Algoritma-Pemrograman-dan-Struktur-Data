#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main () {
    // "1" artinya ada kapal.
    bool Kapal_Jawir [8][8] = {
        { 0, 1, 0, 1, 0, 0, 1, 0 },
        { 0, 1, 0, 0, 1, 0, 0, 0 },
        { 0, 1, 0, 1, 0, 0, 1, 0 },
        { 0, 1, 0, 0, 1, 0, 0, 0 },
        { 0, 1, 0, 1, 0, 0, 1, 0 },
        { 0, 1, 0, 0, 1, 0, 0, 0 },
        { 0, 1, 0, 1, 0, 0, 1, 0 },
        { 0, 1, 0, 0, 1, 0, 0, 0 }
    };

    // Untuk mengetahui berapa kali tembakan yang telah berhasil mengenai target,
    // Berapa banyak turn yang telah dilakukan.
    int Kena_Bossku = 0;
    int Turns = 0;

    // Perulangan untuk pemain sampai mereka bisa mengenai 8 kapal tersebut.
    while (Kena_Bossku < 8) {
        int baris, kolom;

        cout << "Pilih Koordinat yang Benerlah Wir\n";

        // Meminta pemain untuk memilih baris dan kolom.
        cout << "Pilih baris antara 0 sampai 7 : ";
        cin >> baris;

        cout << "Pilih kolom antara 0 sampai 7 : ";
        cin >> kolom;

        // Mengecek apakah kapalnya ada di koordinat tersebut.
        if (Kapal_Jawir [baris][kolom]) {
            Kapal_Jawir [baris][kolom] = 0; // Ketika mengenai Kapal, maka hapus kapal ini.

            // Menaikkan jumlah tembakan yang berhasil.
            Kena_Bossku++;

            // Ngasih tahu pemain kalau mereka picek alias gak kena.
            // Memberitahu berapa kapal yang telah kena Tembak.
        } else {
            cout << "Awokawokawokawok gak kena njir\n\n"; // Pemain gagal mengenai kapal. 
        }

        // Menghitung berapa banyak pemain telah melakukan turn
        Turns++;
    }

    cout << "Akhirnya Menang :v\n";
    cout << "GG bro, kamu menang dalam " << Turns << "giliran saja";

    getch();
return 0;

}