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
	int x =0;
	int i=0;
	int choix;
	int sd;
	int col_width_titre = 12;
	while(x == 0){
		do{
			int i = 0;
			for(i=0 ;i < 65 ;i++){
				printf("*");
			}
			printf("\n");
			printf("*\t                                                 \t*\n");
			printf("*\t 1. Ajouter un livre au stock.                   \t*\n");
			printf("*\t 2. Afficher tous les livres disponibles.        \t*\n");
			printf("*\t 3. Rechercher un livre par son titre.           \t*\n");
			printf("*\t 4. Mettre a jour la quantite d'un livre.        \t*\n");
			printf("*\t 5. Supprimer un livre du stock.                 \t*\n");
			printf("*\t 6. Afficher le nombre total de livres en stock. \t*\n");
			printf("*\t 7. Quitter le programme.                        \t*\n");
			printf("*\t                                                 \t*\n");
			for(i=0 ;i < 65 ;i++){
				printf("*");
			}
			printf("\n");
			printf("Donner votre choix : ");
			scanf("%d",&choix);
			
		} while(choix <=0 && choix >7);
		switch (choix){
			case 1 :
				for(i=0 ;i < 65 ;i++){
					printf("*");
				}
				printf("\n");
				printf("*\t donner le titre du %d livre     : ",n+1);
				scanf("%s",titres[n]);
				printf("*\t donner l'auteur du %d livre     : ",n+1);
				scanf("%s",auteurs[n]);
				printf("*\t donner le prix du %d livre      : ",n+1);
				scanf("%f",&prix[n]);
				printf("*\t donner la quantiter du %d livre : ",n+1);
				scanf("%d",&quantite[n]);
				n++;
				printf("\t Le Livre a ete ajouter en succee.\n");
				for(i=0 ;i < 65 ;i++){
					printf("*");
				}
				printf("\n");
				getchar();
				getchar();
				system("cls");
				break;
			case 2 : 
				
				printf("*");
				for(i=0;i<col_width_titre+2;i++){
					printf("*");
				}
				printf("*");
				for(i=0;i<col_width_titre+2;i++){
					printf("*");
				}
				printf("*");
				for(i=0;i<col_width_titre+2;i++){
					printf("*");
				}printf("*");
				for(i=0;i<col_width_titre+2;i++){
					printf("*");
				}
				printf("*\n");
				printf("* %-*s * %-*s * %-*s *\n", col_width_titre, "Titre",
                                     col_width_titre, "Auteur",
                                     col_width_titre, "Prix",
									 col_width_titre,"Quantite");
				printf("*");
				for(i=0;i<col_width_titre+2;i++){
					printf("*");
				}
				printf("*");
				for(i=0;i<col_width_titre+2;i++){
					printf("*");
				}
				printf("*");
				for(i=0;i<col_width_titre+2;i++){
					printf("*");
				}printf("*");
				for(i=0;i<col_width_titre+2;i++){
					printf("*");
				}
				printf("*\n");
				printf("* %**s * %**s * %**s *\n", col_width_titre, titres[i],
                                     col_width_titre, auteurs[i],
                                     col_width_titre, prix[i],
									 col_width_titre,quantite[i]);
				printf("*");
				for(i=0;i<col_width_titre+2;i++){
					printf("*");
				}
				printf("*");
				for(i=0;i<col_width_titre+2;i++){
					printf("*");
				}
				printf("*");
				for(i=0;i<col_width_titre+2;i++){
					printf("*");
				}printf("*");
				for(i=0;i<col_width_titre+2;i++){
					printf("*");
				}
				printf("*\n");
				getchar();
				getchar();
				system("cls");
				break;
			case 3 :
				for(i=0 ;i < 20 ;i++){
					printf("*");
				}
				char tit[M];
				printf("donner le titre du livre  a rechercher : ");
				scanf("%s",tit);
				int trouver = 0;
				for(i = 0;i<n;i++){
					if(strcmp(titres[i],tit) == 0){
						trouver=1;
						printf("*\t Titre *\t Auteur *\t Prix *\t Quantite     \t*\n");
						printf("*\t %s \t %s \t %.2f \t %d \t*\n",titres[i],auteurs[i],prix[i],quantite[i]);
					}
				}
				if(trouver == 0){
					printf("*\t le livre n'existe pas dans la biblioteque \t*\n");
				}
				break;
			case 4 : 
				printf("\n -- Mise a jour d' un livre -- \n");
				int qte;
				printf("donner le titre du tableaux a mise a jour : ");
				scanf("%s",tit);
				printf("donner la quantiter a metre a jour : ");
				scanf("%d",&qte);
				int t=0;
				for(i=0;i<n;i++){
					if(strcmp(titres[i],tit) == 0){
						quantite[i] = qte;
						printf("Le mise a jour a ete effectuer en succee;\n");
						break;
					}
				}
				if(t==1){
					printf("Le mise a jour n'a pas ete effectuer en succee. \n");
				}
				break;
			case 5 :
				printf("\n -- Suppression d'un element du tableaux -- \n");
				int s=0;
				printf("Donner le titre du livre a supprimer : ");
				scanf("%s",tit);
				for(i=0;i<n;i++){
					if(strcmp(titres[i],tit) == 0){
						int j;
						for(j=i;j<n-1;j++){
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
					printf("La suppression a effectuer en succee.\n");
				}
				break;
			case 6 :
				printf("Le nombre totale des livres en la biblioteque est : %d .\n",n);
				break;
			case 7 :
				return 0;
		}
	}
	return 0;
}
