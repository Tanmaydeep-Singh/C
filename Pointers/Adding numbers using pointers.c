

#include<stdio.h>
main()
{
    int a,b,c=0,*p,*q;
    printf("Enter 2 numbers");
    scanf("%d%d",&a,&b);
    c=c+a+b;
    p=&a;
    q=&b;
    printf("%d\n%d\n%d",c,*p*2,*q*2);
}
