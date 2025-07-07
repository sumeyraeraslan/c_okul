/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <math.h>


int main() {
    
    float a,b,c;
    float kok1,kok2,imajiner;
    float diskiriminant;
    
    printf("aX^2 + bX + c şeklindeki ikinci derece a,b ve c katsayılarını girin:");
    scanf("%f%f%f", &a,&b,&c);
    
    diskiriminant= (b*b)- (4*a*c);
    
    if (diskiriminant>0){
        
        kok1= (-b+ sqrt(diskiriminant)) /(2*a);
        kok2= (-b - sqrt(diskiriminant)) / (2*a);
        
        printf("iki adet ayrık ve gerçel kök bulunmaktadır:%.2f and %.2f", kok1,kok2);
        
    }else if(diskiriminant==0){
        kok1=kok2=-b/(2*a);
        
        printf("Birbirne eşit iki adet gerçel kök bulunmaktadır:%.2f and %.2f",kok1,kok2);
        
    }else if(diskiriminant<0){
        
        kok1=kok2= -b / (2*a);
        
        imajiner=sqrt(-diskiriminant) / (2*a);
        
        printf(" İki adet yarık ve karmaşık kök bulunmaktadır: %.2f + i%.2f and %.2f- i%.2f",
        kok1,imajiner,kok2,imajiner);
    }
        
    
    return 0;


}
    
 
