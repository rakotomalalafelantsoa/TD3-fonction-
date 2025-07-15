#include <stdio.h>
#include <stdlib.h>
void saisi (int *n);
void pascal (int tab [300][300],int n);
void affichage (int tab [][300],int n);
int main()
{
    int n,i,j,tab[300][300];
    saisi (&n);
    pascal (tab,n);
    affichage (tab,n);
    return (0);
}
void saisi (int *n)
{
    printf("Veuillez entrer le degré du triangle de Pascal:");
    scanf("%d",n);
    *n=*n+1;
}
void pascal (int tab [300][300],int n)
{
    int i,j,s;
    s=0;
   for(i=1;i<=n;i++)
    {
        tab[i][0]=1;
        tab [i][i]=1;
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            s=tab[i][j]+tab[i][j+1]; 
            tab[i+1][j+1]=s;
        }
    }
}
void affichage (int tab [300][300],int n)
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(tab[i][j]!=0)
            {
                printf("%d\t",tab[i][j]);
            }
        }
        printf("\n");
    }
}