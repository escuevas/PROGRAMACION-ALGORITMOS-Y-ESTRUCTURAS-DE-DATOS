#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Declare variables */
    int n, i, j;

    /* Verify user input */
    do
    {
    printf("Height: ");
    scanf("%d", &n);
    }
    while (n<0 || n>23);

    /* Print the blocks */
    for (i=0; i<n-1; i++)
    {
        for (j = 0; j<i-1; j++)
        {
        printf("#");
        }
     printf("\n");
    }
    return 0;
}
