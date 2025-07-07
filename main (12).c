/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int yas;

    printf("Yaşınızı girin: ");
    scanf("%d", &yas);
    
    if (yas < 0) {
        printf("Geçersiz yaş.\n");
    } else if (yas < 18) {
        printf("Çocuk.\n");
    } else if (yas < 65) {
        printf("Yetişkin.\n");
    } else {
        printf("Yaşlı.\n");
    }
    
    return 0;
}