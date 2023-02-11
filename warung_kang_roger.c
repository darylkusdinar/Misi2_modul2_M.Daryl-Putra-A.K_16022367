#include <stdio.h>

char namapelanggan[10];

int pemasukkan1[10];

int pemasukkan2[10];

int konsumsi1[10];

int konsumsi2[10];

int main(){
    int awal;
    int z;
    int nama;
    int i;
    int loop;
    int j;
    int x;

    printf("buka toko atau tutup toko? \n");
    printf("ketikan 1 untuk buka dan ketikan 2 untuk tutup = ");
    scanf("%d" , &awal);
    if (awal == 1 ) {
        printf("\n ini pelanggan ke berapa? ");
        scanf("%d" , &z);
        printf("\n masukkan huruf pertama nama pelanggan = ");
        scanf("%s" , &nama);
        namapelanggan[z] = nama;
        milihmakan();
    
    }  
    else if (awal == 2) {
        int sum1 = 0;
        int sum2 = 0;
        int jlhpelanggan;
        int jlhmakanan;
        int jlhminuman;

        for (i = 0; i < 10; i++){
            sum1 = sum1 + pemasukkan1[i];
            sum2 = sum2 + pemasukkan2[i];
        }
        int sum3 = sum1 + sum2;
        if (sum3 == 0){
            printf("tidak ada penjualan");
        }
         else {
            printf("\n ada berpa pelanggan yang datang? ");
            scanf("%d" , &jlhpelanggan);
             printf("\n list huruf depan pelanggan : ");
            for (i = 1; i <= jlhpelanggan ; i++){
                printf( "%c ", namapelanggan[i]);
            }

            printf("\n ada berapa makanan yang dipesan? ");
            scanf("%d" , &jlhmakanan);
            printf("\n list kode makanan yang dipesan :");
            for (j = 1; j <= jlhmakanan ; j++){
                printf("  %d \n" , konsumsi1[j]);
            }

            printf("\n ada berapa minuman yang dipesan? ");
            scanf("%d" , &jlhminuman);

           
            
            printf("\n list kode minuman yang dipesan : ");
            for (x = 1; x <= jlhminuman ; x++){
                printf(" %d \n" , konsumsi2[x]);
            }   
            }
            printf("\n total pemasukkan makanan = %d \n" , sum1);
            printf("total pemasukkan minuman = %d" , sum2);
        }

        

        
        
        
       
    return 0;
}

void menu() {
    printf("===== MENU =====\n");
    printf("makanan : \n");
    printf("0. bakso = 10K\n");
    printf("1. uduk = 15K\n");
    printf("2. sate = 20K\n");
    printf("3. mie = 12K\n");
    printf("4. gulai = 20K\n");
    printf("minuman : \n");
    printf("5. soda = 7K\n");
    printf("6. kopi = 5K\n");
    printf("7. susu = 3K\n");
    printf("8. jus = 10K\n");
    printf("9. teh = 6K\n");
}


int milihmakan() {
    int pilihan1;
    int makanan;
    int a;
    
    

    char bakso;
    char uduk;
    char sate;
    char mie;
    char gulai;


    printf("\n pilih 1. untuk melihat menu, 2. untuk membeli makanan/ minuman, ketik 3. untuk keluar.\n silahkan ketikan pilihan =");
    scanf("%d" , &pilihan1);
    if (pilihan1 == 1) {
        menu();
        milihmakan();
    }
    else if (pilihan1 == 2) {
        printf("\n ini makanan keberapa yang dipesan? ");
        scanf("%d" , &a);
        printf("\n masukkan nomor makanan = ");
        scanf("%d" , &makanan);
        if (makanan == 0) {
            pemasukkan1[a] = 10000;
            konsumsi1[a] = 0;
            milihminum();
        }
        else if (makanan == 1) {
            pemasukkan1[a] = 15000;
            konsumsi1[a] = 1;
            milihminum();
        }
        else if (makanan == 2) {
            pemasukkan1[a] = 20000;
            konsumsi1[a] = 2;
            milihminum();
        }
        else if (makanan == 3) {
            pemasukkan1[a] = 12000;
            konsumsi1[a] = 3;
            milihminum();
        }
        else if (makanan == 4) {
            pemasukkan1[a] = 20000;
            konsumsi1[a] = 4;
            milihminum();
        }
    }
    else if (pilihan1 == 3) {
        main();
    }
    return 0;
}

int milihminum() {

    int b;
    char soda;
    char kopi;
    char susu;
    char jus;
    char teh;
    int minuman;

    printf("\n ini minuman keberapa yang dipesan? ");
        scanf("%d" , &b);
        printf("\n masukkan nomor minuman = ");
        scanf("%d" , &minuman);
        if (minuman == 5) {
            pemasukkan2[b] = 7000;
            konsumsi2[b] = 5;
            milihmakan();
        }
        else if (minuman == 6) {
            pemasukkan2[b] = 5000;
            konsumsi2[b] = 6;
            milihmakan();
        }
        else if (minuman == 7) {
            pemasukkan2[b] = 3000;
            konsumsi2[b] = 7;
            milihmakan();
        }
        else if (minuman == 8) {
            pemasukkan2[b] = 10000;
            konsumsi2[b] = 8;
            milihmakan();
        }
        else if (minuman == 9) {
            pemasukkan2[b] = 6000;
            konsumsi2[b] = 9;
            milihmakan();
        }
        return 0;
        
    }

