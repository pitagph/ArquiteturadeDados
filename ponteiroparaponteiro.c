#include <stdio.h> // Aplica��o ponteiro para ponteiro @PhillipeSilva 2021 / Dez
int **pt2; // Inicializa��o do Ponteiro para ponteiro pt2
int *pt1; // Inicializa��o do Ponteiro pt1
int x = 10; // Inicializa��o da Vari�vel X
int main(void){
	pt2 = &pt1; // Ponteiro pt2 recebe o endere�o de memoria do ponteiro pt1
	pt1 = &x; // O ponteiro pt1 recebe o endere�o da Vari�vel X
	printf("Valor de X na inicializa��o desta variavel �: %d\n", x);
	printf("==============================\n");
	*pt1 = 30; // Valor adicionado ao ponteiro pt1 que ser� armazenado no endere�o da memoria da variavel X
	printf("Valor de X apos receber o valor do pt1: %d\n", x);
	printf("==============================\n");
	**pt2 = 50; // Valor adicionado ao ponteiro para ponteiro pt2 que ser� armazenado indiretamente no endere�o da memoria da variavel X
	printf("Valor de X apos receber o valor do pt2: %d", x);
	
}


