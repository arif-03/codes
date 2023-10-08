#include<stdio.h>
int main()
{
    FILE *pl , *pt;
    pl = fopen("even.txt","w");
    pt= fopen("odd.txt","w");
    fprintf(pl,"Even numbers from 1 to 100: \n");
        fprintf(pt,"Odd numbers from 1 to 100: \n");

    int i;
    for(i=1;i<=100;i++)
    {
        if(i%2 == 0)
        {
            fprintf(pl, "%d \n",i);
        }
        else
        fprintf(pt,"%d \n",i);
    }
    fclose(pl);
    fclose(pt);
    return 0;
}