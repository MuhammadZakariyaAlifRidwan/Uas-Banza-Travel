#include <stdio.h>
#include <stdlib.h>


void interface_program( )
{   char pembuat [2][99]={"[1] Muhammad Zakariya Alif Ridwan","[2] Banyu Sidratul Muntaha\t"}; //array pembuat
    system("color F0");
    printf  ("\n\n\n\n\n\n\n\t\t|================================================|\n");
    printf  ("\t\t|             Selamat Datang Di                  | \n");
    printf  ("\t\t|       Program Pemesanan Banza Travel           | \n");
    printf  ("\t\t|================================================|\n");
    printf  ("\t\t|              DIBUAT OLEH :                     |\n");
    for (int i=0;i<2;i++){
    printf  ("\t\t|%s\t\t |\n",pembuat[i]);}
    printf  ("\t\t|================================================|\n\n");
    printf  ("\t\t press any Key to continue.... \n");

    getch ( );
    system("cls");
}

void fasilitas_tambahan()
{
        char fasilitas [3][99]={"| 1          Penginapan dan Kuliner    300.000     |",     //array fasilitas tambahan
                                "| 2          Penginapan                200.000     |",
                                "| 3          Kuliner                   150.000     |"};
        printf("\n Daftar Layanan Tambahan :");
        printf("\n ___________________________________________________");
        printf("\n | Kode\t      Fasilitas\t   \t\tTarif       |");
        printf("\n | Tambahan\t\t\t\t\t    |");
        printf("\n ___________________________________________________|");
        for (int i=0;i<3;i++){
        printf("\n %s",fasilitas[i]);}
        printf("\n ___________________________________________________|");

}

