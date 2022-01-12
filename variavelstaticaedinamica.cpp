#include <stdio.h>

static int a = 0;  // Variavel global, alocação estática
	   int x = 0; // Variavel global, alocação autmática ou dinamica

void incrementa (void){
	int b = 0; // Variavel local, alcação automática
	static int c = 0; // Varivel local, alcação estática
	
	printf ("a: %d, b: %d, c: %d\n", a,b,c); // Saída dos resultados
	a++; // incrementação na variavel global
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
