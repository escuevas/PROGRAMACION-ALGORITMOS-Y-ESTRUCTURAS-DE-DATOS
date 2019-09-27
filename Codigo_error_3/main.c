#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* ******************************************
 El siguiente código presenta:
 - 	Dos errores que le impide compilar
 -  Un error que resulta en comprotamiento
	extraño al ejecutarse
 ***************************************** */

/*Codigo erroneo
int main()
{
    char rta;
    char entrada_valida = 0;
	setlocale(LC_ALL, "spanish");

    printf("Guía para solucionar problemas V 0.1\n");

    while(entrada_valida==0){
        entrada_valida = 1;
        printf("¿Está roto? s/n : ");
        scanf("%c",rta);
        fflush(stdin);

        if(rta == 'n'){
            printf("Problema solucionado.");
        }
        else if(rta == 's'){

            entrada_valida = 0;
            while(entrada_valida == 0){
                entrada_valida = 1;
                printf("¿Usted lo rompió?  s/n : ");
                scanf("%c",&rta);
                fflush(stdin);

                if(rta == 'n'){
                    printf("Problema solucionado.");
                }
                else if(rta == 's'){
                    entrada_valida = 0;
                    while(entrada_valida==0){
                        entrada_valida = 1;
                        printf("¿Alguien lo vió?  s/n : ");
                        scanf("%c",&rta);
                        fflush(stdin);

                        if(rta == 'n'){
                            printf("Problema solucionado.");
                        }
                        else if(rta=='s'){
                            entrada_valida = 0;
                            while(entrada_valida==0){
                                entrada_valida = 1;
                                print("¿Puede culpar a alguien más?  s/n : ");
                                scanf("%c",&rta);
                                fflush(stdin);

                                if(rta == 's'){
                                    printf("Problema solucionado.");
                                }
                                else if(rta == 'n'){
                                    printf("Usted está en problemas. Esta guía no se hace cargo. Adiós.");
                                }
                                else{
                                    printf("\nNo entendí su respuesta. Repita por favor.\n");
                                    entrada_valida = 0;
                                }
                            }


                        }
                        else{
                            printf("\nNo entendí su respuesta. Repita por favor.\n");
                            entrada_valida = 0;
                        }
                    }

                }
                else{
                    printf("\nNo entendí su respuesta. Repita por favor.\n");
                    entrada_valida = 0;
             }

        }
        else{
            printf("\nNo entendí su respuesta. Repita por favor.\n");
            entrada_valida = 0;
        }

    }

    return 0;
} */

/* Codigo corregido */

int main()
{
    char rta;
    char entrada_valida = 0;
	setlocale(LC_ALL, "spanish");

    printf("Guía para solucionar problemas V 0.1\n");

    while(entrada_valida==0){
        entrada_valida = 1;
        printf("¿Está roto? s/n : ");
        scanf("%c",rta);
        fflush(stdin);

        if(rta == 'n'){
            printf("Problema solucionado.");
        }
        else if(rta == 's'){

            entrada_valida = 0;
            while(entrada_valida == 0){
                entrada_valida = 1;
                printf("¿Usted lo rompió?  s/n : ");
                scanf("%c",&rta);
                fflush(stdin);

                if(rta == 'n'){
                    printf("Problema solucionado.");
                }
                else if(rta == 's'){
                    entrada_valida = 0;
                    while(entrada_valida==0){
                        entrada_valida = 1;
                        printf("¿Alguien lo vió?  s/n : ");
                        scanf("%c",&rta);
                        fflush(stdin);

                        if(rta == 'n'){
                            printf("Problema solucionado.");
                        }
                        else if(rta=='s'){
                            entrada_valida = 0;
                            while(entrada_valida==0){
                                entrada_valida = 1;
                                print("¿Puede culpar a alguien más?  s/n : ");
                                scanf("%c",&rta);
                                fflush(stdin);

                                if(rta == 's'){
                                    printf("Problema solucionado.");
                                }
                                else if(rta == 'n'){
                                    printf("Usted está en problemas. Esta guía no se hace cargo. Adiós.");
                                }
                                else{
                                    printf("\nNo entendí su respuesta. Repita por favor.\n");
                                    entrada_valida = 0;
                                }
                            }


                        }
                        else{
                            printf("\nNo entendí su respuesta. Repita por favor.\n");
                            entrada_valida = 0;
                        }
                    }

                }
                else{
                    printf("\nNo entendí su respuesta. Repita por favor.\n");
                    entrada_valida = 0;
             }
    else{
            printf("\nNo entendí su respuesta. Repita por favor.\n");
            entrada_valida = 0;
        }

    }

    return 0;
}

