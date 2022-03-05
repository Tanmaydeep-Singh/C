

#include<stdio.h>
main()
{
    int i,j,l=0;
    char a[100],c;

    for(i=0; (c=getchar())!='\n';i++)
    {
        a[i]=c;
    }
    a[i]='\0';

    for(i=0;a[i] !='\0';i++)
    {
        if(a[i]==' ')
            l++;
    }
    printf("\n%d",l);
printf("\n");
}
