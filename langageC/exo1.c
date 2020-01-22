#include <stdio.h>

int main(){	
	int pvJ1;
	int pvMonstre;
	int attaque;
	int attaqueMonstre;
	int choixAction;
	int defenseJoueur;
	
	pvJ1 = 100;
	pvMonstre = 100;
	attaque = 10;
	attaqueMonstre = 20;
	
	//Voir si laisser choisir nom joueur est possible comme scanf mais pour caractère.
	
	//Début du combat et affichage des PV.
	
	printf("Un monstre arrive ! Defendez vous ! \n PV Joueur : %d \n PV Monstre : %d \n\n", pvJ1, pvMonstre);
	
	//Menu, attaque ou défense, choix (exo4)
	
	printf("===CHOISISSEZ UNE ACTION===\n\n");
	printf("1. Attaque\n");
	printf("2. Defense\n");
	printf("Entrez le numero de l'action choisie\n");
	scanf("%d", &choixAction);
	
	printf("\n");
	//EXO1 Attaquer l'ennemi.
	//printf("Vous devez vite attaquer ! \nVous sortez votre hache et assenez un coup virulent!! \nLe monstre perd 10 PV !\n");
	//pvMonstre=pvMonstre-attaque;
	//printf(" Monstre = %d PV restant, \n Joueur = %d PV restant \n", pvMonstre, pvJ1);


//EXO2 : Attaquer jusqu'à ce que pv monstre=0 + EXO4 : les choix d'actions.
//Contre attaque monstre
while(pvJ1!=0 || pvMonstre!=0){
	//Pourquoi le code ne s'arrête plus quand un personnage meut ? Mauvais placement du while ?
	switch (choixAction)
	{
	case 1:
			if(pvMonstre>0) {
				printf("Vous devez vite attaquer ! \nVous sortez votre hache et assenez un coup virulent!! \nLe monstre perd 10 PV !\n");
	
				pvMonstre=pvMonstre-attaque;
	
				printf(" Monstre = %d PV restant, \n Joueur = %d PV restant \n", pvMonstre, pvJ1);
				

			if(pvMonstre==0) {
				printf("Le Monstre est KO ! Vous avez gagne le combat !!\n");
				break;
			} 
			}
//contre attaque Monstre

			if(pvMonstre<100) {
				printf("Le Monstre se defend ! Il donne un coup de griffe !\n");
	
				pvJ1=pvJ1-attaqueMonstre;
	
				printf("Vous etes blesse, -20 PV...\n");
				printf(" Monstre = %d PV restant, \n Joueur = %d PV restant \n", pvMonstre, pvJ1);
				
//défense Joueur.

	case 2:
	
		printf("Vous levez votre bouclier et encaissez le coup !\n");
	
		defenseJoueur = attaqueMonstre/4;
		//trouver moyen de dire que si monstre attaque, et J1 defend : l'attaque du monstre se divise.
		break;
	
			if (pvJ1==0) {
				printf("Vous etes KO... Vous ferez mieux la prochaine fois! \n");
				break;
			}
			}
		}
//default si pas bon chiffre entré.
	//default:
	//printf("Vous n'avez pas entré un chiffre valide, Réessayez !\n");
	//break;
	//trouver moyen de faire ça mais sans 
	}
	
	printf("\n\n");
	return 0;
	//Trouver comment faire une boucle qui permettra de faire le choix attaque/defense plusieurs fois, créer des tours interactifs.
}

//Pour Exo 5 : coder une défense un peu plus faible que celle du personnage, trouver equivalent d'un Math random (rand ?) et créer une variable pour prendre en compte l'aléatoire de l'attaque ou de la défense.

//Pour Exo 6 : créer une variable PM à 15, créer une boucle for pour la régénération de points, créer une var poison qui soustraira -5 à chaque utilisation, implenter le poison dans le switch.
//Pour les dégats par tour, on utilisera un while, qui enlèvera PV par tour d'efficacité.

//Pour Exo 7 : ajouter la variable PoisonMonstre, même code que pour le joueur mais ajouter une condition SI où l'on dirait que si PM==0 le poison ne peut pas avoir lieu, ajouter la variable au random.

//Pour Exo 8 : Créer une variable antidote, ajouter comme une possibilité dans le switch, faire un SI qui annulera leffet du poison.


	
