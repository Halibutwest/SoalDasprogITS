//2. Nida memiliki SPBU dan perlu program komputer untuk menyimpan info bahan bakar.
//Programnya bisa mencetak stok semua bahan bakar dan menginformasikan jika stok <20% dengan status "stok menipis".
//Selain itu, Nida ingin programnya dapat mencari bahan bakar sesuai range stok tertentu, beri pesan jika tidak ada record.
//Dia ingin program tetap berjalan kecuali jika dia memilih menu keluar. Bantulah Nida membuat program beserta fungsi/prosedurnya!
//Contoh stok bahan bakar:
//Premium 88 - 90%
//Pertalite 90 - 25%
//Pertamax 92 - 16% (stok menipis)
//Pertamax Turbo 98 - 75%
//
//Range stok: 0 30
//Pertalite 90 - 25%
//Pertamax 92 - 16%
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
struct benzin{
    char jenis[25];
    int oktan, stok;
};
int main(){
int i,a,b,c,Z,x;
printf("-------------------------\n");
printf("---Program Stok Benzin---\n");
printf("-------------------------\n");
printf("\n");
do{
printf("-------------------------\n");
printf("---Jumlah jenis benzin---\n");
printf("-------------------------\n");
scanf("%d", &Z);
struct benzin N[Z];
for(i = 0; i < Z; i++){
    printf("Jenis Benzin\n");
    scanf("%s", N[i].jenis);
    printf("Masukan Jumlah Oktannya\n");
    scanf("%d", &N[i].oktan);
    printf("Masukan Stok Jenis Benzin\n");
    scanf("%d", &N[i].stok);
}
printf("\n");
printf("Masukan Range Stok Benzin yang ingin dicari\n");
printf("Range Maks\n");
scanf("%d", &b);
printf("Range Min\n");
scanf("%d", &c);
printf("--------------------------------\n");
printf("----------Menu Pilihan----------\n");
printf("--1.Tampilkan Tabel Data   -----\n");
printf("--2.Tampilkan Tabel Stok =< %d--\n", b);
printf("--------------------------------\n");
scanf("%d", &a);
if(a == 1){
    for(i = 0; i < Z; i++){
    printf("---%s %d -- %d%%---\n", N[i].jenis, N[i].oktan, N[i].stok);
    }
    }
    else if(a == 2){
    for(i = 0; i < Z; i++){
    if(N[i].stok <= b && N[i].stok >= c){
        printf("---%s %d -- %d%%---\n", N[i].jenis, N[i].oktan, N[i].stok);
                }
            }
        }
    printf("------------------------\n");
    printf("------Menu Pilihan------\n");
    printf("-1. Melanjutkan Program-\n");
    printf("-2. Keluar dari Program-\n");
    printf("------------------------\n");
    scanf("%d", &x);
    }while(x == 1);
    exit(2);
}
