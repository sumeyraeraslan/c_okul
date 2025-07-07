/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    float a, b, c;

    printf("Birinci kenar uzunluğunu girin: ");
    scanf("%f", &a);
    
    printf("İkinci kenar uzunluğunu girin: ");
    scanf("%f", &b);
    
    printf("Üçüncü kenar uzunluğunu girin: ");
    scanf("%f", &c);
    
    
    if (a + b > c && a + c > b && b + c > a) {
       
        if (a == b && b == c) {
            printf("Üçgen eşkenar.\n");
        } else if (a == b || a == c || b == c) {
            printf("Üçgen ikizkenar.\n");
        } else {
            printf("Üçgen çeşitkenar.\n");
        }
    } else {
        printf("Girilen kenar uzunlukları ile bir üçgen oluşturulamaz.\n");
    }
    
    return 0;
}