#include <stdio.h>
int main(){
    int annee, mois, jours, heurs, minute, convertir;
    printf("entrez l'annee que vous voulez convertir : ");
    scanf("%d", &annee);
    printf("1 -> Pour convertir l'annee en mois\n2 -> Pour convertir l'annee en jours\n3 -> Pour convertir l'annee en heurs\n4 -> Pour convertir l'annee en minute\n ");
    scanf("%d", &convertir);
    switch (convertir)
    {
    case 1:
        mois = annee*12;
        printf("L'annee que vous avez entrez %d = %d mois", annee, mois);
        break;
    case 2:
        jours = annee*365;
        printf("L'annee que vous avez entrez %d = %d jours", annee, jours);
        break;
    case 3:
        heurs = annee*365*24;
        printf("L'annee que vous avez entrez %d ans = %d heurs", annee, heurs);
        break;
    case 4:
        minute = annee*365*24*60;
        printf("L'annee que vous avez entrez %d ans = %d minute", annee, minute);
        break;    
    default:
        printf("!Erreur");
        break;
    }
    return 0;
}