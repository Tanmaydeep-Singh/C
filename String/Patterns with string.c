

a
ab
abc
abcd
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
        l++;
    }
for(i=0;i<=l;i++)
{

for(j=0;j<i;j++)
    {
    printf("%c",a[j]);
    }
printf("\n");
}
}
---------------------------------------
     a
    a b
   a b c

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
for(i=0;i<=l;i++)
{
for(j=0;j<l-i;j++)
{
    printf(" ");
}

for(j=0;j<i;j++)
    {
    printf("%c ",a[j]);
    }
printf("\n");
}
}
--------------------------------------------
       a
      ab
     abc
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
        l++;
    }
for(i=0;i<=l;i++)
{
for(j=0;j<l-i;j++)
{
    printf(" ");
}

for(j=0;j<i;j++)
    {
    printf("%c",a[j]);
    }
printf("\n");
}
}
++++++
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
    for(j=0;j<=l-i;j++)
    printf(" ");

for(j=0;j<i;j++)
    {
    printf("%c",a[j]);
    }
printf("\n");
}
}
