/*
* * * * * * * *
*             *
*             *
*             *
*             *
*             *
*             *
* * * * * * * *
*/
#include<stdio.h>
int main()
{
    printf("\033[32;1m");  //ansi codes for green color and bold
    int rows,cols;
    printf("Enter the number of rows and columns for the pattern: \n");
    scanf("%d %d",&rows,&cols);
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            if(j==1||j==cols||i==1||i==rows)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}