#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Declaro las variables */
int Invitados, PanquequesInvitado;
float Huevos, Leche, Harina, Sal, Vainilla;
    
    /*Matematica de las variables*/
Huevos = ((Invitados*PanquequesInvitado)/3);
Leche = ((Invitados*PanquequesInvitado)/500);
Harina = ((Invitados*PanquequesInvitado)/250);
Sal = (1/(Invitados*PanquequesInvitado));
Vainilla = (1/(Invitados*PanquequesInvitado));

    /* Algoritmo */
printf("***    Calculadora de panqueques     ***\n");
printf("*** Encante a sus invitados con unos ***\n");
printf("***       buenos panqueques          ***\n");

printf("\n");

printf("Cuantos invitados tiene?\n");
scanf("Ingrese el numero: %d \n", &Invitados);

printf("\n");

printf("Cuantos panqueques comera cada invitado? (1-10)");
scanf("Ingrese el numero: %d \n", &PanquequesInvitado);

printf("\n");

printf("La receta para %d invitados y %d panqueques por invitado es: \n", Invitados, PanquequesInvitado);

    /* Tabla a presentar */
printf("     Ingrediente   Cantidad   Unidad       \n");
printf("     --------------------------------------\n");
printf("     Huevos        %e         Unidades     \n", Huevos);
printf("     Leche         %e         Mililitros   \n", Leche);
printf("     Harina        %e         Gramos       \n", Harina);
printf("     Sal           %e         Cucharaditas \n", Sal);
printf("     Vainilla      %e         Chorritos    \n", Vainilla);
printf("\n");
printf("Que disfrute los panqueques!\n");

    return 0;
}
