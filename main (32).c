/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int eklenecek_sayi, eklenecek_indeks;
   int BenimDizim[]={3,4,1,9,6,2,8};
   int boyut= sizeof(BenimDizim) /sizeof(BenimDizim[0]);
   
   for(int indeks=0; indeks<boyut;indeks++){
       printf("%d ",BenimDizim[indeks]);
       
   }
   printf("\nDiziye eklenecek sayıyı giriniz:");
   scanf("%d",&eklenecek_sayi);
   printf("Sayının hangi indekse ekleneceğini belirtiniz:");
   scanf("%d",&eklenecek_indeks);
   
   for(int indeks= boyut -1; indeks> eklenecek_indeks; indeks--){
       BenimDizim[indeks]=BenimDizim[indeks -1];
       
   }
   BenimDizim[eklenecek_indeks]=eklenecek_sayi;
   
   for(int indeks=0;indeks<boyut;indeks++){
       printf("%d ",BenimDizim[indeks]);
   }
   
   return 0;
}
 
    
    
     
    
