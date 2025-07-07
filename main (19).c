/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int i,n ;
    
    printf("Üst sınır değerini giriniz:");
    scanf("%d",&n);
    
    printf("1'den %d'ye kadar tüm sayma sayıları:\n",n);
    
    for(i=1; i<=n; i++){
        
        printf("%d\n",i);
    }
    
    return 0;
    
}