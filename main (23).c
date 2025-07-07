/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int i, sayi;
    
    printf("Çarpanları hesaplanacak sayıyı giriniz:");
    scanf("%d",&sayi);
    
    printf("%d sayının tüm çarpanları:\n",sayi);
    
    for(i=1; i<=sayi;i++){
        if(sayi % i==0){
            printf("%d, ",i);
        }
    }
    return 0;
    
}