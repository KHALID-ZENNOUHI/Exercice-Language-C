#include <stdio.h>
#include <stdlib.h>
/*Localisation d’une lettre
Initialiser un tableau avec le texte suivant : "Quel sinistre mot !"
Trouver et afficher à quelle position se trouve la lettre 'm'
Même chose pour la première lettre 's'
Mettre la lettre 'm' à la place de 's' et vice versa
Afficher le texte ainsi modifié
Demander à l’utilisateur de saisir une lettre quelconque
Chercher cette lettre dans le texte et afficher sa position ou un message d’erreur si elle est absente
*/
int main(){
    char texte[] = "Quel sinistre mot !";
    int i = 0;
    while (texte[i] != 'm')
    {
        i++;
    }
    printf("%s", texte);
    printf("\nla lettre 'm' se trouve dans le caractere n : %d", i+1);
    int j = 0;
    while (texte[j] != 's')
    {
        j++;
    }
    printf("\nla lettre 's' se trouve dans le caractere n : %d\n", j+1);
    char temp = texte[i];
    texte[i] = texte[j];
    texte[j] = temp;
    puts(texte);
    char lettre;
    printf("\nentrez une lettre quelconque : ");
    scanf("%c", &lettre);
    int k = 0;
    int seTrouve = 0;
    while (texte[k] != '\0')
    {
        if (texte[k] == lettre)
        {
            seTrouve = 1;
            break;
        }
        
        k++;
    }
    if (seTrouve)
    {
        printf("la position du caractere que vous avez entrez est : %d", k+1);
    }else
        printf("le caractere que vous avez entrez ne se trouve pas dans le texte");
    
    
    return 0;
}