void menu_rute_perjalanan( )
{
    int kp,jt,htk,hf,tot,na,pf;                              //kp=kode paket,jt=jumlah tiket,htk=harga tiket,hf=harga fasilitas,tot=harga total,na=nomer antrian,pf=pilihan fasilitas
    char ulang,ft,kt[50],nft[50],jk[50],rp[50],nama[50];     //ft=ingin mendaftar fasilitas tambahan atau tidak,nft=nama fasilitas,jk=jenis kelamin
                                                             //rp=nama rute paket,nama=nama pembeli

    char paket[6][99]= {"| 1\t   Surabaya - Malang\t\t\t 6 orang\t Rp. 600.000  |",          //array paket travel
                        "| 2\t   Surabaya - Malang - Blitar       \t 6 orang\t Rp. 750.000  |",
                        "| 3\t   Surabaya - Mojokerto - Pandaan\t 4 orang\t Rp. 300.000  |",
                        "| 4\t   Surabaya - Solo\t\t\t 8 orang\t Rp. 450.000  |",
                        "| 5\t   Surabaya - Solo - Semarang\t\t 10 orang\t Rp. 600.000  |",
                        "| 6\t   Tidak Jadi Membeli                                                 |"};
    mulai:
    printf  ("\n                                 BANZA TRAVEL                            ");
    printf  ("\n ______________________________________________________________________________");
    printf  ("\n | Kode\t   Rute Perjalanan\t\t\t Minimum\t Tarif\t      |");
    printf  ("\n | Paket\t                \t\t Peserta           \t      |");
    printf  ("\n ______________________________________________________________________________");
            for (int i=0;i<6;i++){
    printf  ("\n %s",paket[i]);}
    printf  ("\n ______________________________________________________________________________");
    printf  ("\n ------------------------------------------------------------------------------");
    printf  ("\n                              INPUT PEMESANAN TRAVEL                         ");
    printf  ("\n ------------------------------------------------------------------------------");
    printf  ("\nNama Pembeli   (tanpa spasi)\t:");
    scanf   ("%s",&nama);
    printf  ("Jenis Kelamin  (tanpa spasi)\t:");
    scanf   ("%s",&jk);
    printf  ("Nomor Antrian yang diambil \t:");
    scanf   ("%d",&na);
    printf  ("Masukkan Jumlah Tiket(maks 1000):");
    scanf   ("%d",&jt);
    printf  ("Masukkan Kode Paket \t\t:");
    scanf   ("%d",&kp);

    switch(kp){

            case 1:
                    htk=600000;
                    strcpy  (rp, "Surabaya-Malang");
                    ulang1:
                    printf  ("Apakah anda ingin mendaftar layanan tambahan (y/t) ? ");
                    scanf   ("%s",&ft);

                    if (ft =='t'){
                        system("cls");
                        printf  ("\n Pemesanan Berhasil...");
                        strcpy  (nft, "Tidak ada");
                        hf=0;
                    }
                    else if (ft=='y'){
                        system("cls");
                        fasilitas_tambahan();
                        ulang2:
                        printf(" \nMasukkan Kode Fasilitas tambahan : ");
                        scanf ("%s",&pf);

                        switch(pf)
                                    {
                        case '1':
                        hf=300000;
                        strcpy(nft, "Penginapan dan Kuliner");
                        printf("\n Pemesanan Berhasil...");
                        system("cls");
                        break;

                        case '2':
                        hf=200000;
                        strcpy(nft, "Penginapan");
                        printf("\n Pemesanan Berhasil...");
                        system("cls");
                        break;

                        case '3':
                        hf=150000;
                        strcpy(nft, "Kuliner");
                        printf("\n Pemesanan Berhasil...");
                        system("cls");
                        break;

                        default :printf("Masukkan Pilihan dengan benar...\n");
                        goto ulang2;
                        break;

                                        }
                        }
                    else{
                        printf("Masukkan Pilihan dengan benar...\n\n");
                        goto ulang1;
                    }

                    break;

            case 2:
                    htk=750000;
                    strcpy(rp, "Surabaya-Malang-Blitar");
                    ulang3:
                    printf  ("Apakah anda ingin mendaftar layanan tambahan (y/t) ? ");
                    scanf   ("%s",&ft);

                    if (ft =='t'){
                        system("cls");
                        printf  ("\n Pemesanan Berhasil...");
                        strcpy  (nft, "Tidak ada");
                        hf=0;
                    }
                    else if (ft=='y'){
                        system("cls");
                        fasilitas_tambahan();
                        ulang4:
                        printf(" \nMasukkan Kode Fasilitas tambahan : ");
                        scanf ("%s",&pf);

                        switch(pf)
                                    {
                        case '1':
                        hf=300000;
                        strcpy(nft, "Penginapan dan Kuliner");
                        printf("\n Pemesanan Berhasil...");
                        system("cls");
                        break;

                        case '2':
                        hf=200000;
                        strcpy(nft, "Penginapan");
                        printf("\n Pemesanan Berhasil...");
                        system("cls");
                        break;

                        case '3':
                        hf=150000;
                        strcpy(nft, "Kuliner");
                        printf("\n Pemesanan Berhasil...");
                        system("cls");
                        break;

                        default :printf("Masukkan Pilihan dengan benar...\n");
                        goto ulang4;
                        break;

                                        }
                        }
                    else{
                        printf("Masukkan Pilihan dengan benar...\n\n");
                        goto ulang3;
                    }

                    break;

            case 3:
                    htk=300000;
                    strcpy(rp, "Surabaya-Mojokerto-Pandaan");
                    ulang5:
                    printf  ("Apakah anda ingin mendaftar layanan tambahan (y/t) ? ");
                    scanf   ("%s",&ft);

                    if (ft =='t'){
                        system("cls");
                        printf  ("\n Pemesanan Berhasil...");
                        strcpy  (nft, "Tidak ada");
                        hf=0;
                    }
                    else if (ft=='y'){
                        system("cls");
                        fasilitas_tambahan();
                        ulang6:
                        printf(" \nMasukkan Kode Fasilitas tambahan : ");
                        scanf ("%s",&pf);

                        switch(pf)
                                    {
                        case '1':
                        hf=300000;
                        strcpy(nft, "Penginapan dan Kuliner");
                        printf("\n Pemesanan Berhasil...");
                        system("cls");
                        break;

                        case '2':
                        hf=200000;
                        strcpy(nft, "Penginapan");
                        printf("\n Pemesanan Berhasil...");
                        system("cls");
                        break;

                        case '3':
                        hf=150000;
                        strcpy(nft, "Kuliner");
                        printf("\n Pemesanan Berhasil...");
                        system("cls");
                        break;

                        default :printf("Masukkan Pilihan dengan benar...\n");
                        goto ulang6;
                        break;

                                        }
                        }
                    else{
                        printf("Masukkan Pilihan dengan benar...\n\n");
                        goto ulang5;
                    }

                    break;

            case 4:
                    htk=450000;
                    strcpy(rp, "Surabaya-Solo");
                    ulang7:
                    printf  ("\nApakah anda ingin mendaftar layanan tambahan (y/t) ? ");
                    scanf   ("%s",&ft);

                    if (ft =='t'){
                        system("cls");
                        printf  ("\n Pemesanan Berhasil...");
                        strcpy  (nft, "Tidak ada");
                        hf=0;
                    }
                    else if (ft=='y'){
                        system("cls");
                        fasilitas_tambahan();
                        ulang8:
                        printf(" \nMasukkan Kode Fasilitas tambahan : ");
                        scanf ("%s",&pf);

                        switch(pf)
                                    {
                        case '1':
                        hf=300000;
                        strcpy(nft, "Penginapan dan Kuliner");
                        printf("\n Pemesanan Berhasil...");
                        system("cls");
                        break;

                        case '2':
                        hf=200000;
                        strcpy(nft, "Penginapan");
                        printf("\n Pemesanan Berhasil...");
                        system("cls");
                        break;

                        case '3':
                        hf=150000;
                        strcpy(nft, "Kuliner");
                        printf("\n Pemesanan Berhasil...");
                        system("cls");
                        break;

                        default :printf("Masukkan Pilihan dengan benar...\n\n");
                        goto ulang8;
                        break;

                                        }
                        }
                    else{
                        printf("Masukkan Pilihan dengan benar...\n");
                        goto ulang7;
                    }

                    break;

            case 5:
                    htk=600000;
                    strcpy(rp, "Surabaya-Solo-Semarang");
                    ulang9:
                    printf  ("Apakah anda ingin mendaftar layanan tambahan (y/t) ? ");
                    scanf   ("%s",&ft);

                    if (ft =='t'){
                        system("cls");
                        printf  ("\n Pemesanan Berhasil...");
                        strcpy  (nft, "Tidak ada");
                        hf=0;
                    }
                    else if (ft=='y'){
                        system("cls");
                        fasilitas_tambahan();
                        ulang10:
                        printf(" \nMasukkan Kode Fasilitas tambahan : ");
                        scanf ("%s",&pf);

                        switch(pf)
                                    {
                        case '1':
                        hf=300000;
                        strcpy(nft, "Penginapan dan Kuliner");
                        printf("\n Pemesanan Berhasil...");
                        system("cls");
                        break;

                        case '2':
                        hf=200000;
                        strcpy(nft, "Penginapan");
                        printf("\n Pemesanan Berhasil...");
                        system("cls");
                        break;

                        case '3':
                        hf=150000;
                        strcpy(nft, "Kuliner");
                        printf("\n Pemesanan Berhasil...");
                        system("cls");
                        break;

                        default :printf("Masukkan Pilihan dengan benar...\n");
                        goto ulang10;
                        break;

                                        }
                        }
                    else{
                        printf("Masukkan Pilihan dengan benar...\n\n");
                        goto ulang9;
                    }

                    break;

           case 6:
            printf("\n Terimakasih telah menggunakan program ini...\n ");
            return 0;
            system("cls");
            break;

           default :printf("\nMasukkan Kode paket dengan benar... \n\n");
           printf  ("press any Key to continue.... \n");
            getch ();
            system("cls");
            goto mulai;
            break;

        }
                tot=(htk+hf)*jt;

                printf(" \n");
                printf(" ------------------------------------------------------------------------\n");
                printf(" | \t\t\tTIKET PEMBELIAN BANZA TRAVEL\t\t\t|\n");
                printf(" ------------------------------------------------------------------------\n");
                printf(" |Nama Penumpang\t\t: %s\t\t\t\t\t\t\n",nama);
                printf(" | \t\t\t\t\t\t\t\t\t|\n");
                printf(" |Jenis Kelamin Pembeli\t\t: %s\t\t\t\t\t\t\n",jk);
                printf(" | \t\t\t\t\t\t\t\t\t| \n");
                printf(" |Nomer Antrian \t\t: %d\t\t\t\t\t\t\t\n", na);
                printf(" | \t\t\t\t\t\t\t\t\t| \n");
                printf(" |Rute Perjalanan \t\t: %s\t\t\t\t\t\t\t\n", rp);
                printf(" | \t\t\t\t\t\t\t\t\t| \n");
                printf(" |Fasilitas Tambahan\t\t: %s\t\t\t\t\t\n",nft);
                printf(" | \t\t\t\t\t\t\t\t\t| \n");
                printf(" |Jumlah Tiket \t\t\t: %d\t\t\t\t\t\t\t\n", jt);
                printf(" | \t\t\t\t\t\t\t\t\t| \n");
                printf(" |Harga yang harus dibayar \t: Rp. %d\t\t\t\t\t\t\t\n",tot);
                printf(" | \t\t\t\t\t\t\t\t\t| \n");
                printf(" |Kode Pembayaran kamu adalah \t: bz%d2022\t\t\t\t\t\t\t\n",na);
                printf(" | \t\t\t\t\t\t\t\t\t| \n");
                printf(" | Silahkan Melakukan Pembayaran dengan Kode Pembayaran diatas!!! \n");
                printf(" | \t\t\t\t\t\t\t\t\t| \n");
                printf(" ------------------------------------------------------------------------\n");
}

void main()
{
            char input;

            interface_program();
            lagi:
            menu_rute_perjalanan();

            ulang:
            printf("\n Apakah anda ingin menggunakan program ini lagi  (t/y) :  ");
            scanf("%s",&input);

            if (input=='t'){
                printf("\n Terimakasih...");
            }
            else if (input=='y'){
                system("cls");
                goto lagi;
            }
            else {
                printf(" Masukkan Pilihan dengan benar...\n");
                goto ulang;
            }

            getch();
            system("cls");

            return 0;
}
