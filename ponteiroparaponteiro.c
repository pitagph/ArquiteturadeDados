#include <stdio.h> // Aplicação ponteiro para ponteiro @PhillipeSilva 2021 / Dez
int **pt2; // Inicialização do Ponteiro para ponteiro pt2
int *pt1; // Inicialização do Ponteiro pt1
int x = 10; // Inicialização da Variável X
int main(void){
	pt2 = &pt1; // Ponteiro pt2 recebe o endereço de memoria do ponteiro pt1
	pt1 = &x; // O ponteiro pt1 recebe o endereço da Variável X
	printf("Valor de X na inicialização desta variavel é: %d\n", x);
	printf("==============================\n");
	*pt1 = 30; // Valor adicionado ao ponteiro pt1 que será armazenado no endereço da memoria da variavel X
	printf("Valor de X apos receber o valor do pt1: %d\n", x);
	printf("==============================\n");
	**pt2 = 50; // Valor adicionado ao ponteiro para ponteiro pt2 que será armazenado indiretamente no endereço da memoria da variavel X
	printf("Valor de X apos receber o valor do pt2: %d", x);
	
}


