


#include<stdio.h>
main()
{
    int a,b=0,n,i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1; i<=n; i++)

    printf("\t %d",i*i*i);
}


#include<stdio.h>
main()
{
    int a,b=0,n,i;
    printf("Enter a number");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {printf("\t %d",i*i*i);
        i++;
    }
}


#include<stdio.h>
main()
{int a,b,i,n;

printf("Enter number");
scanf("%d",&n);
i=1;
do{
    printf("\t %d",i*i*i);
    i++;
}
    while(i<=n);
}
