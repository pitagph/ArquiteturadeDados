#include <stdio.h>
#include <string.h>

struct aluno {
	int codigo;
	char nome[30];
	float nota;
	};

void imprimir (struct aluno aluno_regular){
printf("\nCodigo do Aluno: %d", aluno_regular.codigo);
printf("\nNome do ALuno: %s", aluno_regular.nome);
printf("\nNota do Aluno: %.2f", aluno_regular.nota);
}

void cadastrar (struct aluno aluno_cadastro){
	printf(" Digite o código do aluno especial: "); 
	scanf("%d%*c", &aluno_cadastro.codigo); 
	printf(" Digite o nome do aluno especial: "); 
	scanf("%s%*c", &aluno_cadastro.nome); 
	printf(" Digite a nota do aluno especial: "); 
	scanf("%f%*c", &aluno_cadastro.nota);
}
	int main(){
struct aluno aluno_0102;
aluno_0102.codigo = 01;
strcpy(aluno_0102.nome, "Phillipe Silva");
aluno_0102.nota = 7.5;
imprimir(aluno_0102);

printf("Fim do Programa.............");
}
