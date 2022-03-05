
1
1 4
1 4 9
1 4 9 16
1 4 9 16 25

#include<stdio.h>
main()
{int a,b,i,j,n;
printf("Enter a number");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
    for(j=1; j<=i; j++)
    {
        printf("\t%d",j*j);
    }
    printf("\n");
}
}

#include<stdio.h>
main()
{int a,b,i,j,n;
printf("Enter a number");
scanf("%d",&n);
9i=1;
while(i<=n)
{
    j=1;
    while(j<=i)
    {
        printf("\t%d",j*j);
        j++;
    }
    printf("\n");
i++;
}
}

#include<stdio.h>
main()
{int a,b,i,j,n;
printf("Enter a number");
scanf("%d",&n);
i=1;
do
    {
    j=1;
    do
    {
        printf("\t%d",j*j);
        j++;
    }
while(j<=i);
    printf("\n");
i++;
}
while(i<=n);

}
----------------------------------------------
1
1 8
1 8 27
1 8 27 64

#include<stdio.h>
main()
{
    int a,b,i,j,n;
    printf("Enter a number");
    scanf("\n%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("\t%d",j*j*j);
            printf("\n");
        }

}

#include<stdio.h>
main()
{
    int a,b,i,j,n;
    printf("Enter a number");
    scanf("\n%d",&n);
  i=1;
  while(i<=n)
  {
      j=1;
      while(j<=i)
      {
          printf("\t%d",j*j*j);
          j++;
      }
      printf("\n");
      i++;
  }

}

#include<stdio.h>
main()
{
    int a,b,i,j,n;
    printf("Enter a number");
    scanf("\n%d",&n);
  i=1;
  do {
      j=1;
      do{
          printf("\t%d",j*j*j);
          j++;
      }
      while(j<=i);
      printf("\n");
      i++;
  }
  while(i<=n);


}
------------------------------------------------
1
1 8
1 8 9
1 8 9 64

#include<stdio.h>
main()
{
    int a,b,i,j,n;
    printf("Enter a number");
    scanf("\n%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            if(j%2==0)
        printf("\t%d",j*j*j);
            else
        printf("\t%d",j*j);
            printf("\n");
        }

}

#include<stdio.h>
main()
{
    int i,j,n;
    printf("Enter a number");
    scanf("\n%d",&n);
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
        if(j%2==0)
        printf("\t%d",j*j*j);
        else
        printf("\t%d",j*j);
        j++;
        }
    printf("\n");
    i++;}

}

#include<stdio.h>
main()
{
    int i,j,n;
    printf("Enter a number");
    scanf("\n%d",&n);
    i=1;
    do{
        j=1;
        do{
             if(j%2==0)
        printf("\t%d",j*j*j);
        else
        printf("\t%d",j*j);
        j++;
        }
        while(j<=i);
        printf("\n");
        i++;
    }
    while(i<=n);

}
----------------------------------------
1
1 4
1 4 27
1 4 27 16


#include<stdio.h>
main()
{
    int a,b,i,j,n;
    printf("Enter a number");
    scanf("\n%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            if(j%2==0)
        printf("\t%d",j*j);
            else
        printf("\t%d",j*j*j);

            printf("\n");
        }

}

#include<stdio.h>
main()
{
    int i,j,n;
    printf("Enter a number");
    scanf("\n%d",&n);
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
        if(j%2==0)
        printf("\t%d",j*j);
        else
        printf("\t%d",j*j*j);
        j++;
        }
    printf("\n");
    i++;}

}

#include<stdio.h>
main()
{
    int i,j,n;
    printf("Enter a number");
    scanf("\n%d",&n);
    i=1;
    do{
        j=1;
        do{
             if(j%2==0)
        printf("\t%d",j*j);
        else
        printf("\t%d",j*j*j);
        j++;
        }
        while(j<=i);
        printf("\n");
        i++;
    }
    while(i<=n);

}
-----------------------------------------------
1
1 2 3
1 2 3 4 5

#include<stdio.h>
main()
{int a,b,i,j,n;
printf("Enter a number");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
    for(j=1; j<=2*i-1; j++)
    {
        printf("\t%d",j);
    }
    printf("\n");
}
}


