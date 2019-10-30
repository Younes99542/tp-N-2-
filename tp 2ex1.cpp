#include<stdio.h>   

#include<stdlib.h>

int main()
{

//exercice2

int i=0,n,VN=0,VP=0;

float S=0,T[i];

//S=somme,VP:valeurs positives, VN : valeurs négatives

printf("donner la taille du tableau\n");

scanf("%d",&n);

printf("Saisissez les valeurs du tableau\n");

for(i=0;i<n;i++)

scanf("%f",&T[i]);

for(i=0;i<n;i++){

	S+=T[i];	

	if(T[i]>=0)

	VP++;

	else

	VN++;

	}	

printf("la somme est:%f\n le nombre des valeurs positives est:%d\n le nombre des valeurs négatives est:%d\n ",S,VP,VN);
system("pause");


}
