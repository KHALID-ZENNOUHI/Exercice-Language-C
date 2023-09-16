#include <stdio.h>
int main(){
    float num1, num2;
    char operateur;
    printf("entrez le nombre numero 1 : ");
    scanf("%f", &num1);
    printf("choisi un parmi ces opetrateur +, -, * et / : ");
    scanf(" %c", &operateur);
    printf("entrez le nombre numero 2 : ");
    scanf("%f", &num2);
    switch (operateur)
    {
    case '+':
        printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("%.2f / %.2f = %.2f", num1, num2, num1 + num2);
        }else
            printf("!Erruer : le nombre numero 2 que vous avez entrez est egale 0");
        break;
    default:
        printf("!Erreur");
        break;
    }
    return 0;
    
}