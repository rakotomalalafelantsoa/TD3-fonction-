/* 
  algorithme:tableau_caractère_pallindrome
  variable:i,j:entier;
          c:tableau chaine de caractère [50] ;
  debut:
        ecrire ("Veuillez entrer un mot de moins de 50 caractère mot :");
        gets(chaine);
        for(i<-0,j<-(strlen(chaine))-1;i<strlen(chaine),j>0;i++,j--)
      si(chaine[i]<>chaine[j])
        ecrire("le mot n'est pas un pallindrome\n");
        fin;
      finsi
  finpour
   ecrire("le mot est un pallindrome\n");   
fin        
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void saisi (char *chaine);
int pallindrome (char *chaine);
void affichage (int s);
int main()
{
  char chaine[50],s;
  printf("PROGRAMME QUI VERIFIE SI UN MOT EST UN PALLINDROME OU NON");
  saisi(chaine);
  s=pallindrome(chaine);
  affichage(s);
  return (0);
}
  void saisi (char *chaine)
  {
    printf("Veuillez entrer un mot de moins de 50 caractère  :");
    gets (chaine);
  }
  int pallindrome(char *chaine)
  {
    int s,i,j;
    s=0;
    for(i=0,j=(strlen(chaine))-1;i<strlen(chaine),j>0;i++,j--)
    {
        if(chaine[i]!=chaine[j])
        {
          s=1;
          break;
        }
    }   
    return(s);
  }
  void affichage (int s)
  {
    if (s==0)
    {
      printf("Le mot est un pallindrome\n");
    }
    else
    {
      printf("Le mot n'est pas un pallindrome\n");
    }
  }