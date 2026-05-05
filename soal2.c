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

int menghitungkurungTambahan(const char *segel) {
    int kurungBuka = 0; 
    int kurungTambahan = 0; 
    for (int i=0; segel[i] != '\0'; i++) {
        if (segel[i] == '(') {
            kurungBuka++; 
        } else if (segel[i] == ')') {
            if (kurungBuka > 0) {
                kurungBuka--;
            } else {
                kurungTambahan++; 
            }
        }
    }
    kurungTambahan += kurungBuka;
    return kurungTambahan;
}

int main () {
    char segel [MAX_LENGTH];
    scanf("%s", segel);
    int tambahan = menghitungkurungTambahan(segel);
    printf("%d\n", tambahan);
    return 0;
}
