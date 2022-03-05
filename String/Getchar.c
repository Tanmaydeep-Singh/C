


#include<stdio.h>
main()
{
    char a[200],c;
    int i;
    for(i=0;(c=getchar())!='\n';i++)
        {
            a[i]=c;
        }
        a[i]='\0';
        printf("\n%s",a);
}
