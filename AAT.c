#include<stdio.h>
int main()
{

    int n,i;

    float per[20], noavg, mol[20], molavg, sum=0, nr=0, dr=0, nrl=0, drl=0, pdi;
    printf("enter the number of molecules: \n"); 
    scanf ("%d",&n);

    printf("enter the percentage of molecules;\n");

    for (i=0;i<n;i++)
    {
         scanf("%f", &per[i]); 
         sum=sum+per[i];
    }



    if(sum!=100)
    {
        printf("invalid inputs!!!\n");
    }


    else if (sum==100)

    printf("enter the molecular masses of each molecule:\n");

    for (i=0;i<n;i++)
    {
        scanf("%f",&mol[i]);
        nr=nr+per[i]*mol[i];
        dr=dr+per[i];
    }

    noavg=nr/dr;
    for (i=0;i<n;i++)
    {
        nrl=nrl+per[i]*(mol[i]*mol[i]);
        drl=drl+per [i]*mol [i]; 
    }


    molavg=nrl/drl;

    pdi=molavg/noavg;
    printf("\n the number average molecular mass is %f", noavg); 
    printf("\n the weight average molecular mass is %f", molavg); 
    printf("\n the PDI is %f", pdi);

    if (pdi>1)
    {
        printf("\n the polymer is synthetic");
    }


    else
    {
        printf("\n the polymer is natural");
    }



return 0;
}
