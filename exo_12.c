/*
    algorithme:carré_magique
    variable:  i,j,n,s:entier;
               tab,somme,somm:tableau entier[300][300],[300],[300];
    debut:
        ecrire("Veuillez entrer la taille du tableau:");
        lire(n);
        pour(i<-0;i<n;i++)
            pour(j<-0;j<n;j++)  
                ecrire("T[",i,"][",j,"]=");
                lire(tab[i][j]);
            finpour
        finpour
        ecrire("Le carré est:\n");
        pour(i<-0;i<n;i++)
            pour(j<-0;j<n;j++)  
                ecrire(tab[i][j]"\t");
            finpour
            ecrire("\n");
        finpour
        s<-0;
        pour(i<-0;i<n;i++)
            pour(j<-0;j<n;j++)  
                s<-s+tab[i][j];
            finpour
            somme[i]<-s;
            s<-0;
        finpour
        pour(i<-0;i<n;i++)
            pour(j<-0;j<n;j++)  
                s<-s+tab[i][j];
            finpour
            somme[i]<-s;
            s<-0;
        finpour
        pour(i<-0;i<n;i++)
            pour(j<-0;j<n;j++)  
                s<-s+tab[j][i];
            finpour
            somm[i]<-s;
            s<-0;
        finpour
        pour(i<-0;i<(n/2);i++)
            pour(j<-0;j<(n/2);j++)
                si(somme[i]<>somm[j])
                    ecrire("ce n'est pas un carré magique.\n");
                    fin;
                finsi
            finpour
        finpour
        ecrire("c'est un carré magique.\n");
    fin
*/
#include <stdio.h>
#include <stdlib.h>
void saisi (int tab[][300], int *n);
void affichage (int tab[][300],int n);
void carre (int tab[][300],int n, int *somme,int *somm,int *k);
void resultat (int k);
int main()
{
    int n,tab[300][300],somme[300],somm[300],k;
    saisi (tab,&n);
    affichage (tab,n);
    carre (tab,n,somme,somm,&k);
    resultat (k);
    return(0);
}
void saisi (int tab[][300], int *n)
{
    int i,j;
    printf("Veuillez entrer la taille du tableau:");
    scanf("%d",n);
    for(i=0;i<*n;i++)
    {
        for(j=0;j<*n;j++)  
        {
            printf("T[%d][%d]=",i,j);
            scanf("%d",&tab[i][j]);
        }
    }
}
void affichage (int tab[][300],int n)
{
    int i,j;
    printf("Le carré est:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)  
        {
            printf("%d\t",tab[i][j]);
        }
        printf("\n");
    }
}
void carre (int tab[][300],int n, int *somme,int *somm,int *k)
{
    int s,i,j;
    s=0;
    *k=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)  
        {
            s=s+(tab[i][j]);
        }
        somme[i]=s;
        s=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)  
        {
            s=s+(tab[i][j]);
        }
        somme[i]=s;
        s=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)  
        {
            s=s+(tab[j][i]);
        } 
        somm[i]=s;
        s=0;
    }
     for(i=0;i<(n/2);i++)
     {
        for(j=0;j<(n/2);j++)
        {
            if(somme[i]!=somm[j])
            {
                *k=0;
            }
            
        }
     }
     
}
void resultat (int k)
{
    if (k==0)
    {
        printf(" Le carré n'est pas magique\n");
    }
    if (k==1)
    {
        printf("Le carré est magique\n");
    }
}