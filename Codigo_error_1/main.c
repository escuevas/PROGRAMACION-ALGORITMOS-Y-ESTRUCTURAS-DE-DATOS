#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* ******************************************
 El siguiente c�digo presenta:
 - 	Un error que impide su compilaci�n
 -  Un error que lo hace funcionar de manera
    inapropiada
 ***************************************** */

 /* Codigo erroneo

int main()
{
    float st,temp,vel;

    setlocale(LC_ALL, "spanish");

    printf("C�lculo de la sensaci�n t�rmica\n");
    printf("(S�lo se calcular� para vientos entre 5 y 70 km/h)\n");
    printf("Ingrese la tempreatura en grados Celsius: ");
    scanf("%f",&temp);
    printf("Ingrese la velocidad del viento en km/h: ");
    scanf("%f",&vel);
    fflush(stdin);

    if(5<vel<70){
        st = 13.12 + 0.6215 * temp - 11.37 * pow(0.75*vel,0.16) + 0.3965 * temp * pow(0.75*vel,0.16);
        printf("\n La sensaci�n t�rmica es %2.1f grados",st)
    }
    else{
        printf("No puede calcularse bajo las condiciones de viento introducidas.");
    }

    return 0;
} */

/* Codigo corregido */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* ******************************************
 El siguiente c�digo presenta:
 - 	Un error que impide su compilaci�n
 -  Un error que lo hace funcionar de manera
    inapropiada
 ***************************************** */

int main()
{
    float st,temp,vel;

    setlocale(LC_ALL, "spanish");

    printf("C�lculo de la sensaci�n t�rmica\n");
    printf("(S�lo se calcular� para vientos entre 5 y 70 km/h)\n");
    printf("Ingrese la tempreatura en grados Celsius: ");
    scanf("%f",&temp);
    fflush(stdin); /* Faltaba este fflush */
    printf("Ingrese la velocidad del viento en km/h: ");
    scanf("%f",&vel);
    fflush(stdin);

    if(5>vel<70)
    {
        st = 13.12 + 0.6215 * temp - 11.37 * pow(0.75*vel,0.16) + 0.3965 * temp * pow(0.75*vel,0.16);
        printf("\n La sensaci�n t�rmica es %2.1f grados",st); /* Faltaba el ;*/
    }
    else{
        printf("No puede calcularse bajo las condiciones de viento introducidas.");
    }

    return 0;
}

