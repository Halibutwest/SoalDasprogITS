//3. Pak Dani adalah dosen baru di Xavier Institute. Dia ingin menyimpan nilai mahasiswa ke dalam program komputer.
//Programnya bisa mencetak daftar mahasiswa dan nilainya. Selain itu, Pak Dani ingin programnya dapat mencetak nilai rata-rata,
//mahasiswa dengan nilai tertinggi, dan mahasiswa dengan nilai terjelek. Dia ingin program tetap berjalan kecuali jika dia memilih menu keluar.
//Bantulah Pak Dani membuat program beserta fungsi/prosedurnya!
//Contoh Daftar mahasiswa dan nilai:
//Nida Ina - 90.5
//Ian Andi - 68
//Ani Dina - 70
//Nadi Nia - 85
//Nai Ndai - 78
//
//Nilai Rata-rata: 78.3
//
//Nilai terendah: Ian Andi - 68
//
//Nilai tertinggi: Nida Ina - 90.5
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct mahasiswa{
    float nilai;
    char nama_depan[25], nama_tengah[25], nama_belakang[25];
};
int main(){
    int A,i,y,x;
    float nilai_rata, nilai_tertinggi, nilai_terendah;
    do {
    printf("------------------------------\n");
    printf("---Masukan jumlah mahasiswa---\n");
    printf("------------------------------\n");
    scanf("%d", &A);
struct mahasiswa O[A];
for(i = 0; i < A; i++){
    printf("Nama Depan Mahasiswa\n");
    scanf("%s",O[i].nama_depan);
    printf("Nama Tengah Mahasiswa\n");
    scanf("%s",O[i].nama_tengah);
    printf("Nama Belakang Mahasiswa\n");
    scanf("%s",O[i].nama_belakang);
    printf("Nilai Mahasiswa\n");
    scanf("%f", &O[i].nilai);
}
for(i = 0; i < A; i++){
        nilai_rata= nilai_rata + O[i].nilai;
    }
    nilai_rata = nilai_rata/A;
      nilai_terendah=O[0].nilai;
      for(i=1;i<A;i++){
        if(nilai_terendah>O[i].nilai)
        nilai_terendah=O[i].nilai;
    }
    nilai_tertinggi=O[0].nilai;
    for(i=1;i<A;i++) {
        if(nilai_tertinggi<O[i].nilai)
        nilai_tertinggi=O[i].nilai;
    }
printf("\n");
printf("--------------------\n");
printf("----Daftar Tabel----\n");
printf("--------------------\n");
printf("-1. Nilai Rata-Rata-\n");
printf("-2. Nilai Tertinggi-\n");
printf("-3. Nilai Terendah -\n");
printf("--------------------\n");
scanf("%d", &y);
if(y == 1){
    printf("%.1f\n", nilai_rata);
    }
else if(y == 2){
        for(i = 0 ; i < A; i++){
        if(nilai_tertinggi == O[i].nilai){
            printf("%s %s %s-%.1f\n", O[i].nama_depan,O[i].nama_tengah,O[i].nama_belakang, nilai_tertinggi);
            }
        }
    }
else if(y == 3){
        for(i = 0 ; i < A; i++){
    if(nilai_terendah == O[i].nilai){
            printf("%s %s %s-%.1f\n", O[i].nama_depan,O[i].nama_tengah,O[i].nama_belakang, nilai_terendah);
                }
            }
        }
    printf("------------------------\n");
    printf("------Pilihan Menu------\n");
    printf("------------------------\n");
    printf("-1. Melanjutkan Program-\n");
    printf("-2. Keluar Dari Program-\n");
    printf("------------------------\n");
    scanf("%d", &x);
    }while(x == 1);
    exit(2);
}

