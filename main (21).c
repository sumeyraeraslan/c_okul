/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int i, alt_sınır, ust_sınır, toplam=0;
    
    printf("Alt sınırı giriniz:");
    scanf("%d",&alt_sınır);
    
    printf("Üst sınırı giriniz:");
    scanf("%d",&ust_sınır);
    
    for(i=alt_sınır;i<=ust_sınır;i++){
        
        toplam += i;
    }
    printf("%d ve %d arasındaki sayıların toplamı= %d",alt_sınır,ust_sınır,toplam);
    
    return 0;
    
}