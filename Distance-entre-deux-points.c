#include <stdio.h>
#include <math.h>
/*un programme C pour trouver la distance entre deux points donnés*/
int main(){
    float x1, y1, x2, y2, Distance;
    printf("entrez la valeur de x du point 1 : ");
    scanf("%f", &x1);
    printf("entrez la valeur de y du point 1 : ");
    scanf("%f", &y1);
    printf("entrez la valeur de x du point 2 : ");
    scanf("%f", &x2);
    printf("entrez la valeur de y du point 2 : ");
    scanf("%f", &y2);
    Distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("\nLa distance entre la point 1 et la point 2 est : %f", Distance);
    return 0; 
}