#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Nombre de caractères dans une chaîne : Demander à l’utilisateur de saisir son nom après Compter ses caractères et afficher leur nombre*/
int main(){
    char nom[20];
    int i;
    printf("\nentrez votre nom : ");
    gets(nom);
    for ( i = 0; i < 20; i++)
    {
        if (nom[i] == '\0')
        {
            break;
        }
    }
    printf("\nle nombre de caractere dans votre nom \"%s\" est : %d\n", nom, i);
    return 0;
}

