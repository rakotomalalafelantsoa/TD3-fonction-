#include <stdio.h>
#include <math.h>
void saisi (float *t ,int *n);
float moyenne (float *t,int n);
void affichage (float moyenne ,char *e);
int cart (float *t,int n,float *ecart,float moyenne);
int main()
{
    int n,k;
    float m,ecart[50],t[50];
    printf("PROGRAMME QUI CHERCHE L'ELEMENT DU TABLEAU PLUS PROCHE DE LA MOYENNE\n");
    saisi(t,&n);
    m=moyenne (t,n);   
    affichage(m,"La moyenne");
    k=cart(t,n,ecart,m);
    affichage(t[k],"La valeur la plus proche de la moyenne " );
    return (0);
}
void saisi (float *t ,int *n)
{
    int i;
    printf("Veuillez entrer la taille du tableau:");
        scanf("%d",n);
        for(i=0;i<*n;i++)
        {
            printf("T[%d]=",i);
            scanf("%f",&t[i]);
        }
}
float moyenne(float *t,int n)
 {
        int i;
        float m,s;    
        s=0;
        m=0;
        for (i=0;i<n;i++)
        {
          s=s+t[i];
        }
        m=s/n;
        return(m);
}
void affichage (float moyenne, char *e)
{
    printf ("%s est %.2f\n",e,moyenne);
}
int cart(float *t,int n,float *ecart,float moyenne)
{
        int i,min,k;
        for(i=0;i<n;i++)
        {
            ecart[i]=fabs(moyenne-t[i]);

        }
        min=ecart[0];
        for(i=0;i<n;i++)
        {
            if(min>ecart[i])
            {
                min=ecart[i];
                k=i;
            }
        }
        return(k);
}