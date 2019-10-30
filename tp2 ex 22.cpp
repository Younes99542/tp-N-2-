#include<stdio.h>

#include<stdlib.h>

int main()

{

//exercice1,b

	int i;

	char T[6];

	printf("Ecrire les six voyelles de l'alphabet latin\n");

	for(i=0;i<6;i++){

	scanf("%c\n",&T[i]);}
	for(i=0;i<6;i++){
	printf("%c\n",T[i]);}
	system("pause");
}	
