#include <stdio.h>
int main(){
    int age;
    printf("entrez votre age : ");
    scanf("%d",&age);
    if (age >= 6 && age <= 7)
    {
        printf("vous etez a poussin");
    }else if (age > 7 && age <= 9)
    {
        printf("vous etez pupille");
    }else if (age > 9 && age <= 11)
    {
        printf("vous etez a minime");
    }else
        printf("vous etez a cadet");
    return 0;
}