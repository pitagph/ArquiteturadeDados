#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
	int v_nmat;
	char v_nome[30];
	float v_nota[3];
	float v_media;
};


int main(){
	struct aluno aluno010203;
	aluno010203.v_nmat = 120;
	strcpy(aluno010203.v_nome, "Felipe");
	aluno010203.v_nota[0] = 8.5;
	aluno010203.v_nota[1] = 7.2;
	aluno010203.v_nota[2] = 5.4;
	
	aluno010203.v_media=(aluno010203.v_nota[0] + aluno010203.v_nota[1] + aluno010203.v_nota[2]/3.0);
	printf("======================\n");
	printf("Matricula: %d\n", aluno010203.v_nmat);
	printf("Nome do Aluno: %s\n", aluno010203.v_nome);
	printf("Media: %2f\n", aluno010203.v_media);
	printf("======================\n");
	system("pause");
	return(0);
	
}


