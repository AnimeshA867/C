/*
Write a program to sort following list of strings: [“jump”, “walk”, “red”, “green”, “talk”,
“move”, “look”, “feel”].
*/
#include <stdio.h>
#include <string.h>
struct list
{
  char str[10];
};
void main()
{
  struct list l[10];
  strcpy(l[0].str, "jump");
  strcpy(l[1].str, "walk");
  strcpy(l[2].str, "red");
  strcpy(l[3].str, "green");
  strcpy(l[4].str, "talk");
  char temp[20];
  for (int i = 0; i < 5; i++)
  {
    for (int j = i + 1; j < 5; j++)
    {
      if (l[i].str[0] > l[j].str[0])
      {
        strcpy(temp, l[i].str);
        strcpy(l[i].str, l[j].str);
        strcpy(l[j].str, temp);
      }
    }
  }
  for (int i = 0; i < 5; i++)
  {
    printf("%s\n", l[i].str);
  }
}