#include<stdio.h>
main()
{int a,b,i,j,n;
printf("Enter a number");
scanf("%d",&n);
i++;
while(i<=n)
{
    j=1;
    while(j<=2*i-1)
    {printf("\t%d",j);
    j++;
    }
    printf("\n");
    i++;
}
}


#include<stdio.h>
main()
{int a,b,i,j,n;
printf("Enter a number");
scanf("%d",&n);
i++;
do
{
    j=1;
    do
    {printf("\t%d",j);
    j++;
    }
    while(j<=2*i-1);
    printf("\n");
    i++;
}
while(i<=n);
}



----------------------------------------------
1
2 2 2
3 3 3 3 3

#include<stdio.h>
main()
{int a,b,i,j,n;
printf("Enter a number");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
    for(j=1; j<=2*i-1; j++)
    {
        printf("\t%d",i);
    }
    printf("\n");
}
}


#include<stdio.h>
main()
{int a,b,i,j,n;
printf("Enter a number");
scanf("%d",&n);
i++;
3while(i<=n)
{
    j=1;
    while(j<=2*i-1)
    {printf("\t%d",i);
    j++;
    }
    printf("\n");
    i++;
}
}


#include<stdio.h>
main()
{int a,b,i,j,n;
printf("Enter a number");
scanf("%d",&n);
i++;
do
{
    j=1;
    do
    {printf("\t%d",i);
    j++;
    }
    while(j<=2*i-1);
    printf("\n");
    i++;
}
while(i<=n);
}

------------------------------------------------
1
2 3
4 5 6
7 8 9 0 1
2 3 4 5 6 7

#include<stdio.h>
main()
{
    int a=0,i,j,n;
    printf("Enter a number");
    scanf("\n%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        { if(a<=8)
             printf("\t%d",a=a+1);
             else
             printf("\t%d",a=0);
        }
        printf("\n");
        }
}
#include<stdio.h>
main()
{
    int a=0,i,j,n;
    printf("Enter a number");
    scanf("\n%d",&n);
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        { if(a<=8)
             printf("\t%d",a=a+1);
             else
             printf("\t%d",a=0);
             j++;
        }
        printf("\n");
        i++;
    }
}
#include<stdio.h>
main()
{
    int a=0,i,j,n;
    printf("Enter a number");
    scanf("\n%d",&n);
    i=1;
    do
    {
        j=1;
         do
        { if(a<=8)
             printf("\t%d",a=a+1);
             else
             printf("\t%d",a=0);
             j++;
        }
        while(j<=i);
        printf("\n");
        i++;
    }
    while(i<=n);
}


----------------------------------------------------
A
A B
A B C
A B C D
#include<stdio.h>
main()
{   int i,j,n;
    char a=65,b;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t%c",a+j-1);
        }
    printf("\n");}

}

#include<stdio.h>
main()
{
    int i,j,n;
    char a=65;
    printf("Enter a number\n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("%c",a+j-1);
            j++;
        }
        printf("\n");
        i++;
    }

}
#include<stdio.h>
main()
{
    int i,j,n;
    char a=65;
    printf("Enter a number\n");
    scanf("%d",&n);
    i=1;
    do
    {
        j=1;
       do
        {
            printf("%c",a+j-1);
            j++;
        }
         while(j<=i);
        printf("\n");
        i++;
    }
    while(i<=n);

}

---------------------------------------------------
A
B B
C C C
D D D D

#include<stdio.h>
main()
{   int i,j,n;
    char a=65,b;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t%c",a+i-1);
        }
    printf("\n");}

}
#include<stdio.h>
main()
{   int i,j,n;
    char a=65,b;
    printf("enter a number");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("%c",a+i-1);
            j++;
        }
        printf("\n");
        i++;
    }

}


#include<stdio.h>
main()
{   int i,j,n;
    char a=65,b;
    printf("enter a number");
    scanf("%d",&n);
    i=1;
   do
    {
        j=1;
        do
        {
            printf("%c",a+i-1);
            j++;
        }
        while(j<=i);
        printf("\n");
        i++;
    }
     while(i<=n);

}

-----------------------------------------------
1
121
12312
1234123

