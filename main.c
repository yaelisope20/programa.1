#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum;
    char opc='s';
    while(opc=='s')
    {
        printf("escribe el valor de n:\n");
        scanf("%d",&n);
        i=2*n+1;
        sum=3*n+2*i;
        while(sum>=3*n)
        {
            printf("%d",sum);
            sum=sum-2;
        }
        printf("\nquieres realizar otro conteo\n");
        scanf("%s",&opc);
    }
    printf("conteo terminado");
    return 0;
}
