#include <stdio.h>
#include <stdlib.h>
/* un programme C qui définit et utilise une fonction Permuter qui permute les valeurs de deux variables réelles*/
float Permuter(float num1, float num2){
    float temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    return num1 && num2;
}
int main(){
    float a, b;
    printf("entrez la valeur du nombre 1 : ");
    scanf("%f", &a);
    printf("entrez la valeur du nombre 2 : ");
    scanf("%f", &b);
    Permuter(a, b);
    printf("le nombre n 1 est : %.2f", a);  
    printf("\nle nombre n 2 est : %.2f", b);
    return 0;
}