#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int menu,a;
char username[100];
char password[100];
int banyak,jumlah,bayar,harga,atas;
int kode,total,duit,kembalian,ulang,bayarbarang,barang;
char nama[100];

void main()
{
         printf(" USERNAME: ");
         scanf("%[^\n]s",&username);
         printf(" PASSWORD: ");
         fflush(stdin);

         char ch;
         int i=0;
         while((ch= (char)_getch ())!='\r') {
            password[i] = ch;
            printf("*");
            i++;
         }
        printf("\n");
        if((strcmp(username, "Toko")==0) && (strcmp(password, "Baju")==0)) {
            printf("Anda telah masuk\n ");
        }


        system("pause");
        system("cls");
        menu:
        printf("SELAMAT DATANG");
        printf("\n");
        printf("\n1. Pembeli");
        printf("\n2. Data Pembeli");
        printf("\n3. Struk total");
        printf("\n4. Total Keselurahan Data Pembeli");
        printf("\n5. Exit");
        printf("\nMasukkan Pilihan Anda :");
        scanf("%d", &a);

        switch(a){
            case 1:
                system("cls");
                pembeli();
                goto menu;
                break;
            case 2:
                system("cls");
                datapembeli();
                goto menu;
                break;
            case 3:
                system("cls");
                struktotal();
                goto menu;
                break;
            case 4:
                system("cls");
                totalkeseluruhandatapembeli();
                goto menu;
                break;
            case 5:
            system("cls");
            printf("Justin Waruwu / 672022039 \n");
            printf("Rio Ferdinan / 672022255 \n");
            printf("Reynaldi / 672022260 \n");
            printf("Debora P Siahaan / 672022264 \n");
            printf("Jiny Gracela Manoa / 672022113 \n");
            fflush("stdin");
            break;

}





}

void pembeli(){
atas;
    printf("===========================================\n");
    printf("========SELAMAT DATANG DI TOKO BAJU KAMI==\n");
    printf("===========================================\n");
    printf("Masukkan nama anda: ");
    scanf("%s", &nama);
    printf("Halo selamat datang di restaurant kami %s \n",nama);
    printf("===========================================\n");
    printf("========Silahkan Pilih Belanja Anda===========\n");
    printf("===========================================\n");
    printf(" |       BAJU     |   Harga               \n");
    printf(" |       CELANA   |   Harga               \n");
    printf("===========================================\n");
    printf(" |  1.Kemeja        |     Rp. 15000         \n");
    printf(" |  2.Kaos Polos    |     Rp. 25000         \n");
    printf(" |  3.Cargo         |     Rp. 10000         \n");
    printf(" |  4.Ripped Jeans  |     Rp. 12000         \n");
    printf("===========================================\n");
    printf("Jumlah barang yang dibeli: ");
    scanf("%d", &banyak);
    jumlah=1;
    bayar=0;
    for(jumlah=1; jumlah<=banyak; jumlah++){
        ulang;
        printf("\n");
        printf("Masukkan kode menu =");
        scanf("%d",&kode);
        printf("\n");
    if(kode==1){
        printf("==============Pembelian Anda========== \n");
        printf("Nama barang= Kemeja \n");
        printf("harga= 15000,- \n");
        printf("Jumlah barang= ");
        scanf("%d",&barang);
        harga=15000;
        total=harga*barang;
        printf("Total Harga= Rp.%d,-\n",total);
        printf("==================================== \n");
    }
    else
    if(kode==2){
        printf("==============Pembelian Anda========== \n");
        printf("Nama barang= Kaos Polos \n");
        printf("harga= 25000,- \n");
        printf("Jumlah barang= ");
        scanf("%d",&barang);
        harga=25000;
        total=harga*barang;
        printf("Total Harga= Rp.%d,-\n",total);
        printf("==================================== \n");
    }
    else
    if(kode==3){
        printf("==============Pembelian Anda========== \n");
        printf("Nama barang= Cargo \n");
        printf("harga= 10000,- \n");
        printf("Jumlah barang= ");
        scanf("%d",&barang);
        harga=10000;
        total=harga*barang;
        printf("Total Harga= Rp.%d,-\n",total);
        printf("==================================== \n");
    }
    else
    if(kode==4){
        printf("==============Pembelian Anda========== \n");
        printf("Nama barang= Ripped Jeans \n");
        printf("harga= 12000,- \n");
        printf("Jumlah barang= ");
        scanf("%d",&barang);
        harga=12000;
        total=harga*barang;
        printf("Total Harga= Rp.%d,-\n",total);
        printf("==================================== \n");
    }
    bayar= bayar+total;
    }
    bayarbarang:
    printf("==================Bukti Pembayaran============= \n");
    printf("Total bayar= Rp.%d,-\n",bayar);
    printf("Masukkan duit yang akan anda bayar:");
    scanf("%d",&duit);
    if (duit<bayar){
        printf("Uang Anda Kurang, masukkan sesuai nominal atau lebih \n");
        goto bayarbarang;
    }
    kembalian=duit-bayar;
    printf("Kembalian kamu= Rp.%d,-\n",kembalian);
    printf("Terima Kasih Atas kunjungan Anda \n");
    system("pause");
    system("cls");
}
void datapembeli(){
    printf("masukkan nama pembeli :");
    scanf("%s", nama);
    printf("Pembelian atas nama %s dengan total rp. %d\n", nama,total);
    system("pause");
    system("cls");
}
void struktotal(){
    printf("masukkan nama pembeli :");
    scanf("%s", nama);
    system("cls");
    printf("========================================== \n");
    printf("Total Pembelian Anda adalah Rp.%d \n",bayar);
    printf("Anda membayar dengan uang Rp.%d \n",duit);
    printf("Silahkan Ambil Duit Kembalian Anda Rp.%d \n",kembalian);
    printf("Trimakasih Telah Belanja Di Toko Kami \n");
    printf("========================================== \n");
    system("pause");
    system("cls");
}
void totalkeseluruhandatapembeli(){
    printf("masukkan nama pembeli :");
    scanf("%s", nama);
    printf("=================================================================\n");
    printf("Pembelian atas nama %s dengan total rp. %d\n", nama,total);
    printf("Total Pembelian Anda adalah Rp.%d \n",bayar);
    printf("Anda membayar dengan uang Rp.%d \n",duit);
    printf("Silahkan Ambil Duit Kembalian Anda Rp.%d \n",kembalian);
    printf("Terimakasih telah melakukan transaksi di toko kami >_<\n");
    printf("Kami menantikan kunjungan anda yang selanjutnya Bapak/ibu %s\n", nama);
    printf("=================================================================\n");
    system("pause");
    system("cls");
}







