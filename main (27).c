/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n;
    
    printf("Üst sınır değerini girin:");
    scanf("%d",&n);
    
    printf("1'den %d'ye kadar tüm sayma sayıları:\n",n);
    
    
    i=1;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=n);
    
    
    
    return 0;
}
 
    
    
     
    
