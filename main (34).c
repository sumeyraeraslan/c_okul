/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
     int benimMatriksim[2][3][4]={
        { {3,4,2,3},{0,-3,9,11},{23,12,23,2} },
        { {13,4,56,3},{5,9,3,5},{3,1,4,9}}};
        
    int i,j,k;
    for (i=0; i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<4;k++){
                printf("%d ", benimMatriksim[i][j][k]);
                
            }
            printf("\n");
        }
    }
         
         
          
                                
     
}