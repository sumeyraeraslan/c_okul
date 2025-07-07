/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char sifre[20];

    printf("Şifrenizi girin: ");
    scanf("%s", sifre);
    
    if (strcmp(sifre, "12345") == 0) {
        printf("Şifre doğru.\n");
    } else {
        printf("Şifre yanlış.\n");
    }
    
    return 0;
}