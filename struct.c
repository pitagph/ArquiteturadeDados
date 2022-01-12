#include <stdio.h>

struct Carro{
	int chassi;
	int ano;
	int ndportas;
	char  marca[10];
	char modelo[20];
	char cor[10];
}; 

struct Moto {
	int chassi;
	int ano;
	char marca[10];
	char modelo[10];
	char cor[10];
};

int main (){

struct Moto mt1 = {"12345","2020","Honda", "Titan","Vermelha"};
printf("Motos Disponiveis ------\n");
printf("Modelo da moto: ");
printf(mt1.modelo);
printf("\n");
printf("Marca da Moto: ");
printf(mt1.marca);

struct Carro cr1 = {"3424235","2021","2","Palio","Fiat","Preto"};
printf("\n\n");
printf("Carros Disponiveis -------\n");
printf("Modelo do Carro: ");
printf("%s",cr1.modelo);
printf("\n");
printf("Marca do Carro: ");
printf(cr1.marca);

}


