/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 04 - Dynamic Structures
 *   Hari dan Tanggal    : Selasa, 5 Mei 2026
 *   Nama (NIM)          : Fesya Dea Azzahra (13224049)
 *   Nama File           : soal2_Modul4.c
 *   Deskripsi           : Sistem menghitung berapa banyak simbol kurung tambahan paling sedikit yang diperlukan agar 
 *                         segel mantra menjadi valid. Hanya boleh menggunakan struct atau Dynamic Array.
 *                         I : misal : ()))((
 *                         O : 4
 */
// Soal 2: Tambahan Segel

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int menghitungkurungTambahan(const char *segel) {  //Fungsi untuk menghitung kurung tambahan yang diperlukan agar string valid
    int kurungBuka = 0;  //Variabel untuk menghitung kurung buka dalam string input
    int kurungTambahan = 0;   //Variabel untuk menghitung kurung yang diperlukan agar semua string input berpasangan
    for (int i=0; segel[i] != '\0'; i++) {
        if (segel[i] == '(') {  //Jika karakter saat ini adalah '(', maka jumlah kurungBuka bertambah 1
            kurungBuka++; 
        } else if (segel[i] == ')') {  //jika karakter saat ini adalah ')', maka jumlah kurungBuka berkurang 1 dan jika jumlah kurungBuka = 0, maka kurungTambahan bertambah 1 untuk melengkapi ')' dengan '('
            if (kurungBuka > 0) {
                kurungBuka--;
            } else {
                kurungTambahan++; 
            }
        }
    }
    kurungTambahan += kurungBuka;  //Jika masih ada '(' yang belum berpasangan, maka jumlah kurungBuka ditambahkan ke kurungTambahan untuk melengkapi '(' dengan ')'
    return kurungTambahan;
}

int main () {
    char segel [MAX_LENGTH];
    scanf("%s", *segel); //Membaca input string dari pengguna dan menyimpan string dalam array segel
    int tambahan = menghitungkurungTambahan(*segel);
    printf("%d\n", tambahan);
    return 0;
}




//https://www.geeksforgeeks.org/dsa/how-do-dynamic-arrays-work/
//https://levelup.gitconnected.com/learning-c-arithmetic-operators-and-assignment-operators-8731efbf1b0e
//https://www.geeksforgeeks.org/c/how-to-create-a-dynamic-array-of-strings-in-c/