#include<stdio.h>
main()
{
    int a,b,i,j,k,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {for(j=1;j<=i;j++)
            {printf("\t%d",j);}


         for(k=1;k<j-1;k++)
         {printf("\t%d",k);}

        printf("\n");
    }
}


        {if(a>=10)
            {
            printf("\t%d",a%10);
            a++;
            }
            else
                printf("\t%d",a++);
        }
        printf("\n");
    }
    }

#include<stdio.h>
main()
{
    int a=0,i,j,n;
    printf("Enter a number");
    scanf("\n%d",&n);
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {if(a<=8)

            printf("\t%d",a=a+1);
            else
                printf("\t%d",a=a-9);
                j++;
        }
        printf("\n");
        i++;
    }
    }

#include<stdio.h>
main()
{
    int a=0,i,j,n;
    printf("Enter a number");
    scanf("\n%d",&n);
    i=1;
    do{
        j=1;
        do{
            if(a<=8)
                printf("\t%d",a=a+1);
            else
                printf("\t%d",a=a-9);
            j++;
        }
        while(j<=i);
        printf("\n");
        i++;
    }
    while(i<=n);
    }
-------------------------------------------------

1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1

#include<stdio.h>
main()
{
    int a,b,i,j,k,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {for(j=1;j<=i;j++)
            {printf("\t%d",j);}
           for(k=i-1;k<=i && k>0 ;k--)
         {printf("\t%d",k);}

        printf("\n");
    }
}


#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number");
    scanf("\n%d",&n);
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("\t%d",j);
            j++;
            }
            k=i-1;
            while(k<=i && k>0)
            {
                printf("\t%d",k);
                k--;
            }
    printf("\n");
    i++;}
}


#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number");
    scanf("\n%d",&n);
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("\t%d",j);
            j++;
            }
            k=i-1;
            while(k<=i && k>0)
            {
                printf("\t%d",k);
                k--;
            }
    printf("\n");
    i++;}
}
-------------------------------------------------
A
A B A
A B C B A

#include<stdio.h>
main()
{
    int i,j,k,n;
    char a=65;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {for(j=1;j<=i;j++)
            {printf("\t%c",a+j-1);}
           for(k=i-1;k<=i && k>0 ;k--)
         {printf("\t%c",a+k-1);}

        printf("\n");
    }
}

#include<stdio.h>
main()
{
    int i,j,k,n;
    char a=65;
    printf("Enter a number");
    scanf("\n%d",&n);
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("\t%c",a+j-1);
            j++;
            }
            k=i-1;
            while(k<=i && k>0)
            {
                printf("\t%c",a+k-1);
                k--;
            }
    printf("\n");
    i++;}
}


#include<stdio.h>
main()
{

    char a=65;
    int i,j,k,n;
    printf("Enter a number");
    scanf("\n%d",&n);
    i=1;
    do{
        j=1;
        do{
            printf("\t%c",a+j-1);
            j++;
        }
        while(j<=i);
        k=i-1;
        do{
            printf("\t%c",a+k-1);
            k--;
        }
        while(k<=i && k>0);
        printf("\n");
        i++;
    }
    while(i<=n);
}

-----------------------------------------------------------------
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

#include<stdio.h>
main()
{
    int i,j,n;
    printf("Press enter\n");
    for(i=1; i<=4; i++)
    {
        for(j=1;j<=4;j++)
            printf("\t%d",j);
            printf("\n");

    }


}

#include<stdio.h>
main()
{
    int i,j,n;
    printf("Press enter\n");
   i=1;
   while(i<=4)
   {
       j=1;
       while(j<=4)
       {
           printf("\t%d",j);
           j++;
       }
       printf("\n");
       i++;
   }
}


#include<stdio.h>
main()
{
    int i,j,n;
    printf("Press enter\n");
   i=1;
   do{j=1;
      do{printf("\t%d",j);
        j++;
      }
      while(j<=4);
printf("\n");
   i++;
   }
   while(i<=4);

}



-------------------------------------------

1
12
123
1234

#include<stdio.h>
main()
{
    int i,j,n;
    printf("Press enter\n");
    for(i=1; i<=4; i++)
    {
        for(j=1;j<=i;j++)
            printf("\t%d",j);
printf("\n");
    }


}

