#include <stdio.h>
#include <stdlib.h> 
/*un programme en C qui va te permettre d'afficher les informations personnelles sont saisies à partir du clavier à travers l'utilisation des structures: Nom, prénom , Age , Sexe et numéro de téléphone*/
typedef struct 
{
    char firstName[20];
    char secondName[20];
    int  age;
    char sexe;
    long phoneNumber;
} user;
int main(){
    int n;
    printf("enter how student do you have : ");
    scanf("%d", &n);
    user students[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the first name of the student N %d : ", i+1);
        scanf("%s", students[i].firstName);
        printf("enter the second name of the student N %d : ", i+1);
        scanf("%s", students[i].secondName);
        printf("enter the age of the student N %d : ", i+1);
        scanf("%d", &students[i].age);
        do
        {
            printf("enter the sexe(M or F) of the student N %d : ", i+1);
            scanf(" %c", &students[i].sexe);
        } while (students[i].sexe != 'm' && students[i].sexe != 'f');
        printf("enter the phone number of the student N %d : ", i+1);
        scanf("%ld", &students[i].phoneNumber);
    }
    for (int j = 0; j < n; j++)
    {
        printf("\nthe first name of the student N %d : %s", j+1, students[j].firstName);
        printf("\nthe second name of the student N %d : %s", j+1, students[j].secondName);
        printf("\nthe age of the student N %d : %d", j+1, students[j].age);
        printf("\nthe sexe of the student N %d : %c", j+1, students[j].sexe);
        printf("\nthe phone number of the student N %d : 0%ld", j+1, students[j].phoneNumber);
    }
    return 0;
}