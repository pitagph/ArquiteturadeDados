#include <stdio.h>

int x = 5;
int y = 5;
int *ptr_x;
int *ptr_y;

int main(void){
	ptr_x = &x; // Ponteiro prt_x recebe o endereço da memoria da variavel X
	ptr_y = &y;
	printf("Variavel valor de X : %d  , Variavel valor de Y : %d\n",x, y);
	*ptr_x = x+5;
	*ptr_y = y+5;
	printf("Variavel x e y apos receber o valor no ponteiro ptr_x : %d %d", x, y);
}
