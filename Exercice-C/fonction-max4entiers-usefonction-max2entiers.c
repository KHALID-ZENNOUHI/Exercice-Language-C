#include <stdio.h>
#include <stdlib.h>
/* un programme C qui détermine le max de quatre entiers à l’aide d’une fonction Max_4, et qui doit utiliser une autre fonction Max_2 qui trouve le max de deux entiers*/
int max2(int num1, int num2){
    if (num1 > num2)
    {
        return num1;
    }else
        return num2;
}
int max4(int num1, int num2, int num3, int num4){
    if (max2(num1, num2) > max2(num3, num4))
    {
        return max2(num1, num2);
    }else
        return max2(num3, num4);
}
int main(){
    int a, b, c, d;
    printf("entrez le nombre n 1 : ");
    scanf("%d", &a);
    printf("entrez le nombre n 2 : ");
    scanf("%d", &b);
    printf("entrez le nombre n 3 : ");
    scanf("%d", &c);
    printf("entrez le nombre n 4 : ");
    scanf("%d", &d);
    printf("le maximume de ces 4 nombres est : %d", max4(a, b, c, d));
    return 0;
}