#include <stdio.h>
#include "Reverso.h"
#define N 20 // Definindo tamanho da pilha

struct pilha { // Criando a estrutura da pilha
    int v[N];  // Vetor do tamnaho da pilha
    int topo;  // Topo da pilha 
};

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
