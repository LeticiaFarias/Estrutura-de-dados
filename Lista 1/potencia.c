#include <stdio.h>
#include <locale.h>

int potencia(int n, int k){
	if (k == 0) {
		return 1;
	} else if (k == 1) {
		return n;
	} else {
		return (n * potencia(n, k - 1));
	}	
}

int main () { 
	setlocale(LC_ALL, "Portuguese");
	
	int n, k;
	printf("Digite a base e o expoente da potência: ");
	scanf ("%d %d", &n, &k);
	
	printf ("O resultado é: %d", potencia (n, k));
	
	return 0;
}
