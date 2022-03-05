
struct demo
{
    int a,b;
}st;
 #include<stdio.h>
 main()
 {
     printf("Enter 2 values");
     scanf("%d%d",&st.a,&st.b);

     if(st.a>st.b)
        printf("\n%d",st.a);
     else
        printf("\n%d",st.b);


 }
