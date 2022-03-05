#include<stdio.h>
struct node
{
int no;
struct node *next;
};
main()
{
struct node *p,*q,*r;
int i;

p=((struct node*)malloc(sizeof(struct node)));
scanf("%d",&p->no);
p->next='\0';
r=p;

q=((struct node*)malloc(sizeof(struct node)));
scanf("%d",&q->no);
r->next=q;
r=r->next;
q->next='\0';

q=((struct node*)malloc(sizeof(struct node)));
scanf("%d",&q->no);
r->next=q;
r=r->next;
q->next='\0';

q=((struct node*)malloc(sizeof(struct node)));
scanf("%d",&q->no);
r->next=q;
r=r->next;
q->next='\0';
int sum=0;
while(p!='\0')
{

    printf("%d->",p->no);
    p=p->next;
}


}


--------------------------------------------
#include<stdio.h>
struct node
{
int no;
struct node *next;
};
main()
{
struct node *p,*q,*r;
int i,sum=0;

p=((struct node*)malloc(sizeof(struct node)));
scanf("%d",&p->no);
p->next='\0';
r=p;

q=((struct node*)malloc(sizeof(struct node)));
scanf("%d",&q->no);
r->next=q;
r=r->next;
q->next='\0';

q=((struct node*)malloc(sizeof(struct node)));
scanf("%d",&q->no);
r->next=q;
r=r->next;
q->next='\0';

q=((struct node*)malloc(sizeof(struct node)));
scanf("%d",&q->no);
r->next=q;
r=r->next;
q->next='\0';

while(p!='\0')
{   sum=sum+p->no;
    p=p->next;
}
printf("\n%d",sum);
}
--------------------------------------------
#include<stdio.h>
struct node
{
int no;
struct node *next;
};
main()
{
struct node *p,*q,*r;
int i,n,j,sum=0;
printf("\nSpecify the number of entries:\n");
scanf("%d",&n);
p=((struct node*)malloc(sizeof(struct node)));
scanf("%d",&p->no);
p->next='\0';
r=p;

for(j=0;j<n-1;j++)
{
q=((struct node*)malloc(sizeof(struct node)));
scanf("%d",&q->no);
r->next=q;
r=r->next;
q->next='\0';
}
while(p!='\0')
{   printf(" %d ",p->no);
    p=p->next;
}
}
------------------------------------------
