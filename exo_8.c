

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void saisi (char *text);
void bigramme (char *bg);
int recherche (char *text,int b,char *bg);
void affichage (int nb);
int main()
{
    int i,nb,b;
    char text[200],bg[3];
    saisi (text);
    bigramme (bg);
    b=strlen(text);
    nb=recherche (text,b,bg);
    affichage (nb);
    return (0);
}
void saisi (char *text)
{
    printf("Veuillez saisir le texte:\n");
    gets(text);
}
void bigramme (char *bg)
{
    printf("veuillez entrez le bigramme à compter:");
    gets(bg);
}
int recherche (char *text ,int b,char *bg)
{
    int i,nb;
    nb=0;
    for(i=0;i<b;i++)
    {
        if(text[i]==bg[0] && text[i+1]==bg[1])
        {
            nb++;
        }
    }
    return (nb);
}
void affichage (int nb)
{
    printf("Le nombre du bigramme dans le texte est %d.\n",nb);
}