#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, n=10;
    char str[100][100], s[100];
   printf("Enter names to sort:");
   for(i=0;i<n;i++){
        // scanf("%[A-Z a-z]",str[i]);
        gets(str[i]);
   }
   for(i=0;i<n;i++){
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(s, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], s);
            }
        }
   }
   printf("The sorted order of names are:\n");
   for(i=0;i<n;i++){
      printf("%s\n",str[i]);
   }
}