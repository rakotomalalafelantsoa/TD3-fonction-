#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void saisi (char *phrase,int *nb);
void decryptage (char *phrase ,int nb);
void affichage (char *phrase,int nb);
int main()
{
    int nb;//declaration des variable tel que i,j pour valeur temporel ; nb pour contenir la taille du tableau et phrase[500] le tableau où est stocké le texte à decrypter 
    char phrase [500];
    saisi (phrase,&nb);
    decryptage( phrase,nb);
    affichage (phrase,nb);
    return(0);
}
void saisi (char *phrase,int *nb) 
{
    printf ("PROGRAMME DE DECRYPTAGE\n");
    printf("Veuillez entrer le texte à décrypter :");
    gets(phrase);//prise du texte en mémoire
    *nb=strlen(phrase)+1;
}
void decryptage (char *phrase,int nb)
{
    int i,j;
    for(i=0;i<nb;i++)
    {
	    if(phrase[i]=='I'&& phrase[i+1]=='T')//condition qui permet au mot d'être décrypter
	    {
		    for(j=i;j<nb;j++)  
		    {
		    	phrase[j]=phrase[j+2];//écrasement des 'IT'
		    }
	    }
    }
}
void affichage (char *phrase,int nb)
{
    printf("Le texte decrypté est: ");
    puts(phrase);//affichage du texte crypté
}
