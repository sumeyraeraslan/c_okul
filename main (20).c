/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int i, n ,toplam=0;
    printf("Üst sınır değerini giriniz:");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        toplam += i;
        
    }
    
    printf("İlk %d adet doğal sayının toplamı= %d\n", n, toplam);
    
    return 0;
    
}