#include<stdio.h>
main()
{
    int i,j,n;
    printf("Press enter\n");
  i=1;
  while(i<=4)
  {
      j=1;
      while(j<=i)
      {
          printf("\t%d",j);
          j++;

      }
      printf("\n");
      i++;
  }


}

#include<stdio.h>
main()
{
    int i,j,n;
    printf("Press enter\n");
  i=1;
  do{
    j=1;
    do{
        printf("\t%d",j);
        j++;
    }
    while(j<=i);
printf("\n");
    i++;
  }
  while(i<=4);


}

------------------------------------
1111
2222
3333
4444

#include<stdio.h>
main()
{
    int i,j,n;
    printf("Press enter\n");
    for(i=1; i<=4; i++)
    {
        for(j=1;j<=4;j++)

     printf("\t%d",i);
printf("\n");
    }


}

#include<stdio.h>
main()
{
    int i,j,n;
    printf("Press enter\n");
    i=1;
    while(i<=4)
    {
        j=1;
        while(j<=4)
        {printf("\t%d",i);
            j++;
        }
printf("\n");
        i++;
    }


}

#include<stdio.h>
main()
{
    int i,j,n;
    printf("Press enter\n");
    i=1;
    do    {
        j=1;
        do{printf("\t%d",i);
            j++;
        }
        while(j<=4);
printf("\n");
        i++;
    }
    while(i<=4);



}
------------------------------------
     1
    12
   123

#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

}

#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number\n");
    scanf("%d",&n);
   i=1;
   while(i<=n)
   {
       j=1;
       while(j<=n-i)
       {
           printf(" ");
           j++;
       }
       j=1;
       while(j<=i)
       {
           printf("%d",j);
           j++;
       }
       printf("\n");
       i++;
   }

}

#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number\n");
    scanf("%d",&n);
   i=1;
  do{
    j=1;
    do{
        printf(" ");
        j++;
    }
    while(j<=n-i+1);
    j=1;
    do{
        printf("%d",j);
        j++;
    }
    while(j<=i);
    printf("\n");
    i++;
  }
  while(i<=n);
}
-------------------------------
    1
   121
  12321

#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
         for(k=i-1;k<=i && k>0;k--)
        {
            printf("%d",k);
        }

        printf("\n");
    }
}

#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number\n");
    scanf("%d",&n);
 i=1;
 while(i<=n)
 {
     j=1;
     while(j<=n-i)
     {
         printf(" ");
         j++;
     }
     j=1;
     while(j<=i)
     {
         printf("%d",j);
         j++;
     }
     k=i-1;
     while(k<=i && k>0)
     {
         printf("%d",k);
         k--;
     }
  printf("\n");
  i++;
 }
}

#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number\n");
    scanf("%d",&n);
 i=1;
 do
 {
     j=1;
     do
     {
         printf(" ");
         j++;
     }
     while(j<=n-i+1 );

     j=1;
     do
     {
         printf("%d",j);
         j++;
     }
     while(j<=i);
      k=i-1;
    do
     {
         printf("%d",k);
         k--;
     }
      while(k<=i && k>0);
  printf("\n");
  i++;
 }
 while(i<=n);
}
---------------------------------------------
   1
  1 2
 1 2 3
1 2 3 4

#include<stdio.h>
main()
{
     int i,j,k,n;
     printf("enter a number\n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {   for(j=1;j<=n-i;j++)
         {
             printf(" ");
         }
         for(j=1;j<=i;j++)
         {
             printf("%d ",j);
         }
         printf("\n");
     }
}

#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=n-i)
        {
            printf(" ");
            j++;
        }
        j=1;
        while(j<=i)
        {
            printf("%d ",j);
            j++;
        }
        printf("\n");
        i++;
    }
}

#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    i=1;
    do
    {
        j=1;
        do
        {
            printf(" ");
            j++;
        }
        while(j<=n-i+1);
        j=1;
        do
        {
            printf("%d ",j);
            j++;
        }
        while(j<=i);
        printf("\n");
        i++;
    }
     while(i<=n);
}
----------------------------------
1 2 3
 1 2
  1

#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
         for(j=1;j<=n-i ;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}

#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number\n");
    scanf("%d",&n);
