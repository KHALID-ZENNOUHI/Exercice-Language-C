#include <stdio.h>
#include <stdlib.h>
/*un programme en C pour trouver la somme et la moyenne de n nombres d'un tableau saisai par l'utilisateur*/
int main(){
    int n;
    float somme, moyen;
    printf("enter the array size : ");
    scanf("%d", &n);
    float tab[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the number %d : ", i+1);
        scanf("%f", &tab[i]);
    }
    somme = 0;
    for (int j = 0; j < n; j++)
    {
        somme = somme + tab[j];
    }
    printf("the sum of thouse number is : %.2f\nthe average of thoUse number is : %.2f", somme, somme/n);
    return 0;
}