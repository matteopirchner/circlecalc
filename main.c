#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float radius;
    float flaeche;
    float umfang;



    printf("------------------------------------------------------------\n");
    printf("Calculation of the circle area and circumference via radius.\n");
    printf("Made by Matteo Pirchner-Gratz.\n");
    printf("------------------------------------------------------------\n\n");

    printf("Please type in the radius: ");
    scanf("%f", &radius);

    flaeche = radius * radius * M_PI;
    umfang = radius * 2 * M_PI;

    printf("\nThe area is: %f\n", flaeche);
    printf("The circumference is: %f\n\n", umfang);
    printf("Bye!\n\n");

return 0;
}
