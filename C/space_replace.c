/*C program to replace the spaces of a string with a specific character.*/
#include <stdio.h>
#include <stdlib.h>

char spaceReplace(char str[50], char c)
{
    printf("Previous string was %s", str);
    int i=0;
    while (i++)
    {
        if (str[i]==' ')
        {
            str[i]=c;
        }
        else if (str[i]=='\0')
        {
            break;
        }
    }
    printf("The new string is %s" ,str);
    return 0;
}

int main()
{
    char st[50], ch;
    printf("Enter a string: ");
    scanf("%s", &st);
    printf("What character do you want to replace spaces with: \n");
    scanf("%c", &ch);
    spaceReplace(st, ch);
}