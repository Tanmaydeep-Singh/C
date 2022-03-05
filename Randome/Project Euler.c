--------------------------------------------------------------------------------
Q4
#include<stdio.h>
main()
{
    int a=0,b=0,c,i,j,n,k;
    printf(" largest palindrome made from the product of two 3-digit numbers.");

        for(i=900;i<=999;i++)
    {
        for(j=900;j<=999;j++)
        {
            a=i*j;
          if(a/100000==a%10)

                if( (a/10000 -10*(a/100000))== (a%100)/10)

                      if( a/1000 -10*(a/10000)== (a%1000)/100)

                                  b=a;

        }
    }
    printf("%d ",b);
}
--------------------------------------------------------------------------------------
Q7

   #include<stdio.h>
main()
{
    int number,i,j;

    scanf("%d",&number);

    for(i=1;i<number;i++)
    {
        for(j=2;j<=(number/2);j++)
{
         if(i%j==0)
{
             printf("Number is not prime");
             t=1;
             break;
}
    }



}
------------------------------------------------------------------------------



#include<stdio.h>
main()
{
    int d=1,i,j,k;

    for(i=1;i<1000;i++)
    {
        for(j=1;j<1000;j++)
        {
            for(k=i;k<1000;k++)
            {
                if(i*i + j*j == k*k && i+j+k==1000 && i<j<k )

                printf("%d ",i*j*k);
            }
        }
    }


}
--------------------------------------------------------------------------------------



#include <stdio.h>

int main()
{
long long int i, j, number, sum=0, c, count = 0, place;
printf("Enter rank of prime number:");
scanf("%lld", &number);
//printf("Prime numbers are: ");
for(i=2; i<=number; i++)
{
	c=0;
	for(j=1; j<=i; j++)
	{
		if(i%j==0)
			c++;
	}
	if (c==2)
	{   sum=sum+i;
		printf("%lld %lld", i,sum);
		printf("\n");
		count++;

		if (count == number)
		{
			printf("Sum of the numbers is: %d ", sum);
			break;
		}
	}
}
printf("\nSum of the numbers is: %d ", sum);
}




#include<stdio.h>
main()
{
    int a=0,b,c,divisers,number,i,j,count=0;



        for(i=1;i>=1;i++)
        {

            a=a+i;  /* Will give triangle number*/

         count=0;

        for(j=1;j<=a;j++)
        {
            if(a%j==0)
                count++;
        }

        if (count==500)
	break;
        }

        printf("\nTriangle number is:%d\n",a);
        printf("\nTotal divisors are:%d",count);

    }


