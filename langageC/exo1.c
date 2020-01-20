#include <stdio.h>

int main(){	
	int pvJ1;
	int pvMonstre;
	int attaque;
	
	pvJ1 = 100;
	pvMonstre = 100;
	attaque = 10;
	
	//Voir si laisser choisir nom joueur est possible comme scanf mais pour caractère.
	
	//Début du combat et affichage des PV.
	
	printf("Un monstre arrive ! Defendez vous ! \n PV Joueur : %d \n PV Monstre : %d \n", pvJ1, pvMonstre);
	
	//Attaquer l'ennemi.
	
	printf("Vous devez vite attaquer ! \nVous sortez votre hache et assenez un coup virulent!! \nLe monstre perd 10 PV !\n");
	
	pvMonstre=pvMonstre-attaque;
	
	printf(" Monstre = %d PV restant, \n Joueur = %d PV restant\n", pvMonstre, pvJ1);
	
	printf("TENNIS!!");




}
