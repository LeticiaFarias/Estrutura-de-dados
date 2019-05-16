typedef struct pilha Pilha;

void Inserir (Pilha *pilha, int v);

int Remover (Pilha *pilha);

int Vazia (Pilha *pilha);

int Cheia (Pilha *pilha);

void Mostrar (Pilha *pilha);

Pilha *criar();

void Liberar (Pilha *pilha);