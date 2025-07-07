/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main(){
   int dizi[] = {5,15,18,-9,4,-8,11,14,21,86};
    int toplam = 0,sayac = 0;
   float ortalama;

    for(int i=0 ; i<10 ; i++){
        if(dizi[i] > 0){
            toplam += dizi[i];
            sayac++;
        }            
    }

    ortalama = (float)toplam / sayac; 
    printf("Dizideki %d tane pozitif var. Bu sayilarin ortalamasi : %.2f",sayac, ortalama); 
}