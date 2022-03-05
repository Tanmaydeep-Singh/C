#include<stdio.h>
int main()
{
    int t,num;

    scanf("%d",&t);
    scanf("%d",&num);

    for( int i=0; i<t ; i++)
    {
        int n = num %10;
        printf("%d",n);

        num=num/10;


    }


}
