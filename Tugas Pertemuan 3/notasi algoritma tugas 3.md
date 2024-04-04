# NOTASI ALGORITMA PSEUDO CODE

## **1. Menghitung Nilai Rata-rata Siswa**

*Memulai Program.*

*Deklarasi.*
```
- string    : NamaSiswa
- float     : NilaiPertandinganI, NilaiPertandinganII, NilaiPertandinganIII, NilaiRata_rata
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
- Di bawah 65 tidak juara.
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
- float     : NilaiKeaktifan, NilaiTugas, NilaiUjian, NilaiMurniKeaktifan, NilaiMurniTugas, NilaiMurniUjian, NilaiAkhir
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
- NilaiAkhir < 46, maka akan mendapat grade "E".
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