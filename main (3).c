/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int diziToplami(int dizi[], int boyut) {
    int toplam = 0;
    for (int i = 0; i < boyut; i++) {
        toplam += dizi[i];
    }
    return toplam;
}

int main() {
    int dizi[] = {1,2,3,4,5,6,7,8,9};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    printf("Dizi toplamı: %d\n", diziToplami(dizi, boyut));
    return 0;
}