#include <stdio.h>
int x = 100;
int y = 200;
int z = 300;

int main(void){
	printf("Valor da Variavel X: %d\n", x);
	printf("Valor da Variavel Y: %d\n", y);
	printf("Valor da Variavel Z: %d\n", z);
	printf("===========\n", x);
int *pt = &x;
printf("Local do endereco da memoria do ponteiro pt : ");
printf("%d\n", pt);
*pt = 400;
printf("\nValor da variavel X quando adicionamos um valor ao ponteiro pt que esta apontado a propria variavel X : ");
printf("%d\n", x);
pt++;
*pt = 600;
printf("\nValor da variavel Y quando adicionamos um valor ao ponteiro pt que agora está apontado a variavel Y (atraves do comando pt++) : ");
printf("%d\n", y);
printf("\nLocal do endereço da memoria do ponteiro pt : ");
printf("%d\n", pt);
pt++;
*pt = 900;
printf("\nValor da variavel Z quando adicionamos um valor ao ponteiro pt que agora está apontado a variavel Z (atraves do comando pt++) : ");
printf("%d\n", z);
printf("\nLocal do endereco da memoria do ponteiro pt : ");
printf("%d\n", pt);
}

