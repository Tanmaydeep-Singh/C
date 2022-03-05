

struct demo
{
    int a;
}st[10];
 #include<stdio.h>
 main()
 { int i,n;

     printf("Specify the array");
     scanf("%d",&n);

     for(i=0;i<n;i++)
     {
        scanf("%d",&st[i].a);
     }

     for(i=0;i<n;i++)
     {
         printf("%d\n",st[i].a);
     }

 }
