#include <stdio.h>
#include <stdlib.h>
/* un programme C qui définit et utilise une fonction de prototype int Somme(int,int) qui prend en paramètres deux entiers et renvoie leur somme.*/
int somme(int a, int b){
    return a+b;
}
int main(){
    int num1, num2;
    //int result;
    printf("entrez le nombre n 1 : ");
    scanf("%d", &num1);
    printf("entrez le nombre n 2 : ");
    scanf("%d", &num2);
    //  result = somme(num1, num2); 
    printf("la somme est : %d",somme(num1, num2));
    return 0;
}