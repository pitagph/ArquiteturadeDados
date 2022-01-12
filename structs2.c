#include <stdio.h>
#include <stdlib.h>


struct Aluno {
	int codigo;
	char nome[30];
	double nota;
};


int main() {

	struct Aluno a = { 01,"PhillipeSilva",10.0 };


	printf("Hello World!\n");

	printf("Codigo do Aluno: %d\n", a.codigo);
	printf("Nome do Aluno: %s\n", a.nome);
	printf("Nota do Aluno: %2.f\n", a.nota);

	printf("===========================\n");
	struct Aluno b;

	b.codigo = 2;
	strcpy(b.nome, "Edu");
	b.nota = 9.5;
	
	printf("Codigo do Aluno: %d\n", b.codigo);
	printf("Nome do Aluno: %s\n", b.nome);
	printf("Nota do Aluno: %2.d\n", b.nota);

	
	
	
}
