

#include<stdio.h>
main()
{
   int a,b,i,n;
   printf("Enter a number\n");
   scanf("%d",&n);
for(i=1; i<=n;i++)
{
    if(i%2==0)
        printf("\t%d",i*i);
    else
        printf("\t%d",i*i*i);
}


}

#include<stdio.h>
main()
{
   int a,b,i,n;
   printf("Enter a number\n");
   scanf("%d",&n);
i=1;
while(i<=n)
{if(i%2==0)
        printf("\t%d",i*i);
    else
        printf("\t%d",i*i*i);
 i++;
}

}

#include<stdio.h>
main()
{
   int a,b,i,n;
   printf("Enter a number\n");
   scanf("%d",&n);
i=1;
do{if(i%2==0)
        printf("\t%d",i*i);
    else
        printf("\t%d",i*i*i);
 i++;
}
while(i<=n);

}
