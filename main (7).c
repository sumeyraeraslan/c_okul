/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sayi;

    printf("Bir sayı girin: ");
    scanf("%d", &sayi);
    
    
    if (sayi > 50) {
        printf("Sayı 50'dan büyük.\n");
    } else {
        printf("Sayı 50 veya daha küçük.\n");
    }
    
    return 0;
}