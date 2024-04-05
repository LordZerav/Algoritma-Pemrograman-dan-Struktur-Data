# NOTASI ALGORITMA PSEUDO CODE

## **1. Menghitung Nilai Rata-rata Siswa**

*Memulai Program.*

*Deklarasi.*
```
- string    : NamaSiswa
- int       : NilaiPertandinganI, NilaiPertandinganII, NilaiPertandinganIII
- float     : NilaiRata_rata
- int       : juara
```

*Input.*
```
- NamaSiswa
- NilaiPertandinganI
- NilaiPertandinganII
- NilaiPertandinganIII
```

*Proses.*
```
- NilaiRata_rata = (NilaiPertandinganI + NilaiPertandinganII + NilaiPertandinganIII) / 3
```

*If.*
```
- Jika nilai rata-rata yang dihasilkan lebih besar dari 80, maka menjadi Juara I.
- Jika nilai rata-rata yang dihasilkan lebih besar dari 75, maka menjadi Juara II.
- Jika nilai rata-rata yang dihasilkan lebih besar dari 65, maka menjadi Juara III.
```

*Else.*
```
- Selain itu Tidak Juara.
```

*Output/Hasil.*
```
- NamaSiswa
- NilaiRata_rata
- Juara
```

*Mengakhiri Program.*

## **2. Menghitung Nilai Akhir Siswa**

*Memulai Program.*

*Deklarasi.*
```
- string    : NamaSiswa
- int       : NilaiKeaktifan, NilaiTugas, NilaiUjian
- float     : NilaiMurniKeaktifan, NilaiMurniTugas, NilaiMurniUjian, NilaiAkhir
```

*Input.*
```
- NamaSiswa
- NilaiKeaktifan
- NilaiTugas
- NilaiUjian
```

*Proses.*
```
- NilaiMurniKeaktifan = NilaiKeaktifan * 0.2
- NilaiMurniTugas = NilaiTugas * 0.3
- NilaiMurniUjian = NilaiUjian * 0.5
- NilaiAkhir = NilaiMurniKeaktifan + NilaiMurniTugas + NilaiMurniUjiam
```

*If.*
```
- Jika NilaiAkhir > 80, maka mendapat grade "A".
- Jika NilaiAkhir > 70, maka mendapat grade "B".
- Jika NilaiAkhir > 56, maka mendapat grade "C".
- Jika NilaiAkhir > 46, maka mendapat grade "D".
```

*Else.*
```
- Selain itu maka akan mendapat grade "E".
```

*Output/Hasil.*
```
- NamaSiswa
- NilaiMurniKeaktifan
- NilaiMurniTugas
- NilaiMurniUjian
- NilaiAkhir
```

*Mengakhiri Program.*

## **3. Menghitung Gaji Karyawan Kontrak**

*Memulai Program.*

*Deklarasi.*
```
- string    : NamaKaryawan
- int       : GajiPokok = 300000
- int       : GolonganJabatan
- float     : Tunjangan_Jabatan
- string      : Pendidikan
- double    : Tunjangan_Pendidikan
- int       : HonorLembur = 3500
- float     : Honor_Lembur
```

*Input.*
```
- NamaKaryawan
- GolonganJabatan
- Pendidikan
- Jumlah_JamKerja

```

*Proses.*
```
- Tunjangan_Jabatan = GolonganJabatan * GajiPokok
- Tunjangan_Pendidikan = Pendidikan * GajiPokok (string * int akan terjadi error, jadi tidak perlu ditulis)
- Honor_Lembur = (Jumlah_JamKerja - 8) * HonorLembur
```

*If.*
```
- Tunjangan_Jabatan
 - Jika GolonganJabatan == 1, maka mendapatkan 0.05
 - Jika GolonganJabatan == 2, maka mendapatkan 0.1
 - Jika GolonganJabatan == 3, maka mendapatkan 0.15

- Tunjangan_Pendidikan
 - Jika Pendidikan = 'SMA', maka mendapatkan 0.025
 - Jika Pendidikan = 'D1', maka mendapatkan 0.05
 - Jika Pendidikan = 'D3', maka mendapatkan 0.2
 - Jika Pendidikan = 'S1', maka mendapatkan 0.3

- Honor_Lembur
 - Jika (JamKerja > 8), maka mendapatkan honor lembur.
```

*Else.*
```
- Tunjangan_Jabatan selain Golongan == 1, Golongan == 2, Golongan == 3 tidak dapat tunjangan.
- Tunjangan_Pendidikan selain Pendidikan = 'SMA', Pendidikan = 'D1', Pendidikan = 'D3', Pendidikan = 'S1' tidak dapat tunjangan.
- Honor_Lembur JamKerja < 8 tidak dapat honor lembur.
```

*Output/Hasil.*
```
- NamaKaryawan
- Tunjangan_Jabatan
- Tunjangan_Pendidikan
- Honor_Lembur
```

*Mengakhiri Program.*
