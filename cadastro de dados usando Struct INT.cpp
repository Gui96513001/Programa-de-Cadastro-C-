#include<stdio.h>
#include<stdlib.h>

struct Aluno{
	double ra;
	char nome[50];
	char curso[50];
};

int main(){
	
	int i;
		
	struct Aluno al[3];
	
	
	
	printf("CADASTRE SEUS DADOS:\n\n");
	for (i=0;i<=2;i++){
		
		printf("RA: ");
		scanf("%lf",&al[i].ra);
		
		printf("NOME: ");
		scanf(" %[^\n]",&al[i].nome);
		
		printf("CURSO: ");
		scanf(" %[^\n]",&al[i].curso);
		
		printf("-----------\n");
		
	}
	
		
	printf("\nOS SEGUINTES DADOS FORAM CADASTRADOS:\n\n");
	for (i=0;i<=2;i++){

		printf("RA: %.0lf\n",al[i].ra);
		printf("NOME: %s\n",al[i].nome);
		printf("CURSO: %s\n",al[i].curso);
		
		printf("-----------\n");
		
	}
		
	printf("\n\n");
	system("pause");
}



