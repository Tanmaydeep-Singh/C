

#include<stdio.h>
main()
{
    int a=5,*p,**q;
    p=&a;
    q=&*p;
    printf("%d\n%d\n%d",a,*p,*q);
}
