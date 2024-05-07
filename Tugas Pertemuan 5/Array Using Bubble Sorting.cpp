#include <iostream>
#include <conio.h>
#include <string>
#include <vector>

using namespace std;

// Deklarasi Fungsi Sortingnya dulu
void bubbleSort (vector <int> & arr);

// Fungsi untuk mencetak Arraynya
void printArray (const vector <int> & arr) {
    for (int a = 0; a < arr.size(); ++a) {
        cout << arr [a] << " ";
    }
    cout << endl;
}

// Fungsi Utamanya
int main () {
    
    // Deklarasi Variabelnya
    int n;
    int angka;
    vector <int> arr;

    // Minta inputnya dari user
    cout << "Algoritma sortingnya : " << endl;
    cout << "- Bubble Sort" << endl;
    cout << endl;
    cout << "Masukkan Panjang Array : ";
    cin >> n;

    // Mengisi array dengan input dari user
    for (int a = 0; a < n; ++a) {
        cout << "Masukkan elemen ke-" << a + 1 << " : ";
        cin >> angka;
        arr.push_back (angka);
    }

    cout << "Array sebelum diurutkan : ";
    printArray (arr);

    cout << "Array setelah diurutkan : ";
    printArray (arr);

    getch();
return 0;    
}

// Implementasi Fungsi Sorting
void bubbleSort(vector <int> & arr) {
    for (int a = 0; a < arr.size() - 1; ++a) {
        for (int b = 0; b < arr.size() - a -1; ++b) {
            if (arr [b] > arr [b + 1]) {
                swap (arr [b], arr [b + 1]);
            }
        }
    }
}