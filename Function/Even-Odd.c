

#include<stdio.h>
fun();
main()

{
    printf("Specify function's repetition");
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
   { fun(); }

}
fun()

{
    int a,b;
    scanf("%d",&a);
    if(a%2==0)

        printf("\n%d is even\n",a);
        else
        printf("\n%d is odd\n",a);

}
