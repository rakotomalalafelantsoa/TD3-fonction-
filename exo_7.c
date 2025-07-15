#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void saisi (char *text);
void compte (char *text, int *nba, int *nbes);
void affichage (int nba ,int nbes);
int main()
{
  int nba,nbes;
  char text[200];
  saisi (text);
  compte (text,&nba,&nbes);
  affichage (nba,nbes);
  return(0);
}
  void saisi(char *text)
  {
  printf("PROGRAMME QUI COMPTE LE NOMBRE DE 'a' ET DE 'es' DANS UNE PHRASE\n");
  printf("Veuillez saisir un texte qui se termine par un point\n");
  gets(text);
  }
  void compte (char *text ,int *nba ,int *nbes)
  {
    int i;
    *nba=0;
    *nbes=0;
    for(i=0;i<strlen(text);i++)
    {
      if(text[i]=='a')
      {
        *nba=*nba+1;
      }
      else if(text[i]=='e'&& text[i+1]=='s')
      {
        *nbes=*nbes+1;
      }
      else if (text[i]=='.')
      {
        break;
      }
    }
  }
  void affichage(int nba,int nbes)
  {
    printf("\nLe nombre de 'a' est %d et celui de 'es' est %d \n",nba,nbes);    
  } 
 
