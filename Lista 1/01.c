#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <locale.h>

typedef struct {
	char nome[50];
	char endereco[50];
	char telefone[8];
	float altura;
	char data_nasc[8];	
	float peso;
} Prontuario;

typedef struct {
	char nome[50];
	char endereco[50];
	char telefone[8];
	float altura;
	char data_nasc[8];	
	float peso;
} Paciente;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	Prontuario prontuario;
	Paciente paciente;
	
	printf("------ Dados do Paciente ------\nNOME: ");
	fgets (prontuario.nome, sizeof (prontuario.nome), stdin);

	printf("\nEndereço: ");
	fgets (prontuario.endereco, sizeof (prontuario.endereco), stdin);

	printf("\nTelefone: ");
	fgets (prontuario.telefone, sizeof (prontuario.telefone), stdin);

	printf("\nAltura: ");
	scanf ("%f", &prontuario.altura);
	fflush(stdin);
	
	printf("\nData de Nascimento: ");
	fgets (prontuario.data_nasc, sizeof (prontuario.data_nasc), stdin);
	
	printf("\nPeso: ");
	scanf("%f", &prontuario.peso);
	fflush(stdin);
	
	return 0;
}
