#include <stdio.h>
#include <stdlib.h>
#include "vecteur.h"

int main(){
    int n;
    printf("Cette programme calcule le produit scalaire de deux vecteur \n");
    n= taille();
    int *X,*Y,B;
    X= valeur(n,'X');
    Y= valeur(n,'Y');
    B= scalaire(n,X,Y);

    printf("Le produit scalaire est :%d",B);

    //affiche(n, C);
// toujours liberer la memoire apres un malloc
    free(X);
    free(Y);
    return 0;
}