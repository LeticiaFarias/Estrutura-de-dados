#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <malloc.h>
#include <locale.h>

typedef struct { 
	char nome[50];
	char endereco[100];
	char telefone[10];
} Pessoa;

int main () {
	setlocale(LC_ALL, "Portuguese");
	Pessoa pessoa;
	
	int i = 0;
	while(i<3){
		printf("Digite o Nome da pessoa: \n");
		fgets(pessoa.nome, sizeof (pessoa.nome), stdin);
		printf("Digite o endereço da pessoa: \n");
		fgets(pessoa.endereco, sizeof (pessoa.endereco), stdin);
		printf("Digite o telefone da pessoa: ");
		fgets(pessoa.telefone, sizeof (pessoa.telefone), stdin);
	} i++;			


	
} 

