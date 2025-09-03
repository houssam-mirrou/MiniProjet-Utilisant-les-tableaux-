#include <stdio.h>
#include <stdlib.h>
#include "tableaux.h"
#define M 200
#define N 200




int main() {
	char titres[N][M];
	char auteurs[N][M];
	float prix[N];
	int quantite[N];
	int n=0;
	
	//declaration pour ajouter un nouveaux livre
	
	int k=0;
	printf("donner le nombre des livre a ajouter : ");
	scanf("%d",&k);
	int i=0;
	printf("\n -- Inserssion des livres -- \n");
	for(i=0;i<k;i++){
		printf("donner le titre du %d livre : ",i);
		scanf("%s",titres[i]);
		printf("donner l'auteur du %d livre : ",i);
		scanf("%s",auteurs[i]);
		printf("donner le prix du %d livre : ",i);
		scanf("%f",&prix[i]);
		printf("donner la quantiter du %d livre : ",i);
		scanf("%d",&quantite[i]);
		n++;
	}
	//afficher les livre du tableaux
	
	printf("\n -- Affichage des livres -- \n");
	
	for(i=0;i<n;i++){
		printf("Titre : %s , Auteur : %s , Prix : %.2f , Quantite %d\n",titres[i],auteurs[i],prix[i],quantite[i]);
	}
	
	// Mise A jour du tableaux
	
	printf("\n -- Mise a jour d' un livre -- \n");
	int qte;
	char tit[M];
	printf("donner le titre du tableaux a mise a jour : ");
	scanf("%s",tit);
	printf("donner la quantiter a metre a jour : ");
	scanf("%d",&qte);
	int t=0;
	for(i=0;i<n;i++){
		if(strcmp(titres[i],tit) == 0){
			quantite[i] = qte;
			t=1;
		}
	}
	if(t==0){
		printf("Le mise a jour n'a pas ete effectuer en succee. \n");
	}
	else{
		printf("Le mise a jour a ete effectuer en succee;\n");
		
		printf("\n -- Affichage des livres -- \n");
	
		for(i=0;i<n;i++){
			printf("Titre : %s , Auteur : %s , Prix : %.2f , Quantite %d\n",titres[i],auteurs[i],prix[i],quantite[i]);
		}
	}
	
	//Suppression d un element du tableaux
	printf("\n -- Suppression d'un element du tableaux -- \n");
	int s=0;
	
	printf("Donner le titre du livre a supprimer : ");
	scanf("%s",tit);
	for(i=0;i<n;i++){
		if(strcmp(titres[i],tit) == 0){
			int j;
			for(j=i+1;j<n;j++){
				strcpy(titres[i],titres[j]);
				strcpy(auteurs[i],auteurs[j]);
				prix[i]=prix[j];
				quantite[i]=quantite[j];
			}
			s=1;
			n--;
		}
	}
	if(s==0){
		printf("le livre n'est pas trouver dans le tableaux.\n");
	}
	else{
		printf("\n -- Le tableaux apres la suppression des element -- \n");
		for(i=0;i<n;i++){
			printf("Titre : %s , Auteur : %s , Prix : %.2f , Quantite %d\n",titres[i],auteurs[i],prix[i],quantite[i]);
		}
	}
	
	
	
	
	
	
	
	return 0;
}
