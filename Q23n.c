/*
      *
    * *
  * * *
* * * * * * * *
  * * *
    * *
      * 
*/
#include <stdio.h>
int main()
{
    printf("\033[32;1m");  //ansi codes for green color and bold
    int n;
    printf("Enter the number of rows for the pattern: \n");
    scanf("%d", &n);
    for (int i = 1; i < n*2; i++)
    {
        if(i<n)
        {
            for(int k=n;k>i;--k)
            {
                printf("  ");
            }
            for(int j=1;j<=i;++j)
            {
                printf("* ");
            }
            printf("\n");
        }
        else if(i>n)
        {
            for(int k=1;k<=i-n;k++)
            {
                printf("  ");
            }
            for(int j=i-n;j<n;++j)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            for(int j=1;j<=i*2;++j)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}