#include <stdio.h>
#include<stdio.h>
int main()
{
    int res;
    int na;
    printf("en donde empieza la resta:\n");
    scanf("%d",&res);
    printf("dame el valor de na:\n");
    scanf("%d",&na);

    while(rest>=na)
    {
        printf("%d",rest);
        rest=rest-2;
    }
    printf("\nfinal de ciclo\n");
    return 0;
}
