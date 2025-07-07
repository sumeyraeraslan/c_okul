/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
     int benimMatriksim[2][3]={ {1,4,2},{3,6,8} };
     
     int i,j;
     for(i=0;i<2;i++){
         for(j=0; j<3;j++){
             printf("%d ",benimMatriksim[i][j]);
         }printf("\n");
     }
    return 0;  
}