#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char mot[200];
    saisi (mot);
    s=carre (mot,b);
    printf("Veuillez saisir le mot:\n");
    gets(mot);
    for(i=0,j=(strlen(mot)/2);i<((strlen(mot))/2),j<strlen(mot);i++,j++)
    {
        if(mot[i]!=mot[j])
        {
            printf("Il ne s'agit pas d'un carré.\n");
            exit(0);
        }
    }
    printf("il s'agit d'un carré.\n");
    return(0);
}