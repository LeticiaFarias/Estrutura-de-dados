#include <stdio.h>
#include <stdlib.h>
#include "Reverso.h"

#define N 20 // Definindo tamanho da pilha

struct pilha { // Criando a estrutura da pilha
    int v[N];  // Vetor do tamnaho da pilha
    int topo;  // Topo da pilha 
};



Pilha *criar(){ // Criando a Pilha
    Pilha *pilha = (Pilha*)malloc(sizeof(Pilha)); // Alocando memória pra pilha
    pilha->topo = -1; // Definindo a pilha como vazia, se é -1 significa que não tem nenhum valor
    return pilha; // Retornando a pilha criada
}

int Vazia (Pilha *pilha) {
    if (pilha->topo == -1) {
        return 1;
    } else {
        return 0;
    }
}

int Cheia (Pilha *pilha) {
    if (pilha->topo == N) {
        return 1;
    } else {
        return 0;
    }
}

void Inserir (Pilha *pilha, int v) {
    if (Cheia(pilha)) {
        printf("Impossivel inserir! Pilha cheia!");
    } else {
        pilha->topo = pilha->topo + 1;
        pilha->v[pilha->topo] = v;
    }
}

int Remover (Pilha *pilha) {
    int valor_temp;

    if (Vazia(pilha)) {
		return 0;
    } else {
        valor_temp = pilha->topo;
        pilha->topo = pilha->topo - 1;
        return valor_temp;
    }
}

void Mostrar (Pilha *pilha) {
    printf ("%d ", pilha->v[pilha->topo]);
}

void Liberar(Pilha *pilha) {
    free(pilha);
}
