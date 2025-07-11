#include <stdio.h>
void saisi (int *n , int *t);
void affichage (int *t , int n);
void paire_impaire (int *t,int n);
int main()
{
    int n,t[50]; 
    saisi(&n,t);
    paire_impaire(t,n);
    affichage(t,n);
    return (0);
}
void saisi (int *n ,int *t)
{ 
    int i;
    printf("Veuillez entrer le taille du tableau.\n");
    scanf("%d",n);
    for(i=0;i<*n;i++)
    {
        printf("T[%d]=",i+1);
        scanf("%d",&t[i]);
    }

}
void affichage (int *t , int n)
{
    int i;
    printf("Les valeurs dans le tableau du paire au impaire sont:\n");
    for(i=0;i<n;i++)
    {
        printf("T[%d]=%d\n",i,t[i]);
    }

}
void paire_impaire (int *t,int n)
{
    int i,k,j;
    j=0;
    for(i=0;i<n;i++)
    {
        if (t[i]%2==0)
        {
            k=t[j];
            t[j]=t[i];
            t[i]=k;
            j++;
        }
    }

}
