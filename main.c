#include <stdio.h>

#include "module.h"

#include "exotableau.c"

#include "assert.h"



int main(){
	int t1 [] = {61, 52, 33};
	int t2 [] = {33, 52, 61};
	int n = 3;
	int t3 [] = {0, 0, 0};
	printf("Le résultat du premier tableau est :\n");
	print_tableau (t1, n);
        printf("Le résultat du second tableau est :\n");
        print_tableau (t2, n);
	int pairTab[50];
	int compteur = 0;
	for (int i = 0; i<50; ++i) {
			assert (compteur < 50);
			pairTab[compteur++] = i*2;
	}
	printf("Le tableau des nombres pairs entre 0 et 100 est:\n");
	print_tableau (pairTab, 50);
	sumTab(t1, t2, t3, n);
	printf("La somme des deux tableaux est donc:\n");
	print_tableau(t3, n);
	char mot[] = "Salut";
	int l = mylen(mot);
	printf("La taille de la chaine est: %d\n", l);
}
