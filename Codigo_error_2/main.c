#include <stdio.h>
#include <stdlib.h>

/* ******************************************
 El siguiente código presenta:
 -  Un error que impide su compilación
 -  Dos errores que impiden su ejecución
    exitosa
***************************************** */
/* Codigo equivocado
int main()
{
    int i,j,n;
    printf("Bienvenido. Ingrese un valor: ");
    scanf("%d",&n);

    for(i=0,i<n,i++)
    {
        j=0;
        while(j<=i);
        {
            printf(" ");
            j++;
        }
        printf("%d\n",i+1);
    }
    for(i=n-2;i>=0;i--)
    {
        j=0;
        while(j<=i)
        {
            printf(" ");

        }
        printf("%d\n",i+1);
    }

    return 0;
} */

/* Codigo corregido */

int main()
{
    int i,j,n;
    printf("Bienvenido. Ingrese un valor: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) /*No es coma, es punto y coma*/
    {
        while(j<=i); /*Sobra el j=0*/
        {
            printf(" ");
            j++;
        }
        printf("%d\n",i+1);
    }
    for(i=n-2;i>=0;i--)
    {
        while(j<=i) /*Sobra el j=0*/
        {
            printf(" ");

        }
        printf("%d\n",i+1);
    }

    return 0;
}

