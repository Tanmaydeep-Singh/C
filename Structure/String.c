

struct demo
{
    char a[10],c;

}st;
 #include<stdio.h>
 main()
 { int i;

  printf("Enter your text");
    for(i=0;(st.c=getchar())!='\n';i++)
        {
            st.a[i]=st.c;
        }
        st.a[i]='\0';
        printf("\n%s",st.a);
}