i=n;
while(i>0)
{  j=1;
    while(j<=n-i)
    {
        printf(" ");
        j++;
    }
    j=1;
    while(j<=i)
    {
        printf("%d ",j);
        j++;
    }
    printf("\n");
    i--;
}
}
#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number\n");
    scanf("%d",&n);
i=n;
do
{  j=1;
   do
    {
        printf(" ");
        j++;
    }
     while(j<=n-i+1);
    j=1;
    do
    {
        printf("%d ",j);
        j++;
    }
    while(j<=i);
    printf("\n");
    i--;
}
while(i>0);
}
-------------------------------------------------
    1
   1 2
  1 2 3
   1 2
    1
#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { for(j=1;j<=n-i;j++)
    {
        printf(" ");
    }
     for(j=1;j<=i;j++)
     {
         printf("%d ",j);
     }
         printf("\n");
    }


    for(i=n-1;i>=1;i--)
    { for(j=1;j<=n-i;j++)
    {
        printf(" ");
    }
     for(j=1;j<=i;j++)
     {
         printf("%d ",j);
     }
         printf("\n");
    }


}


#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number\n");
    scanf("%d",&n);
   i=1;
   while(i<=n)
   {
       j=1;
       while(j<=n-i)
       {
           printf(" ");
           j++;
       }
       j=1;
       while(j<=i)
       {
           printf("%d ",j);
           j++;
       }
       printf("\n");
       i++;
   }

    i=n;
   while(i>=1)
   {
       j=1;
       while(j<=n-i+1)
       {
           printf(" ");
           j++;
       }
       j=1;
       while(j<=i-1)
       {
           printf("%d ",j);
           j++;
       }
       printf("\n");
       i--;
   }

}


#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number\n");
    scanf("%d",&n);
   i=1;
   do
   {
       j=1;
       do
       {
           printf(" ");
           j++;
       }
       while(j<=n-i+1);
       j=1;
       do
       {
           printf("%d ",j);
           j++;
       }
       while(j<=i);
       printf("\n");
       i++;
   }
   while(i<=n);

    i=n;
     do
   {
       j=1;
       do
       {
           printf(" ");
           j++;
       }
       while(j<=n-i+1);
       j=1;
       do
       {
           printf("%d ",j);
           j++;
       }
       while(j<=i);
       printf("\n");
       i--;
   }
   while(i>=1);

   }

-----------------------
      *
     * *
    *   *
     * *
      *
#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(i==1 || j==1 || i==j )
            printf(" *");
            else
            printf("  ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(i==1 || j==1 || i==j )
            printf(" *");
            else
            printf("  ");
        }
        printf("\n");
    }
}

#include<stdio.h>
main()
{
     int i,j,k,n;
     printf("Enter a number\n");
     scanf("%d",&n);
     i=1;
     while(i<=n)
     {
         j=1;
         while(j<=n-i)
         {
             printf(" ");
             j++;
         }
         j=1;
         while(j<=i)
         {
             if(i==1 || j==1 || i==j )
            printf(" *");
            else
            printf("  ");
             j++;
         }
         printf("\n");
         i++;
     }

     i=n;
     while(i>=1)
     {
         j=1;
         while(j<=n-i)
         {
             printf(" ");
             j++;
         }
         j=1;
         while(j<=i)
         {
            if(i==1 || j==1 || i==j )
            printf(" *");
            else
            printf("  ");
             j++;
         }
         printf("\n");
         i--;
     }

}

#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a number");
    scanf("%d",&n);
i=1;
do
{
    j=1;
   do
    {
        printf(" ");
        j++;
    }
     while(j<=n-i+1);
    j=1;
    do
    {
        if(i==1 || j==1 || i==j )
            printf(" *");
            else
            printf("  ");
            j++;
    }
        while(j<=i);
    printf("\n");
    i++;
}
while(i<=n);
i=n;
do
{
    j=1;
    do
    {
        printf(" ");
        j++;
    }
    while(j<=n- i+1);
    j=1;
   do
    {
        if(i==1 || j==1 || i==j )
            printf(" *");
            else
            printf("  ");
            j++;
    }
     while(j<=i );
    printf("\n");
    i--;
}
while(i>=1);
}


