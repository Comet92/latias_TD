#include <stdio.h>

#include "module.h"

void print_tableau(int t[],int  n){
	int compteur = 0;
	while (compteur < n){
			printf( "%d, " , t[compteur]);
			compteur ++;
			}
	printf( "\n");
	}

void sumTab(int t1[], int t2[],int t[], int n){
	int compteur = 0;
	while (compteur < n){
			t[compteur] = t1[compteur] + t2[compteur];
			compteur ++;
			}
	}

