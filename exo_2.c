#include <stdio.h>
void saisi (int *n , int *t);
void affichage (int *t , int n,char *e);
void triage (int *t,int n);
int insertion (int *t,int n);
int main()
{
    int n,i,x,t[50],tn[50],j,z;
        saisi(&n,t);
        triage(t,n);
        affichage(t,n,"Avant insertion");
        n=insertion(t,n);
        affichage(t,n,"Après insertion");
        triage(t,n);
        affichage(t,n,"Après triage");
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
void affichage (int *t , int n,char *e)
{
    int i;
    printf("Les valeurs dans le tableau %s sont:\n",e);
    for(i=0;i<n;i++)
    {
        printf("T[%d]=%d\n",i,t[i]);
    }

}
void triage (int *t,int n)
{
    int i,j,z;
    z=0;
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(t[i]<t[j])
                {
                    z=t[i];
                    t[i]=t[j];
                    t[j]=z;
                }
            }
        }
}
int insertion (int *t,int n)
{
    int x,o;
    x=0;
    printf("Veuillez entrer une valeur a inserer:");
        scanf("%d",&x);
        t[n]=x;
    o=n+1;
    return(o);
}