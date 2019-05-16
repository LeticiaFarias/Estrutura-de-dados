#include <stdio.h>
#include "Reverso.h"

int main () {
    Pilha *p;    
    Pilha *p_aux;
    p = criar();
    p_aux = criar();

    int valor, tamanho, i;
    int vet[tamanho];
    printf("Qual o tamanho da pilha: ");
    scanf ("%d", &tamanho);
    printf("Digite o valor: ");

    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vet[i]);
        Inserir(p, vet[i]);
    }
    
    int aux;
	 for (i = 0; i < tamanho; i++) {
        Mostrar(p);
        Remover(p);
    }
    for (i = 0; i < tamanho; i++) {
        aux = Remover(p);
        Inserir(p, aux);
    }

    Mostrar(p_aux);

    for (i = 0; i < tamanho; i++) {
        Mostrar(p_aux);
        Remover(p_aux);
    }

}