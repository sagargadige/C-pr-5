#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the size of row:");
    scanf("%d",&row);
    printf("Enter the size of Column:");
    scanf("%d",&col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter the value[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Your 2D array is:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int max;
    max=a[0][0];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
    }
    printf("The Largest No is:%d",max);
    return 0;
}