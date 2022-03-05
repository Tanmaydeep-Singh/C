#include <stdio.h>

int main()
{
int a[10][10], b[10][10], c[10][10], i, j, x;
printf("Enter values for matrix 1st and 2nd:\n");
int f=0;
x:for (i = 0; i <=1; ++i)
{
	for(j=0; j<=1; ++j)
		scanf("%d", &a[i][j]);
		b[i][j] = a[i][j];
}
f++;
if (f==1)
	goto x;
for (i = 0; i <=1; ++i)
{
	for(j=0; j<=1; ++j)
		scanf("%d", &b[i][j]);
}


for (i = 0; i <=1; ++i)
{
	for(j=0; j<=1; ++j)
	{
		printf("%d ", a[i][j]);
	}
	if (i==0)
		printf("+");
	else
		printf(" ");
	for(j=0; j<=1; ++j)
	{
		printf(" %d", b[i][j]);
	}
	if (i==0)
		printf(" =");
	else
		printf("  ");
		for(j=0; j<=1; ++j)
	{
		printf(" %d", a[i][j] + b[i][j]);
	}
	printf("\n");

}

}
