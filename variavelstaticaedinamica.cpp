#include <stdio.h>

static int a = 0;  // Variavel global, aloca��o est�tica
	   int x = 0; // Variavel global, aloca��o autm�tica ou dinamica

void incrementa (void){
	int b = 0; // Variavel local, alca��o autom�tica
	static int c = 0; // Varivel local, alca��o est�tica
	
	printf ("a: %d, b: %d, c: %d\n", a,b,c); // Sa�da dos resultados
	a++; // incrementa��o na variavel global
	b++;
	c++;
}

int main(void){
	int i;
	for (i=0;i<5;i++)
	incrementa();
	printf("pause");
	return(0);
	
}
