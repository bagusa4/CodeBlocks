#include <stdio.h>
#include <stdlib.h>

int main()
{

    int panjang, lebar, luas;

    printf("Masukan Panjang :");
    scanf("%i\n", &panjang);

    printf("Masukan Lebar :");
    scanf("%i\n", &lebar);

    luas = panjang * lebar;

    printf("Luas %i\n", luas);

    return 0;

};
