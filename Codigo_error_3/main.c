#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* ******************************************
 El siguiente c�digo presenta:
 - 	Dos errores que le impide compilar
 -  Un error que resulta en comprotamiento
	extra�o al ejecutarse
 ***************************************** */

/*Codigo erroneo
int main()
{
    char rta;
    char entrada_valida = 0;
	setlocale(LC_ALL, "spanish");

    printf("Gu�a para solucionar problemas V 0.1\n");

    while(entrada_valida==0){
        entrada_valida = 1;
        printf("�Est� roto? s/n : ");
        scanf("%c",rta);
        fflush(stdin);

        if(rta == 'n'){
            printf("Problema solucionado.");
        }
        else if(rta == 's'){

            entrada_valida = 0;
            while(entrada_valida == 0){
                entrada_valida = 1;
                printf("�Usted lo rompi�?  s/n : ");
                scanf("%c",&rta);
                fflush(stdin);

                if(rta == 'n'){
                    printf("Problema solucionado.");
                }
                else if(rta == 's'){
                    entrada_valida = 0;
                    while(entrada_valida==0){
                        entrada_valida = 1;
                        printf("�Alguien lo vi�?  s/n : ");
                        scanf("%c",&rta);
                        fflush(stdin);

                        if(rta == 'n'){
                            printf("Problema solucionado.");
                        }
                        else if(rta=='s'){
                            entrada_valida = 0;
                            while(entrada_valida==0){
                                entrada_valida = 1;
                                print("�Puede culpar a alguien m�s?  s/n : ");
                                scanf("%c",&rta);
                                fflush(stdin);

                                if(rta == 's'){
                                    printf("Problema solucionado.");
                                }
                                else if(rta == 'n'){
                                    printf("Usted est� en problemas. Esta gu�a no se hace cargo. Adi�s.");
                                }
                                else{
                                    printf("\nNo entend� su respuesta. Repita por favor.\n");
                                    entrada_valida = 0;
                                }
                            }


                        }
                        else{
                            printf("\nNo entend� su respuesta. Repita por favor.\n");
                            entrada_valida = 0;
                        }
                    }

                }
                else{
                    printf("\nNo entend� su respuesta. Repita por favor.\n");
                    entrada_valida = 0;
             }

        }
        else{
            printf("\nNo entend� su respuesta. Repita por favor.\n");
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

    printf("Gu�a para solucionar problemas V 0.1\n");

    while(entrada_valida==0){
        entrada_valida = 1;
        printf("�Est� roto? s/n : ");
        scanf("%c",rta);
        fflush(stdin);

        if(rta == 'n'){
            printf("Problema solucionado.");
        }
        else if(rta == 's'){

            entrada_valida = 0;
            while(entrada_valida == 0){
                entrada_valida = 1;
                printf("�Usted lo rompi�?  s/n : ");
                scanf("%c",&rta);
                fflush(stdin);

                if(rta == 'n'){
                    printf("Problema solucionado.");
                }
                else if(rta == 's'){
                    entrada_valida = 0;
                    while(entrada_valida==0){
                        entrada_valida = 1;
                        printf("�Alguien lo vi�?  s/n : ");
                        scanf("%c",&rta);
                        fflush(stdin);

                        if(rta == 'n'){
                            printf("Problema solucionado.");
                        }
                        else if(rta=='s'){
                            entrada_valida = 0;
                            while(entrada_valida==0){
                                entrada_valida = 1;
                                print("�Puede culpar a alguien m�s?  s/n : ");
                                scanf("%c",&rta);
                                fflush(stdin);

                                if(rta == 's'){
                                    printf("Problema solucionado.");
                                }
                                else if(rta == 'n'){
                                    printf("Usted est� en problemas. Esta gu�a no se hace cargo. Adi�s.");
                                }
                                else{
                                    printf("\nNo entend� su respuesta. Repita por favor.\n");
                                    entrada_valida = 0;
                                }
                            }


                        }
                        else{
                            printf("\nNo entend� su respuesta. Repita por favor.\n");
                            entrada_valida = 0;
                        }
                    }

                }
                else{
                    printf("\nNo entend� su respuesta. Repita por favor.\n");
                    entrada_valida = 0;
             }
    else{
            printf("\nNo entend� su respuesta. Repita por favor.\n");
            entrada_valida = 0;
        }

    }

    return 0;
}

