#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t[4],i;                           // exemple de remplissage et d'affichage d'un tableau
	       //partie de remplissage
	for(i=0;i<4;i++){
		printf("donner svp le nombre de case N%d :",i+1);
		scanf("%d\\n",&t[i]);
	}
       	// partie d'affichage
	for(i=0;i<4;i++){
		printf("t[%d]=%d\n",i,t[i]);
	}
}
