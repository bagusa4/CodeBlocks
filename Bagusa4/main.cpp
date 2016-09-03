#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <array>

using namespace std;

// Fungsi sebelum di eksekusi
int triangle(int min, int max) {
    int abc[max];

    for(int i = min; i < max; i++) {
        abc[i] = i;
    }

    /*for(int i = min; i < sizeof(a); i++) {
        for(int j = i; i < sizeof(a[i]); i++) {
            cout << a[i][j] << endl;
        }
    }*/

    return 0;
}


// Eksekusi
int main()
{
    cout << "Hello world!" << endl;

    triangle(2, 6);

    return 0;
}
