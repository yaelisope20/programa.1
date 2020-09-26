#include <stdio.h>
#include <stdlib.h>

int main()
{
    float VF;
    float R1, R2, R3;
    printf("dame el voltaje de la fuente  V:");
    scanf ("%f", &VF);
    printf("\n");

    R1= (VF-1.5)/0.015;
    R2= (VF-1.8)/0.015;
    R3= (VF-1.8)/0.015;

    printf("la resistencia del led rojo es: %.3f ohms\n", R1);
    printf("la resistencia del led verde es: %.3f ohms\n", R2);
    printf("la resistencia del led amarillo es: %.3f ohms\n", R3);

    return 0;

}
