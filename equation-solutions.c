#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, x, x1, x2;
    float deltat;
    printf("entrez les valeurs des facteur a, b et c de l'equation ax² + bx + C = 0 : \n");
    scanf("%f%f%f", &a, &b, &c);
    deltat = pow(b, 2) - 4*a*c;
    if (deltat > 0)   
    {
        x1 = ((-b + sqrt(deltat))/2*a);
        x2 = ((-b - sqrt(deltat))/2*a);
        printf("les solutions de cette equation sont : %.2f et %.2f", x1, x2);
    }else if (deltat == 0)
        {
            x = (-b)/(2*a);
            printf("les solutions de cette equation est : %.2f", x);
        }else
    printf("pas de solution");
    return 0;
}