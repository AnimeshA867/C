#include <stdio.h>

int main(void)
{
char filename[101], newfilename[101];

printf ("Please type in name of file to be changed:\n");
scanf("%s", &filename); /* Get the filename from the keyboard) */

printf("You have choosen to rename %s.\nPlease type the new name of the file:\n", filename);
scanf("%s", &newfilename); /* Get the new filename from the keyboard) */

if(rename(filename, newfilename) == 0)
{
printf("%s has been rename %s.\n", filename, newfilename);
}
else
{
fprintf(stderr, "Error renaming %s.\n", filename);
}
system ("pause");
system ("CLS");

return 0;
}
