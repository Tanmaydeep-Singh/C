


#include<stdio.h>

/* prototyping */
fun();
main()
{
    int c;
    /* declaration */
    c=fun();

    printf("%d",c);
}
/*defination*/
fun()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a+b;
   return(c);

}
