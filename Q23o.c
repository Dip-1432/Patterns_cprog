/*
*             *
* *         * *
* * *     * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *
*/
#include<stdio.h>
int main()
{
    printf("\033[32;1m");  //ansi codes for green color and bold
    int n;
    printf("Enter the number of rows: \n");
    scanf("%d", &n);
    for(int i=1;i<=n;++i)
    {
        for (int j=1;j<=i;++j)
        {
            printf("* ");
        }
        for(int k=n;k>i;--k)
        {
            printf("  ");
        }
        for(int k=n;k>i;--k)
        {
            printf("  ");
        }
        for (int j=1;j<=i;++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i=n;i>1;--i)
    {
        for (int j=1;j<i;++j)
        {
            printf("* ");
        }
        for(int k=i;k<=n;++k)
        {
            printf("  ");
        }
        for(int k=i;k<=n;++k)
        {
            printf("  ");
        }
        for (int j=1;j<i;++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}