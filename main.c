#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,D;


    printf("Dame el valor de  a:\n");
    scanf("%f",&a);
    printf("Dame el valor de b:\n");
    scanf("%f",&b);
    printf("Dame el valor de c.\n");
    scanf("%f",&c);

    D=b*b-(4*a*c);

    if(D==0)
      printf("x:%.f\n",(-b/(2*a)));

    else if(D>0)
    {
       printf(" x1: %.3f\n",(-b+sqrt(D))/(2*a));
       printf(" x2: %.3f\n",(-b-sqrt(D))/(2*a));
    }
    else
    {
        /*D<0*/
        printf("x1: %.3f+%.3f i\n",-b/(2*a),(sqrt(-D))/(2*a));
        printf("x2: %.3f-%.3f i\n",-b/(2*a),(sqrt(-D))/(2*a));
    }

    return 0;

}
