#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, count1, count2, j, k;
    printf("entrez la valeur des elements des tableau : ");
    scanf("%d", &n);
    int tableau1[n], T1[n], T2[n];
    for (int i = 0; i < n; i++)
    {
        printf("entrez la valeur N %d : ", i+1);
        scanf("%d", &tableau1[i]);
    }
    k = 0;
    j = 0;
    count1 = 0;
    count2 = 0;
    for (int i = 0; i < n; i++)
    {
       
       
            if (tableau1[i] % 2 == 0)
            {
                T1[j] = tableau1[i];
                j++;
                count1++;
            }else{
                T2[k] = tableau1[i]; 
                k++;
                count2++;
                }
       
         
    }
    printf("Voici les elements paire : \n");
    for ( j = 0; j < count1; j++)
    {
        printf("%d\n", T1[j]);
    }
    printf("Voici les elements impaire : ");
    for ( k = 0; k < count2; k++)
    {
        printf("\n%d", T2[k]);
    }
    return 0;
}