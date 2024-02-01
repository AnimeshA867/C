/*
Write a program to sort following list of strings: [“jump”, “walk”, “red”, “green”, “talk”,
“move”, “look”, “feel”].
*/
#include <stdio.h>
#include <string.h>
void main()
{
    char str[10][10];
    strcpy(str[0], "jump");
    strcpy(str[1], "walk");
    strcpy(str[2], "red");
    strcpy(str[3], "green");
    strcpy(str[4], "talk");
    strcpy(str[5], "move");
    strcpy(str[6], "fedd");
    strcpy(str[7], "fecl");
    char temp[10];
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
            if (str[i][0] > str[j][0])
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%s\t", str[i]);
    }
}