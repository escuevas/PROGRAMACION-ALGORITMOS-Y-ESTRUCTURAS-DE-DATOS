#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Declaro las variables */
    int i,j,n;

    /* Pido datos y los verifico */
    do
    {
        printf("Cuantos bloques quiere ver en pantalla?\n");
        scanf("%d", &n);
        printf("\n");
    }
        while (n<1);

    /*Imprimo*/
    for(i=1;i<n+1;i++)
    {
        for (j=1;j<n-1;j++)
        {
        printf("+\n");
        }
    printf("\n");
    }

    return 0;
}
