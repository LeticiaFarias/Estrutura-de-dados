#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int primo (int n, int aux) {
	if ((n % n == 0) && (n != 2)){
		return 0;
	} else if (aux > (n / 2)) {
		return 1;
	} else {
		return primo(n, aux + 1);
	}
	
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf ("Digite o número: ");
	scanf ("%d", &n);
	
	if (primo(n, 1)) {
	    	printf ("1");
	} else {
		printf ("0");
	}
}
