#include <stdio.h>
#include <stdlib.h>

int main()
{
// Define Variables
int rows;

// Ask for input
printf("How tall should the pyramid be?\n");
printf("Enter a number between 1-8!\n");
printf("Height: ");
scanf("%d", &rows);

// Validate input
while (rows<1)
{
printf("Enter a number between 1-8!\n");
printf("Height: ");
scanf("%d", &rows);
}
while (rows > 8)
{
printf("Enter a number between 1-8!\n");
printf("Height: ");
scanf("%d", &rows);
}
// Print the left aligned blocks
switch(rows){
case 1:
printf("# #\n");
break;
case 2:
printf("# #\n## ##\n");
break;
case 3:
printf("# #\n## ##\n### ##\n");
break;
case 4:
printf("# #\n## ##\n### ###\n#### ####\n");
break;
case 5:
printf("# #\n## ##\n### ###\n#### ####\n##### #####\n");
break;
case 6:
printf("# #\n## ##\n### ###\n#### ####\n##### #####\n###### ######\n");
break;
case 7:
printf("# #\n## ##\n### ###\n#### ####\n##### #####\n###### ######\n####### #######\n");
break;
case 8:
printf("# #\n## ##\n### ###\n#### ####\n##### #####\n###### ######\n####### #######\n######## ########\n");
break;
default:
printf("You should enter a number between 1 to 8!\n");
}
   return 0;
}
