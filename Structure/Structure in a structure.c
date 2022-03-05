
struct demo
{
    int a;
    struct demo1
    {
        int b;
    }st;
}st;
#include<stdio.h>
main()
{
  int c;

  scanf("%d%d",&st.a,&st.st.b);
  c=st.a + st.st.b;

    printf("%d",c);

}
