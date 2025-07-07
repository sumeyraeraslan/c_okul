/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int sayi;
    
    bool PozitifMi= true;
    bool NegatifMi= false;
    
    printf("Bir sayı giriniz:");
    scanf("%d",&sayi);
    
    if (sayi>0){
        printf("Sayı pozitif.\n");
        
        }else if  (sayi<0){
            printf("Sayı negatif.\n");
            
            }else{
            printf("Sayı 0'dır.\n");
        }
    

    
    
    return 0;
}
    
 
