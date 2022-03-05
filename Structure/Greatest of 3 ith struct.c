
struct demo
{
    int a,b,c;
}st;
 #include<stdio.h>
 main()
 {
     printf("Enter 3 values");
     scanf("%d%d%d",&st.a,&st.b,&st.c);

    if(st.a>st.b)
       if(st.a>st.c)
       printf("%d is greatest",st.a);
        else
        printf("%d is greatest",st.c);
else
       if (st.b>st.c)
        printf("%d is greatest",st.b);
       else
        printf("%d is greatest",st.c);


 }
