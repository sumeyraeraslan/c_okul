/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>



int main() {
    
    int gun;
    
    printf("Günün, haftanın kaçıncı günü olduğunu giriniz(1-7):");
    scanf("%d",&gun);
    
    switch(gun){
    
        case 1:
            printf("Hafta içi");
            break;
        case 2:
            printf("Hafta içi");
            break;
        case 3:
            printf("Hafta içi");
            break;
        case 4:
            printf("Hafta içi");
            break;
        case 5:
            printf("Hafta içi");
            break;
        case 6:
            printf("Hafta sonu");
            break;
        case 7:
            printf("Hafta sonu");
            break;
        default:
            printf("Haftanın 7 günü vardır. Girdiğiniz gün sayısı geçersizdir.");
        
    }
    
    
    
    return 0;


}
    
 
