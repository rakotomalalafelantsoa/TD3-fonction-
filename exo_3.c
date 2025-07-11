#include <stdio.h>
void saisi (int *n , int *t);
void affichage (int *t , int n,char *e);
int supression (int *t,int n);
int main()
{
    int n,z,t[50];
    saisi(&n,t);
    z=supression(t,n);
    affichage(t,z,"sans cet élèment");
    return(0);
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
void affichage (int *t , int n,char *e)
{
    int i;
    printf("Les valeurs dans le tableau %s sont:\n",e);
    for(i=0;i<n;i++)
    {
        printf("T[%d]=%d\n",i,t[i]);
    }

}
int supression (int *t,int n)
{
    int i,x,j,u;
    u=n;
    printf("Veuillez entrer l'élèment à supprimer:");
    scanf("%d",&x);
    for (i=0;i<n;i++)
    {
        if (t[i]==x)
        {
            for(j=i;j<n;j++)
            {
                t[j]=t[j+1];
                
            }
            u=u-1;
            i--;
        }
    }
    return (u);
}