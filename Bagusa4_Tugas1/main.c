#include <stdio.h>
#include <stdlib.h>

// Implements
int Menus();
int Increment();
int Decrement();
int CtoF();
void Author();

int main()
{
    Author();
    Menus();

    return 0;
}

int Menus()
{
    int menu;

    printf("\n\n");
    printf("################################# Menu ANEH ################################## \n");
    printf(" 1. Increment \n");
    printf(" 2. Decrement \n");
    printf(" 3. Konversi *C to *F \n"); // Maaf jika rumusnya salah :3
    printf("############################################################################## \n");
    printf(" Silahkan Pilih Menu : "); scanf("%d", &menu);
    printf("\n\n");

    switch(menu) {
    case 1 :
        Increment();
        break;
    case 2 :
        Decrement();
        break;
    case 3 :
        CtoF();
        break;
    default:
        printf("Weleh menune ra ketemu mbak ... :3");
        break;
    }

    return menu;
}

int Increment()
{
    int min, max, menu;
    int plus1, plus2;

    printf("########## MENU INCREMENT ########## \n");
    printf(" 1. ( While ) \n");
    printf(" 2. ( FOR ) \n");
    printf(" 3. ( DO WHILE ) \n");
    printf("#################################### \n");
    printf(" Silahkan Pilih : "); scanf("%d", &menu);

    if (menu == 1) {

        printf("Masukan Nilai Minimal = "); scanf("%d", &min); printf("\n");
        printf("Masukan Nilai Maximal = "); scanf("%d", &max); printf("\n");

        plus1 = 0;
        plus2 = 0;

        while ( min < max ) {
            while ( plus1 < min ) {
                printf("=> ( ++var ke - %d ) \n", plus1);
                ++plus1;
            }

            while ( plus2 < min ) {
                printf("=> ( var++ ke - %d ) \n", plus2);
                plus2++;
            }

            printf("\n\n");

            ++min;
        }

    } else if (menu == 2) {

        printf("Masukan Nilai Minimal = "); scanf("%d", &min); printf("\n");
        printf("Masukan Nilai Maximal = "); scanf("%d", &max); printf("\n");

        plus1 = 0;
        plus2 = 0;

        for (plus1; plus1 < max; ++plus1) {
            printf("=> ( ++var ke - %d ) \n", plus1);
        }

        printf("\n\n");

        for (plus2; plus2 < max; plus2++) {
            printf("=> ( var++ ke - %d ) \n", plus2);
        }

    } else if (menu == 3) {

        printf("Masukan Nilai Minimal = "); scanf("%d", &min); printf("\n");
        printf("Masukan Nilai Maximal = "); scanf("%d", &max); printf("\n");

        plus1 = 0;
        plus2 = 0;

        do {
            do {
                printf("=> ( ++var ke - %d ) \n", plus1);
                ++plus1;
            } while ( plus1 < min );

            do {
                printf("=> ( ++var ke - %d ) \n", plus2);
                plus2++;
            } while ( plus2 < min );

            printf("\n\n");

            ++min;
        } while ( min < max );

    } else {
        printf("Ooops Menu Pengulangan apa yang anda maksud ???");
    }

    // Back to Main
    return Menus();
}

int Decrement()
{
    int min, max, menu;
    int minus1, minus2;

    printf("########## MENU INCREMENT ########## \n");
    printf(" 1. ( While ) \n");
    printf(" 2. ( FOR ) \n");
    printf(" 3. ( DO WHILE ) \n");
    printf("#################################### \n");
    printf(" Silahkan Pilih : "); scanf("%d", &menu);

    if (menu == 1) {

        printf("Masukan Nilai Maximal = "); scanf("%d", &max); printf("\n");
        printf("Masukan Nilai Minimal = "); scanf("%d", &min); printf("\n");

        minus1 = max;
        minus2 = max;

        while ( max > min ) {
            while ( minus1 > max ) {
                printf("=> ( ++var ke - %d ) \n", minus1);
                --minus1;
            }

            while ( minus2 > max ) {
                printf("=> ( var++ ke - %d ) \n", minus2);
                minus2--;
            }

            printf("\n\n");

            --max;
        }

    } else if (menu == 2) {

        printf("Masukan Nilai Maximal = "); scanf("%d", &max); printf("\n");
        printf("Masukan Nilai Minimal = "); scanf("%d", &min); printf("\n");

        minus1 = max;
        minus2 = max;

        for (minus1; minus1 > min; --minus1) {
            printf("=> ( ++var ke - %d ) \n", minus1);
        }

        printf("\n\n");

        for (minus2; minus2 > min; minus2--) {
            printf("=> ( var++ ke - %d ) \n", minus2);
        }

    } else if (menu == 3) {

        printf("Masukan Nilai Maximal = "); scanf("%d", &max); printf("\n");
        printf("Masukan Nilai Minimal = "); scanf("%d", &min); printf("\n");

        minus1 = max;
        minus2 = max;

        do {
            do {
                printf("=> ( ++var ke - %d ) \n", minus1);
                --minus1;
            } while ( minus1 > max );

            do {
                printf("=> ( ++var ke - %d ) \n", minus2);
                minus2--;
            } while ( minus2 > max );

            printf("\n\n");

            --max;
        } while ( max > min );

    } else {
        printf("Ooops Menu Pengulangan apa yang anda maksud ???");
    }

    // Back to Main
    return Menus();
}

int CtoF()
{
    float DerajatC, DerajatF;

    printf("Masukan Nilai *C = "); scanf("%f", &DerajatC);

    DerajatF = (float) (9/5);
    DerajatF = DerajatF * DerajatC;
    DerajatF = DerajatF + 32;

    printf("Hasil Konversi dari *C ke *F adalah = %f", DerajatF);
    printf("\n----------------------------------------");

    // Back to Main
    return Menus();
}

void Author()
{
    char * Nama, * Kelas, * NoAbsen;

    Nama = "Bagus Ahmad Setiawan";
    Kelas = "XI RPL 1";
    NoAbsen = "08";

    printf("\n\n");
    printf("################################ Dibuat Oleh ################################# \n");
    printf(" Nama : %s \n Kelas : %s \n No Absen : %s \n", Nama, Kelas, NoAbsen);
    printf("############################################################################## \n");
    printf("\n\n");
}
