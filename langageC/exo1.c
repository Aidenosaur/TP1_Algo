#include <stdio.h>

int main(){	
	int pvJ1;
	int pvMonstre;
	int attaque;
	int attaqueMonstre;
	int i;
	
	pvJ1 = 100;
	pvMonstre = 100;
	attaque = 10;
	attaqueMonstre = 20;
	
	//Voir si laisser choisir nom joueur est possible comme scanf mais pour caractère.
	
	//Début du combat et affichage des PV.
	
	printf("Un monstre arrive ! Defendez vous ! \n PV Joueur : %d \n PV Monstre : %d \n", pvJ1, pvMonstre);
	
	//Attaquer l'ennemi.
	
	printf("Vous devez vite attaquer ! \nVous sortez votre hache et assenez un coup virulent!! \nLe monstre perd 10 PV !\n");
	
	pvMonstre=pvMonstre-attaque;
	
	printf(" Monstre = %d PV restant, \n Joueur = %d PV restant \n", pvMonstre, pvJ1);

//EXO2 : Attaquer jusqu'à ce que pv monstre=0

//Contre attaque monstre
while(pvJ1!= 0 || pvMonstre!=0){
if(pvMonstre>0) {
	printf("Vous enchainez les coups!! \n");
	
	pvMonstre=pvMonstre-attaque;
	
printf(" Monstre = %d PV restant, \n Joueur = %d PV restant \n", pvMonstre, pvJ1);

if(pvMonstre==0) {
		printf("Le Monstre est KO ! Vous avez gagne le combat !!\n");
		break;
	} 
}
//défense joueur

if(pvMonstre<100) {
	printf("Le Monstre se defend ! Il donne un coup de griffe !\n");
	
	pvJ1=pvJ1-attaqueMonstre;
	
	printf("Vous etes blesse, -20 PV...\n");
	printf(" Monstre = %d PV restant, \n Joueur = %d PV restant \n", pvMonstre, pvJ1);
	
	if (pvJ1==0) {
		printf("Vous etes KO... Vous ferez mieux la prochaine fois!");
		break;
	}
}
}
}




	
