#include <stdio.h>
int main(){
    int n;
    printf("enter the array size : ");
    scanf("%d", &n);
    float tab1[n];
    float tab2[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the number %d : ", i+1);
        scanf("%f", &tab1[i]);
    }
    int j = n-1;
    for (int i = 0; i < n; i++)
    {
        tab2[i] = tab1[j];
        j--;
    }
    printf("this is the array you enter : ");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", tab1[i]);  
    }
    printf("\nthis is the array befor reverse : ");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", tab2[i]);  
    }
    return 0;
}