#include <stdio.h>

#include "module.h"

#include "exotableau.c"

#include "assert.h"



int main(){
	int tableau [] = {61, 52, 33};
	int n = 3;
	printf("Le résultat du premier tableau est :\n");
	print_tableau (tableau, n);
	int pairTab[50];
	int compteur = 0;
	for (int i = 0; i<50; ++i) {
			assert (compteur < 50);
			pairTab[compteur++] = i*2;
	}
	printf("Le tableau des nombres pairs entre 0 et 100 est:\n");
	print_tableau (pairTab, 50);
}
