#include <stdio.h>
/*Demander à l’utilisateur de saisir des notes (entre 0 et 20) et lui expliquer qu’une valeur hors de cet intervalle arrêtera la saisie.

Saisir les notes et les mémoriser dans un tableau
Compter les notes saisies et afficher leur nombre
Calculer et afficher la moyenne
Comparer chaque note à la moyenne et ajouter, dans l’affichage précédent "égal", "inférieur" ou "supérieur à la moyenne"
Compter et afficher combien il y a de notes supérieures à la moyenne
Dans le tableau de notes, chercher la note la plus petite. Afficher cette note et sa position dans le tableau
Même chose pour la note la plus grande.
Le programme affichera un message d'erreur si le nombre de note saisi est 0.*/
int main()
{
    int i, j, totale, smoyenne, minPosition, maxPosition;
    float Note[20], moyenne, max, min, s;
    printf("entrez les notes d'etudiant : \n\n");
    for (i = 0; i < 20; i++)
    {
        printf("Note[%d] = ", i + 1);
        scanf("%f", &Note[i]);
        if (Note[i]<0 || Note[i]>20)
            {
                break;
            }    
    }
    totale = i;
    printf("\n\nle nombre des notes saisie est : %d", totale);
    s = 0;
    for (i = 0; i < 20; i++)
    {
        if (Note[i]>0 && Note[i]<20)
        {
            s = s + Note[i];
            moyenne = s/totale;
        }
    }
    printf("\n\nla moyenne des notes est : %.2f", moyenne);

    for ( i = 0; i < 20; i++)
    {
        if (Note[i]<0 || Note[i]>20)
        {
            break;
        }else if (Note[i] == moyenne)
        {
            printf("\n\n%.2f est egale avec la moyenne %.2f", Note[i], moyenne);
        }else if (Note[i] > moyenne)
        {
            printf("\n\n%.2f est superieure a la moyene %.2f", Note[i], moyenne);
        }else
            printf("\n\n%.2f est inferieure a la moyenne %.2f", Note[i], moyenne);
    }
    smoyenne = 0; //les notes superieure a lamoyenne//
    for ( i = 0; i < 20; i++)
    {
        if (Note[i]>moyenne)
        {
            smoyenne = smoyenne + 1;
        }
        
    }
    printf("\n\nil y a %d notes superieure a la moyenne %.2f", smoyenne-1, moyenne);
 
    min = Note[0];
    for (i = 0; i < totale; i++)
    {
        if (min >Note[i] )
        {
            min = Note[i];
        }
    }
    printf("\n\nle minimume est : %.2f", min);
    max = Note[0];
    for (i = 0; i < totale; i++)
    {
        if (max < Note[i] )
        {
            max = Note[i];
        }
    }
    printf("\n\nle maximume est : %.2f", max);
    minPosition = 0;
    i = 0;
    while (i<totale)
    {
        if (Note[i]==min)
        {
            minPosition = i;
            break;
        }
        i++;
    }
    printf("\n\nla position de la note maximume est : %d ", maxPosition+1);
    maxPosition = 0;
    i = 0;
    while (i<totale)
    {
        if (Note[i]==max)
        {
            maxPosition = i;
            break;
        }
        i++;
    }
    printf("\n\nla position de la note minimume est : %d ", minPosition+1);
    

    return 0;   
}
