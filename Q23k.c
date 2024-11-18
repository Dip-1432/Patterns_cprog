/*
A B C D E F G H
A B C     F G H
A B         G H
A             H
A B         G H
A B C     F G H
A B C D E F G H
*/
#include<stdio.h>
int main()
{
    printf("\033[32;1m");  //ansi codes for green color and bold
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    char ch;
    for(int i=0;i<=n*2-2;++i)
    {
        int limit=(i<n)?(n-i):(i-(n-2));
        //FOR RIGHT TRIANGLE
        ch='A';
        for(int j=1;j<=limit;++j)
        {
            printf("%c ",ch++);
        }
        //FOR SPACES
        for(int k=(n-limit)*2;k>=1;--k)
        {
            printf("  ");
        }
        //FOR LEFT TRIANGLE
        ch+=(n-limit)*2;
        for(int j=1;j<=limit;++j)
        {
            printf("%c ",ch++);
        }
        printf("\n");
    }
    return 0;
}