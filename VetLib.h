#include <stdio.h>
#include <stdlib.h>

void geraVet(int v[], int n){
	int i;
	srand(time(NULL)); // inicializa gerador
	for(i=0;i<n;i++)
		v[i]=rand()%20; 
}
//--------------------
void leiaVetor(int v[],int n){
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&v[i]);
}
//--------------------
void printVet(int v[], int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d |",v[i]);
	printf("\n");	
}
//----------------------
int somaVet(int v[], int n){
	int i,soma=0;
	for(i=0;i<n;i++)
		soma+=v[i];
	return soma;	
}
//----------------------
int maiorVet(int v[],int n){
	int i, maior = v[0];
	for(i=1;i<n;i++){
	if(v[i]>maior){
		maior=v[i];
	}
}
return maior;
}
//----------------------
int menorVet(int v[],int n){
	int i, maior = v[0];
	for(i=1;i<n;i++){
	if(v[i]<maior){
		maior=v[i];
	}
}
return maior;
}
//----------------------
int menorVet(int v[],int n){
	int i, maior = v[0];
	for(i=1;i<n;i++){
	if(v[i]<maior){
		maior=v[i];
	}
}
return menor;
}
