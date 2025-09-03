#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 200
#define N 200
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"
#define reset "\e[0m"



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
				printf(BLU"*"reset);
			}
			printf("\n");
			printf(BLU"*\t                                                 \t*\n"reset);
			printf(BLU"*\t 1. Ajouter un livre au stock.                   \t*\n"reset);
			printf(GRN"*\t 2. Afficher tous les livres disponibles.        \t*\n"reset);
			printf(YEL"*\t 3. Rechercher un livre par son titre.           \t*\n"reset);
			printf(MAG"*\t 4. Mettre a jour la quantite d'un livre.        \t*\n"reset);
			printf(CYN"*\t 5. Supprimer un livre du stock.                 \t*\n"reset);
			printf(WHT"*\t 6. Afficher le nombre total de livres en stock. \t*\n"reset);
			printf(RED"*\t 7. Quitter le programme.                        \t*\n");
			printf("*\t                                                 \t*\n");
			for(i=0 ;i < 65 ;i++){
				printf("*");
			}
			printf("\n"reset);
			printf("Donner votre choix : ");
			scanf("%d",&choix);
			
		} while(choix <=0 && choix >7);
		switch (choix){
			case 1 :
				printf(BLU"************************************************************\n");
				printf("**                    Ajouter un livre                    **\n");
				printf("************************************************************\n");
				printf("\t Donner le titre du %d livre     : ",n+1);
				scanf("%s",titres[n]);
				printf("\t Donner l'auteur du %d livre     : ",n+1);
				scanf("%s",auteurs[n]);
				printf("\t Donner le prix du %d livre      : ",n+1);
				scanf("%f",&prix[n]);
				printf("\t Donner la quantiter du %d livre : ",n+1);
				scanf("%d",&quantite[n]);
				n++;
				printf("************************************************************\n");
				printf("**           Le Livre a ete ajouter avec succee.            **");
				printf("************************************************************\n");
				printf("Appuyer sur entrer ! "reset);
				getchar();
				getchar();
				system("cls");
				break;
			case 2 : 
				if(n==0){
					printf(GRN"La biblioteque est vide!\n");
					printf("Appuyer sur entrer ! "reset);
					getchar();
					getchar();
					system("cls");
					break;
				}
				printf(GRN"*");
				for(i=0;i<col_width_titre+4;i++){
					printf("*");
				}
				printf("*");
				for(i=0;i<col_width_titre+3;i++){
					printf("*");
				}
				printf("*");
				for(i=0;i<col_width_titre+3;i++){
					printf("*");
				}printf("*");
				for(i=0;i<col_width_titre+3;i++){
					printf("*");
				}
				printf("*\n");
				printf("** %-*s ** %-*s ** %-*s ** %-*s **\n", col_width_titre, "Titre",
                                     col_width_titre, "Auteur",
                                     col_width_titre, "Prix",
									 col_width_titre,"Quantite");
				printf("*");
				for(i=0;i<col_width_titre+4;i++){
					printf("*");
				}
				printf("*");
				for(i=0;i<col_width_titre+3;i++){
					printf("*");
				}
				printf("*");
				for(i=0;i<col_width_titre+3;i++){
					printf("*");
				}printf("*");
				for(i=0;i<col_width_titre+3;i++){
					printf("*");
				}
				printf("*\n");
				for(int i=0;i<n;i++){
					printf("** %-*s ** %-*s ** %-*.2f ** %-*d **\n", col_width_titre, titres[i],
                                     col_width_titre, auteurs[i],
                                     col_width_titre, prix[i],
									 col_width_titre,quantite[i]);
				}
				printf("*");
				for(i=0;i<col_width_titre+4;i++){
					printf("*");
				}
				printf("*");
				for(i=0;i<col_width_titre+3;i++){
					printf("*");
				}
				printf("*");
				for(i=0;i<col_width_titre+3;i++){
					printf("*");
				}printf("*");
				for(i=0;i<col_width_titre+3;i++){
					printf("*");
				}
				printf("*\n");
				printf("Appuyer sur entrer ! "reset);
				getchar();
				getchar();
				system("cls");
				break;
			case 3 :
				char tit[M];
				printf(YEL"donner le titre du livre  a rechercher : ");
				scanf("%s",tit);
				printf("\n");
				int trouver = 0;
				for(i = 0;i<n;i++){
					if(strcmp(titres[i],tit) == 0){
						int j=0;
						trouver=1;
						printf("*");
						for(j=0;j<col_width_titre+4;j++){
							printf("*");
						}
						printf("*");
						for(j=0;j<col_width_titre+3;j++){
							printf("*");
						}
						printf("*");
						for(j=0;j<col_width_titre+3;j++){
							printf("*");
						}printf("*");
						for(j=0;j<col_width_titre+3;j++){
							printf("*");
						}
						printf("*\n");
						printf("** %-*s ** %-*s ** %-*.2f ** %-*d **\n", col_width_titre, titres[i],
                                     col_width_titre, auteurs[i],
                                     col_width_titre, prix[i],
									 col_width_titre,quantite[i]);
						printf("*");
						for(j=0;j<col_width_titre+4;j++){
							printf("*");
						}
						printf("*");
						for(j=0;j<col_width_titre+3;j++){
							printf("*");
						}
						printf("*");
						for(j=0;j<col_width_titre+3;j++){
							printf("*");
						}printf("*");
						for(j=0;j<col_width_titre+3;j++){
							printf("*");
						}
						printf("*\n");
					}
				}
				if(trouver == 0){
					printf("*");
					for(i=0;i<col_width_titre+4;i++){
						printf("*");
					}
					printf("*");
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}
					printf("*");
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}printf("*");
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}
					printf("\n");
					printf("** %-*s **\n", ((col_width_titre*4)+11), "le livre n'existe pas dans la biblioteque");
					printf("*");
					for(i=0;i<col_width_titre+4;i++){
						printf("*");
					}
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}
					printf("*");
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}printf("*");
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}
					printf("*\n");
				}
				printf("Appuyer sur entrer ! "reset);
				getchar();
				getchar();
				system("cls");	
				break;
			case 4 : 
				printf(MAG"**************************************************************\n");
				printf("**                 Mise a jour d' un livre                   **\n");
				printf("***************************************************************\n");

				int qte;
				printf("donner le titre du tableaux a mise a jour : ");
				scanf("%s",tit);
				printf("donner la quantiter a metre a jour : ");
				scanf("%d",&qte);
				int t=0;
				for(i=0;i<n;i++){
					if(strcmp(titres[i],tit) == 0){
						quantite[i] = qte;
						t=1;
						printf("*");
						for(i=0;i<col_width_titre+4;i++){
							printf("*");
						}
						for(i=0;i<col_width_titre+3;i++){
							printf("*");
						}
						printf("*");
						for(i=0;i<col_width_titre+3;i++){
							printf("*");
						}printf("*");
						for(i=0;i<col_width_titre+3;i++){
							printf("*");
						}
						printf("*\n");
						printf("** %-*s **\n",((col_width_titre*4)+11),"La quantite du livre a changer");
						printf("*");
						for(i=0;i<col_width_titre+4;i++){
							printf("*");
						}
						for(i=0;i<col_width_titre+3;i++){
							printf("*");
						}
						printf("*");
						for(i=0;i<col_width_titre+3;i++){
							printf("*");
						}printf("*");
						for(i=0;i<col_width_titre+3;i++){
							printf("*");
						}
						printf("*\n");
						break;
					}
				}
				if(t==0){
					printf("*");
					for(i=0;i<col_width_titre+4;i++){
						printf("*");
					}
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}
					printf("*");
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}printf("*");
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}
					printf("*\n");
					printf("** %-*s **\n",((col_width_titre*4)+11),"Le livre est indisponible");
					printf("*");
					for(i=0;i<col_width_titre+4;i++){
						printf("*");
					}
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}
					printf("*");
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}printf("*");
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}
					printf("*\n");
				}
				printf("Appuyer sur entrer ! "reset);
				getchar();
				getchar();
				system("cls");
				break;
			case 5 :
				printf(CYN"***************************************************************\n");
				printf("**           Suppression d'un element du tableaux            **\n");
				printf("***************************************************************\n");
				int s=0;
				printf("Donner le titre du livre a supprimer : ");
				scanf("%s",tit);
				for(i=0;i<n;i++){
					if(strcmp(titres[i],tit) == 0){
						int j;
						for(j=i;j<n-1;j++){
							strcpy(titres[j],titres[j+1]);
							strcpy(auteurs[j],auteurs[j+1]);
							prix[j]=prix[j+1];
							quantite[j]=quantite[j]+1;
						}
						s=1;
						n--;
					}
				}
				if(s==0){
					printf("*");
					for(i=0;i<col_width_titre+4;i++){
						printf("*");
					}
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}
					printf("*");
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}printf("*");
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}
					printf("*\n");
					printf("** %-*s **\n",((col_width_titre*4)+11),"le livre est indisponible.");
					printf("*");
					for(i=0;i<col_width_titre+4;i++){
						printf("*");
					}
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}
					printf("*");
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}printf("*");
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}
					printf("*\n");
				}
				else{
					printf("*");
					for(i=0;i<col_width_titre+4;i++){
						printf("*");
					}
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}
					printf("*");
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}printf("*");
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}
					printf("*\n");
					printf("** %-*s **\n",((col_width_titre*4)+11),"La suppression a effectuer en succee.");
					printf("*");
					for(i=0;i<col_width_titre+4;i++){
						printf("*");
					}
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}
					printf("*");
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}printf("*");
					for(i=0;i<col_width_titre+3;i++){
						printf("*");
					}
					printf("*\n");
				}
				printf("Appuyer sur entrer ! "reset);
				getchar();
				getchar();
				system("cls");
				break;
			case 6 :
				if(n==0){
					printf(WHT"Il y a aucun livre dans la biblioteque.\n"reset);
				}
				else{
					printf(WHT"Le nombre totale des livres en la biblioteque est : %d .\n",n ,reset);
				}
				printf(WHT"Appuyer sur entrer ! "reset);
				getchar();
				getchar();
				system("cls");
				break;
			case 7 :
				return 0;
		}
	}
	return 0;
}
