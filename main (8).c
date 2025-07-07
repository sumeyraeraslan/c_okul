/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>


int main() {
    
    int sayi1, sayi2, sayi3, maksimum;
    
    printf("Lütfen 3 adet sayi giriniz:");
    scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
    
    if((sayi1> sayi2) && (sayi1>sayi3)){
        maksimum =sayi1;
        
    }else if ((sayi2>sayi1) && (sayi2>sayi3)){
        maksimum= sayi2;
    }else if((sayi3>sayi1) && (sayi3> sayi2)){
        
        maksimum=sayi3;
    }
    
    printf("3 sayı içerisinden en büyük değer=%d", maksimum);
    
    return 0;


}
    
 
