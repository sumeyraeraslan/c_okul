/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, sayi;
    
    printf("Çarpım tablosu oluşturucak olan sayıyı giriniz:");
    scanf("%d",&sayi);
    
    for(i=1; i<=10;i++){
        
        printf("%d*%d=%d\n",sayi,i,(sayi*i));
    }
    return 0;
    
    
    
    
    
    
    
    
    
    
    
}