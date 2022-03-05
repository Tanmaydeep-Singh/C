

#include<stdio.h>
main()
{
    int i,j,*p,*q,*r,a,b,c,d;
    printf("Enter 3 values\n");
    scanf("%d%d%d",&a,&b,&c);

        p=&a;
        q=&b;
        r=&c;

{

    if(*p>*q)
        if(*p>*r)
            printf("%d",*p);
        else
            printf("%d",*r);
  else
    if(*q>*p)
        if(*q>*r)
        printf("%d",*q);
    else
        printf("%d",*r);
}

}
