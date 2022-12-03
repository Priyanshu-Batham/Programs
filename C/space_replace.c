/*C program to replace the spaces of a string with a specific character.*/
#include <stdio.h>
#include <stdlib.h>

char spaceReplace(char str[50], char c)
{

    char s[50];
    printf("Previous string was %s", str);
    int i;
    for (i=0; i=49; i++)
    {
        
        if (str[i]==' ')
        {
            //printf("%c", str[i]);
            s[i]=c;
        }
        else if (str[i]=='\0')
        {
            break;
        }
        else
        {
            s[i]=str[i];
        }
    }
    printf("The new string is %s" ,s);
    return 0;
}

int main()
{
    char st[50], ch;
    printf("What character do you want to replace spaces with: ");
    //scanf("%c", &ch);
    ch=getchar();
    fflush(stdin);
    printf("Enter a string: ");
    //scanf("%s", &st);
    gets(st);
    printf("Entering %c into string:", ch);

    spaceReplace(st, ch);

    return 0;
}