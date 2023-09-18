#include <stdio.h>
#include <stdlib.h>
/*Indice de masse corporelle
On imagine une visite médicale en deux parties où les patients se présentent d'abord tous pour la mesure de leur taille, puis repassent, dans le même ordre, au pesage.
A. Enregistrer dans un tableau la taille t en mètres de tous les patients qui se présentent (arrêt par la saisie d'un nombre <= 0).
B. Après la saisie, afficher le nombre total de patients.
C. Pour chaque patient précédemment mesuré, enregistrer la masse m en kilogrammes dans un second tableau.
D. Calculer et afficher la taille moyenne et le poids moyen des patients.
E. Pour chaque patient, calculer l'indice de masse corporelle: IMC = m/t2 et afficher:
"pas assez" si IMC < 18.5,
• "trop" si IMC > 25,
ou "normal" sinon.*/
int main()
{
    int n;
    printf("entrez le nombre de patient que vous avez : ");
    scanf("%d", &n);
    const int tab_size =n;
    int i, nbPatients;
    float taille[tab_size], masse[tab_size], s, IMC;
    printf("entrez les tailles de votre patient en metre : \n\n");
    for (i = 0; i < tab_size; i++)
    {
        printf("la taille du patient %d = ", i + 1);
        scanf("%f", &taille[i]);
        if (taille[i] <= 0)
            {
                printf("\n\nvous avez entre une valeure inferieure ou egale a 0 ");
                break;
            }else if (i>=tab_size-1)
            {
                printf("\n\nvous avez atteindre le nombre maximume du patient");
            }
    }
    nbPatients = i;
    printf("\n\nle nombre des patients est : %d", nbPatients);
    printf("\n\nentrez les masses de votre patients en Kg : ");
    for (i = 0; i < nbPatients; i++)
    {
        printf("\nla masse du patient %d = ", i + 1);
        scanf("%f", &masse[i]);
        if (masse[i] <= 0)
            {
                printf("\n\nvous avez entre une valeure inferieure ou egale a 0 ");
                break;
            }else if (i>nbPatients)
            {
                printf("\n\nvous avez atteindre le nombre du patient que vous avez entre deja leur taille");
            }
    }
    s = 0;
    for ( i = 0; i < nbPatients; i++)
    {
        s = s + taille[i];
    }
    printf("\n\nla taille moyenne des patients est : %.2f m", s/nbPatients);
    s = 0;
    for ( i = 0; i < nbPatients; i++)
    {
        s = s + masse[i];
    }
    printf("\n\nle poid moyenne des patients est : %.2f Kg", s/nbPatients);
    for ( i = 0; i < nbPatients; i++)
    {
        IMC = masse[i]/(taille[i]*taille[i]);
        printf("\n\nl'indice du masse corporelle du patient numero %d est %.2f", i+1, IMC);
        if (IMC < 18.5)
        {
            printf("\nvotre indice corporelle est : pas assez");
        }else if (IMC > 25)
        {
            printf("\nvotre indice corporelle est: trop");
        }else
            printf("\nvotre indice corporelle est : normale");    
    }
    return 0;
}