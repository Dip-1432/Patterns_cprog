/*
1 2 3 4
  1 2 3
    1 2
      1
*/
#include<stdio.h>
int main()
{
    printf("\033[32;1m");  //ansi codes for green color and bold
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for(int i=n;i>=1;--i)
    {
        for(int k=n;k>i;--k)
        {
            printf("  ");
        }
        for(int j=1;j<=i;++j)
        {
            printf("%d ",j);
        }
    printf("\n");
    }
    return 0;
}