#include <stdio.h>

 int main(){
int x = 0, y = 0; // Posição inicial comum

    // ===== Movimento do Bispo (diagonal superior direita x++, y++) usando for =====
    printf("Movimento do Bispo: Cima/Direita\n");
    for (int i = 0; i < 5; i++) {
        x++;
        y++;
        printf("Cima/Direita: %d casa\n", x,y);
    }
// Reiniciando posição
    x = 0;

    // ===== Movimento do Bispo (diagonal superior direita x++, y++) usando for =====
    printf("Movimento do Bispo: Cima/Esquerda\n");
    for (int i = 0; i < 5; i++) {
        x++;
        y++;
        printf("Cima/Esquerda: %d casa\n", x,y);
   
    }



 return 0;
 }
