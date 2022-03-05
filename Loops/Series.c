
#include<stdio.h>
main()
{
    int a,b,i,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
            printf("\t%d",(i*i)+1);
        else
            printf("\t%d",i*i);
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
    {
        if(i%2==0)
            printf("\t %d",i*i+1);
        else
            printf("\t %d",i*i);
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
    do    {
        if(i%2==0)
            printf("\t %d",i*i+1);
        else
            printf("\t %d",i*i);
    i++;
    }
    while(i<=n);

}


-----------------------------------------
#include<stdio.h>
main()
{
    int a,b,i,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
         {
        if(i%2==0)
            printf("\t %d",i*i);
        else
            printf("\t %d",i*i+2);
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
                {
        if(i%2==0)
            printf("\t %d",i*i);
        else
            printf("\t %d",i*i+2);
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
    do              {
        if(i%2==0)
            printf("\t %d",i*i);
        else
            printf("\t %d",i*i+2);
    i++;
    }
    while(i<=n);



}

------------------------------------------------
------------------------------------------------
#include<stdio.h>
main()
{ int a=1,b,i,n;
    printf("Enter a number");
    scanf("\n %d",&n);
    for(i=1; i<=n; i++)
    {
       a=a*i;
      }
        printf("\t %d",a);
}

#include<stdio.h>
main()
{ int a=1,b,i,n;
    printf("Enter a number");
    scanf("\n %d",&n);
i=1;
while(i<=n)
    {
       a=a*i;
      i++;
      }
        printf("\t %d",a);
}

#include<stdio.h>
main()
{ int a=1,b,i,n;
    printf("Enter a number");
    scanf("\n %d",&n);
i=1;
  do { a=a*i;
      i++;
      }
while(i<=n);

        printf("\t %d",a);
}
-----------------------------------------

#include<stdio.h>
main()
{
    int a,b,i,n;
    printf("Print table of A till B");
    scanf("%d%d",&n,&b);
    for(i=1; i<=b; i++)
    {
        a=n*i;
        printf("\n%d*%d=%d",n,i,a);
    }

}

#include<stdio.h>
main()
{
    int a,b,i,n;
    printf("Print table of A till B");
    scanf("%d%d",&n,&b);
    i=1;
    while(i<=b)
           {
        a=n*i;
        printf("\n%d*%d=%d",n,i,a);
    i++;
    }

}

#include<stdio.h>
main()
{
    int a,b,i,n;
    printf("Print table of A till B");
    scanf("%d%d",&n,&b);
    i=1;
    do
                  {
        a=n*i;
        printf("\n%d*%d=%d",n,i,a);
    i++;
    }
    while(i<=b);


}

----------------------------------------------
#include<stdio.h>
main()
{ int a=0,b=1,c,i,n;
    printf("Enter a number");
    scanf("%d",&n);
     printf("\t0\t1");
  for(i=1; i<=n; i++)
    {
        c=a+b;

        printf("\t%d",c);
        a=b;
        b=c;
    }
}

#include<stdio.h>
main()
{ int a=0,b=1,c,i,n;
    printf("Enter a number");
    scanf("%d",&n);
     printf("\t0\t1");
i=1;
while(i<=n)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
i++;
    }
}

#include<stdio.h>
main()
{ int a=0,b=1,c,i,n;
    printf("Enter a number");
    scanf("%d",&n);
     printf("\t0\t1");
i=1;
do
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
i++;
    }
    while(i<=n);
}
------------------------------------------
#include<stdio.h>
main()
{int a,b=0,m=10,n;
 printf("Enter a number");
scanf("%d",&n);
while(n>0)
{
    a=n%10;
    if(m>a)
    m=a;
    n=n/10;
    b=b+a;

}
    printf("%d\n ",m);
    printf("\n%d",b);

}

#include<stdio.h>
main()
{int a,b=0,m=1,n;
printf("Enter a number");
scanf("%d",&n);
while(n>0)
{
    a=n%10;
    if(m<a)
    m=a;
    n=n/10;
    b=b+a;

}
    printf("%d\n ",m);
    printf("\n%d",b);

}

