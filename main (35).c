/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Yığının maksimum boyutu

// Yığı yapısını tanımlıyoruz
typedef struct {
    int arr[MAX]; // Elemanları tutacak dizi
    int top;      // Yığının en üstündeki elemanın indeksini tutar
} Stack;

// Yığıyı başlatma fonksiyonu
void initStack(Stack *s) {
    s->top = -1; // Yığın başlangıçta boş
}

// Yığıya eleman ekleme (push) fonksiyonu
int push(Stack *s, int value) {
    if (s->top == MAX - 1) { // Yığının dolu olup olmadığını kontrol et
        printf("Yığı dolu! Eleman eklenemiyor.\n");
        return -1; // Hata durumu
    }
    s->arr[++(s->top)] = value; // Elemanı yığıya ekle
    return 0; // Başarılı
}

// Yığından eleman çıkarma (pop) fonksiyonu
int pop(Stack *s) {
    if (s->top == -1) { // Yığının boş olup olmadığını kontrol et
        printf("Yığı boş! Eleman çıkarılamıyor.\n");
        return -1; // Hata durumu
    }
    return s->arr[(s->top)--]; // En üstteki elemanı çıkar ve geri döndür
}

// Yığının içeriğini yazdırma fonksiyonu
void printStack(Stack *s) {
    printf("Yığındaki elemanlar: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->arr[i]); // Yığının elemanlarını yazdır
    }
    printf("\n");
}

int main() {
    Stack myStack; // Yığıyı tanımlıyoruz
    initStack(&myStack); // Yığıyı başlatıyoruz

    // Yığıya eleman ekliyoruz
    push(&myStack, 5);
    push(&myStack, 6);
    push(&myStack, 7);

    // Yığının içeriğini yazdırıyoruz
    printStack(&myStack);

    // Yığından eleman çıkarıyoruz
    printf("Çıkarılan eleman: %d\n", pop(&myStack));
    printf("Çıkarılan eleman: %d\n", pop(&myStack));

    // Yığının güncel içeriğini yazdırıyoruz
    printStack(&myStack);

    return 0; // Program sonlandı
}