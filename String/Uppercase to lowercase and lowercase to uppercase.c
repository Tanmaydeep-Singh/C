
#include<stdio.h>
main()
{
    int i,j,l=0;
    char a[100],c;

    for(i=0; (c=getchar())!='\n';i++)
    {
        a[i]=c;
        l++;
    }
    a[i]='\0';

    for(i=0;a[i] !='\0';i++)
    {
    if(a[i]>=65 && a[i]<=97)
     printf("%c",a[i]+32);
    else
     printf("%c",a[i]-32);
    }
printf("\n");
}
