#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p,i;
	p = malloc(10*sizeof(int));
	if (p == NULL) {
		printf("Espaço Insuficiente");
	} else {
		printf("Primeiros 10 numeros.\n");
		for (i=0;i<10;i++){
			p[i] = i+10; // Adicionando 10 numeros no endereço de memoria do ponteiro p
			printf("%d-%d\n",i,p[i]);
		}
		p = realloc(p,20*sizeof(int));
		printf("Realocado para mais 10 numeros.\n");
		for(i=10;i<20;i++){
			p[i] = i+10; // Adicionando mais 10 numeros no endereço de memoria do ponteiro p
			printf(" %d-%d\n", i,p[i]);
			}
			printf("Todos os 20 numeros alocados.\n");
			for(i=0;i<20;i++)
				printf(" %d-%d\n",i,p[i]);
			free(p);
		}
		system("pause");
		return(0);
	}
