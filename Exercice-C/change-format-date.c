#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*un programme C qui lit une date au format 15/09/2012 et l'affiche sous le format suivant: 15-Septembre-2012.*/
int main(){
    char date[20];
    char mois[3];
    char jour[3];
    char annee[5];

    printf("entrez la date sous le foramt suivante 05/09/2012 : ");
    scanf("%s", &date);
    strncpy(jour, date, 2);
    jour[2] = '\0';
    strncpy(mois, date+3, 2);
    mois[2] = '\0';
    strncpy(annee, date+6, 4);
    annee[4] = '\0';
    int moisInt = atoi(mois);
    switch (moisInt)
    {
    case 1:
        printf("%s-Janvier-%s", jour, annee);
        break;
    case 2:
        printf("%s-Fevrier-%s", jour, annee);
        break;
    case 3:
        printf("%s-Mars-%s", jour, annee);
        break;
    case 4:
        printf("%s-Avril-%s", jour, annee);
        break;
    case 5:
        printf("%s-Mai-%s", jour, annee);
        break;
    case 6:
        printf("%s-Juin-%s", jour, annee);
        break;
    case 7:
        printf("%s-Juillet-%s", jour, annee);
        break;
    case 8:
        printf("%s-Août-%s", jour, annee);
        break;
    case 9:
        printf("%s-Septembre-%s", jour, annee);
        break;
    case 10:
        printf("%s-Octobre-%s", jour, annee);
        break;
    case 11:
        printf("%s-Novembre-%s", jour, annee);
        break;
    case 12:
        printf("%s-Décembre-%s", jour, annee);
        break;
    default:
        printf("!Ereure");
        break;
    } 
    return 0;   
}
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char date[11]; // Une chaîne pour stocker la date (ajout d'un caractère pour le caractère nul)
//     char jour[3]; // Une chaîne pour stocker le jour (ajout d'un caractère pour le caractère nul)
//     char mois[20]; // Une chaîne pour stocker le mois
//     char annee[5]; // Une chaîne pour stocker l'année (ajout de deux caractères pour le caractère nul)

//     printf("Entrez la date sous le format suivant 15/09/2012 : ");
//     scanf("%s", date);

//     // Utilisation de sscanf pour extraire les composants de la date
//     sscanf(date, "%2s/%[^/]/%4s", jour, mois, annee);

//     // Tableau pour stocker les noms des mois
//     char moisNoms[][20] = {"Janvier", "Février", "Mars", "Avril", "Mai", "Juin", "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre"};

//     int moisInt;
//     sscanf(mois, "%d", &moisInt);

//     // Vérification de la validité du mois
//     if (moisInt >= 1 && moisInt <= 12) {
//         // Affichage de la date au format souhaité
//         printf("%s-%s-%s\n", jour, moisNoms[moisInt - 1], annee);
//     } else {
//         printf("Mois invalide.\n");
//     }

//     return 0;
// }
