#include <stdio.h>
#include <stdlib.h>
/*Un programme qui suprimer un element d'un tableau */
int main(){
    int n, r;
    printf("entez le nombrs d'elements du tableau :  ");
    scanf("%d", &n);
    float tableau[n];
    for (int i = 0; i < n; i++)
    {
        printf("entrez la valeur d'elements N %d : ", i+1);
        scanf("%f", &tableau[i]);
    }
    do
    {
        printf("le numero d'element que vous voulez suprimer : ");
        scanf("%d", &r);
    } while (r-1<0 || r-1>=n);


    for (int i = 0; i < n; i++)
    {
        if (tableau[i] == tableau[r-1])
        {
            tableau[i] = tableau[i+1];
            r++;
        }
        
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", tableau[i]);
    }
    return 0; 
}
