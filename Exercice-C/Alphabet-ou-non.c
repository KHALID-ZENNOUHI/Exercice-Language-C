#include <stdio.h>
#include <stdlib.h>
int main(){
    char Alphabet;
    printf("entrez un element : ");
    scanf(" %c", &Alphabet);
    int assci = (int)Alphabet;
    if (assci >= 65 && assci <= 90)
    {
        printf("L'element que vous entrez est un alpabet Majuscule");
    }else if (assci >= 97 && assci <= 122)
    {
        printf("L'element que vous entrez est un alpabet Miniscule");
    }else
        printf("L'element que vous entrez n'est pas un alpabet");
    
    return 0;
}