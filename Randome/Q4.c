#include<stdio.h>
main()
{
int a,b,c,d;
float e,f;
printf("Enter your marks according as \n Physics \n Chemistry \n Maths \n");
scanf("%d%d%d",&a,&b,&c);
printf(" Physics %d \n Chemistry %d \n Maths %d \n",a,b,c);
if((a>=60 && b>=60  && c>=60 && a+b+c>=200 )||( a>=60  && b+c>=150))
  printf("Student secures %f percent in PCM and students total score is %d \n Student can apply for admission",(float)(a+b+c)/3,a+b+c);
else
    printf("Student dosen't qualifies basic requirments ");

}
