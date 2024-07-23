# ALGORITMA PEMROGRAMAN DAN STRUKTUR DATA

## Penjelasan Codingan
```
---

## Penjelasan Kode Program Perpustakaan

### Pendahuluan
Program ini merupakan sistem manajemen perpustakaan yang ditulis dalam bahasa C++. Program ini menggunakan kelas (class) untuk merepresentasikan buku dan perpustakaan. Fungsi utama dari program ini adalah untuk menambah, mencari, mengedit, meminjam, mengembalikan, dan menampilkan daftar buku yang ada di perpustakaan. Data buku disimpan dalam file teks `DBase.txt`.

### Struktur Kode
Kode program terdiri dari dua kelas utama:

1. **Kelas Buku (`Buku`)**
2. **Kelas Perpustakaan (`Perpustakaan`)**

#### Kelas Buku
Kelas `Buku` merepresentasikan entitas buku dalam perpustakaan. Kelas ini memiliki atribut-atribut berikut:
- `judul`: menyimpan judul buku.
- `pengarang`: menyimpan nama pengarang buku.
- `idbuku`: menyimpan ID unik buku.
- `no`: menyimpan nomor buku.
- `tahunterbit`: menyimpan tahun terbit buku.
- `stokbuku`: menyimpan jumlah stok buku.
- `statusbuku`: menyimpan status buku, apakah dipinjam (`true`) atau tersedia (`false`).

Konstruktor kelas `Buku` menginisialisasi atribut-atribut tersebut dengan nilai default. Metode `toString` digunakan untuk mengonversi data buku menjadi format string yang sesuai untuk penyimpanan di file.

#### Kelas Perpustakaan
Kelas `Perpustakaan` bertanggung jawab untuk mengelola semua buku yang ada di perpustakaan. Kelas ini memiliki atribut `bukuList`, yaitu vektor yang menyimpan objek-objek `Buku`, dan `fileName` yang menyimpan nama file data buku.

Kelas ini memiliki beberapa metode penting:

- **`bacaData`**: Membaca data buku dari file dan menyimpannya ke dalam `bukuList`.
- **`simpanData`**: Menyimpan data buku dari `bukuList` ke file.
- **`tambahBuku`**: Menambahkan buku baru ke perpustakaan.
- **`cariBuku`**: Mencari buku berdasarkan judul.
- **`editBuku`**: Mengedit informasi buku berdasarkan judul.
- **`pinjamBuku`**: Meminjam buku berdasarkan judul.
- **`kembalikanBuku`**: Mengembalikan buku berdasarkan judul.
- **`tampilkanBuku`**: Menampilkan semua buku yang ada di perpustakaan.
- **`keluar`**: Keluar dari program.

### Penjelasan Metode dalam Kelas Perpustakaan

1. **`bacaData`**: 
   - Membuka file `DBase.txt` dan membaca setiap baris.
   - Setiap baris yang dibaca dipecah menjadi atribut-atribut buku dan dimasukkan ke dalam objek `Buku`.
   - Objek `Buku` kemudian ditambahkan ke `bukuList`.

2. **`simpanData`**: 
   - Membuka file `DBase.txt` untuk ditulisi.
   - Menuliskan data setiap buku dalam `bukuList` ke file dengan format yang sudah ditentukan oleh metode `toString` dari kelas `Buku`.

3. **`tambahBuku`**: 
   - Meminta pengguna untuk memasukkan jumlah buku yang ingin ditambahkan.
   - Untuk setiap buku baru, meminta pengguna untuk memasukkan ID buku, judul, nama pengarang, tahun terbit, dan jumlah stok.
   - Menambahkan buku ke `bukuList` dan menyimpan data ke file.

4. **`cariBuku`**: 
   - Meminta pengguna untuk memasukkan judul buku yang dicari.
   - Mencari buku dalam `bukuList` berdasarkan judul yang dimasukkan.
   - Menampilkan informasi buku jika ditemukan, atau pesan bahwa buku tidak ditemukan.

5. **`editBuku`**: 
   - Meminta pengguna untuk memasukkan judul buku yang ingin diedit.
   - Mencari buku dalam `bukuList` berdasarkan judul yang dimasukkan.
   - Meminta pengguna untuk memasukkan pengarang baru dan tahun terbit baru jika buku ditemukan.
   - Menyimpan perubahan ke file.

6. **`pinjamBuku`**: 
   - Meminta pengguna untuk memasukkan judul buku yang ingin dipinjam.
   - Mencari buku dalam `bukuList` berdasarkan judul yang dimasukkan.
   - Jika buku ditemukan dan tersedia, mengubah status buku menjadi dipinjam dan menyimpan perubahan ke file.

7. **`kembalikanBuku`**: 
   - Meminta pengguna untuk memasukkan judul buku yang ingin dikembalikan.
   - Mencari buku dalam `bukuList` berdasarkan judul yang dimasukkan.
   - Jika buku ditemukan dan sedang dipinjam, mengubah status buku menjadi tersedia dan menyimpan perubahan ke file.

8. **`tampilkanBuku`**: 
   - Menampilkan informasi semua buku yang ada di `bukuList`.

9. **`keluar`**: 
   - Menampilkan pesan terima kasih dan keluar dari program.

### Program Utama

Program utama berada di dalam fungsi `main`. Fungsi ini memuat data buku dari file, lalu menampilkan menu interaktif untuk pengguna. Pengguna dapat memilih salah satu layanan yang tersedia seperti menambah buku, mencari buku, mengedit informasi buku, meminjam buku, mengembalikan buku, menampilkan daftar buku, atau keluar dari program.

Berikut adalah alur utama dalam fungsi `main`:
1. Membaca data buku dari file dengan memanggil metode `bacaData`.
2. Menampilkan menu utama dan meminta pengguna untuk memilih layanan.
3. Berdasarkan pilihan pengguna, memanggil metode yang sesuai dari objek `Perpustakaan`.
4. Jika pilihan tidak valid, menampilkan pesan kesalahan dan meminta pengguna untuk mencoba lagi.

---
```