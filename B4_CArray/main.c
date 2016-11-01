#include <stdio.h>
#include <stdlib.h>

int g_min, g_max; // Variabel global untuk nilai minimum dan maximum
int *bilangan; // Array dinamis yang akan dijadikan kelinci percobaan
int g_maxx = sizeof(bilangan); // Variabel global yang akan menampung nilai panjang array

// Pendeklarasian Fungsi
void Author();
void Menus();
void Sumber_Bantuan();
void patas();
void pbawah();
int tambah();
int lihat();
int ubah();
int bersihkan();

// Fungsi yang akan dijalankan pertama kali
int main()
{
    Author();
    Menus();
    return 0;
}

// Start Fungsi Menus
void Menus() {
    int menu;

    //Add, Read, Update, Delete
    printf("\n\n");
    printf("################################# Menu ANEH ################################## \n");
    printf(" 1. Tambah \n");
    printf(" 2. Lihat \n");
    printf(" 3. Ubah \n");
    printf(" 4. Hapus \n");
    printf(" 5. Bersihkan \n");
    printf(" 6. Sumber Bantuan \n");
    printf(" 88. Keluar \n");
    printf("############################################################################## \n");
    printf(" Silahkan Pilih Menu : "); scanf("%d", &menu);
    printf("\n\n");

    switch(menu) {
        case 1 :
            patas();
            tambah(); // Fungsi
            pbawah();
            Menus();
            break;
        case 2 :
            patas();
            lihat(); // Fungsi
            pbawah();
            Menus();
            break;
        case 3 :
            patas();
            ubah(); // Fungsi
            pbawah();
            Menus();
            break;
        case 4 :
            patas();
            hapus(); // Fungsi
            pbawah();
            Menus();
            break;
        case 5 :
            patas();
            bersihkan(); // Fungsi
            pbawah();
            Menus();
            break;
        case 6 :
            Sumber_Bantuan(); // Fungsi
            break;
        case 88 :
            exit(EXIT_SUCCESS); // Fungsi Keluar dengan Keberhasilan
            break;
        default :
            Menus(); // Fungsi
    }
}
void patas()
{
    printf("\n");
    printf("############################################################################################################### \n");
}
void pbawah()
{
    printf("\n");
    printf("############################################################################################################### \n");
}
// End Fungsi Menus

// Fungsi Menambah Array
int tambah()
{
    int min, max;

    printf("Mau berapa array yang mau ditambah ?");
    scanf("%i", &max);
    g_max += max;

    bilangan = malloc(g_max * sizeof(int));

    for (min = 0; min < max; min++) {
        int value;

        printf("Index ke %d akan di taruh nilai berapa ?", min);
        scanf("%i", &value);

        bilangan[min] = value;
    }

    return 0;
}

// Fungsi Melihat Array
int lihat()
{
    int min, max;
    max = g_max;

    for (min = 0; min < max; min++) {
        printf("Array index %i = %i \n", min, bilangan[min]);
    }

    printf("Total Array adalah %i", g_max);

    return 0;
}

// Fungsi Mengubah Array
int ubah()
{
    int key, value;

    printf("Masukan kunci array yang akan diubah = ");
    scanf("%i", &key);
    printf("Masukan nilai array yang akan diubah sesuai kunci yang dipilih (%i) = ", key);
    scanf("%i", &value);

    bilangan[key] = value;

    printf("Index array ke %i berhasil di ubah nilainya menjadi = %i", key, value);

    return 0;
}

// Fungsi Menghapus Array
int hapus()
{
    int min, max, key;
    int *tmp_array;
    max = g_max;

    printf("Masukan kunci array yang akan dihapus = ");
    scanf("%i", &key);

// Proses penghapusan
    // Shift array , sesuai index yang telah dihapus, agar index array yg dihapus pindah ke urutan terakhir
    for (min = key; min < max; min++) {
        bilangan[min] = bilangan[min + 1];
    }

    // Lokasikan ulang array
    tmp_array = realloc(bilangan, (max - 1) * sizeof(int));
    if (tmp_array == NULL & max > 1) {
        printf("Maaf tidak bisa mengalokasikan array");
        Menus();
    }
    g_max = max - 1;
    bilangan = tmp_array;

    printf("Kunci %i pada array telah dihapus.", key);

    return 0;
}

// Fungsi Membersihkan ke Awal
int bersihkan()
{
    g_min = 0;
    g_max = 0;
    g_maxx = sizeof(int);
    bilangan = malloc(0 * sizeof(int));

    printf("Array berhasil dibersihkan!!!");

    return 0;
}

// Fungsi Pembuat
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

// Fungsi Bantuan "Seseorang tidak dapat berdiri sendiri dengan kuat"
void Sumber_Bantuan()
{
    printf("\n\n");
    printf("#################################################################################");
    printf("\n#                         Thanks to Allah :D :D :D :D                           #\n");
    printf("#################################################################################");

    printf("\n\n");
    printf("\n############################### Stack Overflow ##################################\n");
    printf("http://stackoverflow.com/questions/15821123/removing-elements-from-an-array-in-c");
    printf("\n");
    printf("http://stackoverflow.com/questions/17937623/initializing-c-dynamic-arrays");
    printf("\n#################################################################################");

    printf("\n\n\n");
    printf("'Seseorang tidak dapat berdiri sendiri dengan kuat'");
    printf("\n");

    Author();
}




















/* -------------------------------------------------------- */
/*
int min, max;
    max = 99;

    int counts[max];

    for (min = 0; min < max; min++) {
        counts[min] = min;

        printf("%d", counts[min]);
    }
*/
//array_Tugas1();
/* -------------------------------------------------------- */
/* -------------------------------------------------------- */
/*
    int tmp_min, tmp_max;
    max = g_maxx - (g_maxx - g_max);
    int tmp_bilangan[max] = {0};

    for (min = 0; min < max; min++) {
        if (min == key) {
            tmp_bilangan[min] = bilangan[(min - 1)];
        } else {
            tmp_bilangan[min] = bilangan[min];
        }
    }

    tmp_max = sizeof(tmp_bilangan);

    for (tmp_min = 0; tmp_min < tmp_max; tmp_min++) {
        bilangan[tmp_min] = tmp_bilangan[tmp_min];
    }

    tmp_max = 0;
*/
/* -------------------------------------------------------- */
