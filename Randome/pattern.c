#include <stdio.h>

int main()
{
int i, j, a = 0, n;
scanf("%d", &n);
for(i=n; i>=1; i--)
{
    for (j = n; j > i; --j)
    {
      printf("%d ", j);
    }
    for(j=0; j<i; j++)
    {
      printf("%d ", i);
    }

    for(j=1; j<i; j++)
    {
      printf("%d ", i);
    }

    for (j = i+1; j <= n; ++j)
    {
      printf("%d ", j);
    }

    printf("\n");

}

for(i=2; i<=n; i++)
{
    for (j = n; j > i; --j)
    {
      printf("%d ", j);
    }
    for(j=0; j<i; j++)
    {
      printf("%d ", i);
    }

    for(j=1; j<i; j++)
    {
      printf("%d ", i);
    }

    for (j = i+1; j <= n; ++j)
    {
      printf("%d ", j);
    }

    printf("\n");

}

}
/*
  	            4 4 4 4 4 4 4  
2 2 2			4 3 3 3 3 3 4   
2 1 2           4 3 2 2 2 3 4   
2 2 2           4 3 2 1 2 3 4   
                4 3 2 2 2 3 4   
                4 3 3 3 3 3 4   
                4 4 4 4 4 4 4       
*/