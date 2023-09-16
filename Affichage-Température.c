#include <stdio.h>
/*Ecrivez un programme qui demande la température en Fahrenheit et la transforme en degré Celsius*/
int main(){
    float temperatureF, temperatureC;
    printf("entrez la temperature en Fahrenheit : ");
    scanf("%f", &temperatureF);
    temperatureC = (temperatureF - 32) / 1.8;
    printf("La temperature en Cilsius est : %.2f C", temperatureC);
}