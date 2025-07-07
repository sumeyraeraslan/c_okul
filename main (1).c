/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sayi1, sayi2, toplam,cıkar,carp,kalan;
    float bolme;
    
    printf("ilk sayıyı giriniz:");
    scanf("%d",&sayi1);
    
    printf("Ikinci sayiyi giriniz:");
    scanf("%d",&sayi2);
    
    toplam= sayi1+sayi2;
    printf("toplam:%d\n",toplam);
    
    cıkar= sayi1-sayi2;
    printf("cıkar: %d \n",cıkar);
    
    carp= sayi1*sayi2;
    printf("carp:%d \n",carp);
    
    
    if (sayi2!=0){
    bolme=(float)sayi1/(float)sayi2;
    printf("bolme:%.1f\n",bolme);
    kalan=sayi1%sayi2;
    printf("kalan:%d\n",kalan);
    }

    else {
        printf("Bölme işlemi için ikinci sayı sıfır olamaz!\n");
    }
        
    
    
    return 0;
    

}