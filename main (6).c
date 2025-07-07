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
    
    if (sayi % 2 == 0) {
        printf("Sayı çift.");
    } else {
        printf("Sayı tek.");
    }
    
    
    return 0;
}