#include<stdio.h>
main()
{
  int i,j,k,n;
  printf("Armstrong numbers for digits  till =");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
      for(j=0;j<=n;j++)
      {
          for(k=0;k<=n;k++)
          {
              if( (i*i*i + j*j*j + k*k*k )==( 100*i + 10*j + k ) )
                printf("%d\n",( 100*i + 10*j + k ));
          }

      }
  }


}
