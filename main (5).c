/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void degistir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 1, y = 2;
    printf("Önce: x = %d, y = %d\n", x, y);
    degistir(&x, &y);
    printf("Sonra: x = %d, y = %d\n", x, y);
    return 0;
}