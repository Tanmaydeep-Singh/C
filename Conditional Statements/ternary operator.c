#include<stdio.h>
main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d\n", ((a>b)>c)  ? a:c);
    printf("%d\n", ((a<b)>c) ? a:c);
    printf("%d\n", ((a<b)<c) ? a:c);


}

