
struct demo
{
 int a,b,c;
}st;

#include<stdio.h>
main()
{
    scanf("%d%d",&st.a,&st.b);
    st.c = st.a + st.b;
    printf("%d",st.c);

}

