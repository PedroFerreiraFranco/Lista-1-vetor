#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geraVetor(int v[], int n, int m){
	int i;
	srand(time(NULL));
	for(i = 0; i < n; i++){
		v[i] = rand()%m + 1;
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
//--------------------
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
	int i, menor = v[0];
	for(i=1;i<n;i++){
	if(v[i]<menor){
		menor=v[i];
	}
}
return menor;
}
//----------------------
int existe(int x, int v[], int n){
	int cont=0,i;
	for(i=0;i<n;i++){
		if(v[i]==x){
			cont++;
		}
	}
	return cont;	
}
//----------------------
int somaVet(int v[], int n){
	int i, soma = 0;

	
	for(i = 0; i < n; i++){
		soma += v[i];
	}
	
	return soma;
}
//----------------------
int advinha(int v[], int n, int x){
	int certo = 0,i;
	for(i = 0; i < n; i++){
		if(x == v[i]){
			certo = 1;
			return certo;
		}
	}
	return certo;
}
