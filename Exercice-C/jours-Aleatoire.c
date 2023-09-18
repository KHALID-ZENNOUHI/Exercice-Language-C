#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    char *jours[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimmanche"};
    int jour = rand() % 7;
    printf("Le jour que j'ai choisis est : %s",jours[jour]); 
    return 0;

}