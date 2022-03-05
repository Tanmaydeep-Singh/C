

struct demo
{
 int a,b;

}st,*p;
main()
{
p=&st;
scanf("%d%d",&p->a,&p->b);
if (p->a >p->b)
    printf("Greater number is %d",p->a);
else
    printf("Greater number is %d",p->b);
}
