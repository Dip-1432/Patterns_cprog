/*
A
A B
A B C
A B C D
*/
#include<stdio.h>
int main()
{
    printf("\033[32;1m");  //ansi codes for green color and bold
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        char ch='A';
        for(int j=1;j<=i;++j)
        {
            printf("%c ",ch++);
        }
    printf("\n");
    }
    return 0;
}