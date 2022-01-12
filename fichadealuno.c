#include <stdio.h>
#include <conio.h>

int main (void){
	
	struct ficha_do_aluno{
		char disciplina[50];
		char nome[60];
		float notas_av[2];
		float media_final;
	};
	
	struct ficha_do_aluno aluno;
	
	printf("\n---------- Cadastro de Aluno --------------------\n\n\n");
	printf("Nome do Aluno.......: ");
	fflush(stdin);
	fgets(aluno.nome, 40, stdin);
	printf("Disciplina..........:");
	fflush(stdin);
	fgets(aluno.disciplina, 40, stdin);
	printf("Digite a primeira nota.....:\n ");
	scanf("%f", &aluno.notas_av[0]);
	printf("Digite a segunda nota......:\n");
	scanf("%f", &aluno.notas_av[1]);
	printf("\n\n --------------- Lendo os dados guardados na Struct ---------------- \n\n");
	printf("Nome................: %s", aluno.nome);
	printf("Disciplina .....: %s", aluno.disciplina);
	printf("Nota da Prova 1 ...: %.2f\n" , aluno.notas_av[0]);
	printf("Nota da Prova 2 ...: %.2f\n" , aluno.notas_av[1]); 	
	system("pause");
}
