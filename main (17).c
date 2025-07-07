/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char islem;
    float sayi1, sayi2, sonuc=0.0f;
    
    printf("Basit Hesap Makinesi Uygulaması\n");
    printf("-------------------------------\n");
    printf("Lütfen [sayı 1] [+ - * /] [sayı 2] giriniz\n");
    
    scanf("%f %c %f",&sayi1, &islem, &sayi2);
    
    switch(islem){
        
        case '+':
            sonuc= sayi1 + sayi2;
            break;
        case '-':
            sonuc= sayi1 - sayi2;
            break;
        
        case '*':
            sonuc= sayi1 * sayi2;
            break;
        case '/':
            sonuc= sayi1 / sayi2;
            break;
        default:
            printf("Geçersiz işlem!!!");
            
            
    }
    
    printf("%.2f %c %.2f=%.2f", sayi1, islem, sayi2, sonuc);
    return 0;
}