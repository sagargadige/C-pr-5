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
    int rno,cno,sum=0;
    do{
        printf("Enter the Valid No(0 to %d):",row-1);
        scanf("%d",&rno);
        if(rno<0 || rno>=row)
        {
            printf("Please Enter valid no again:");
        }
    }while(rno<0 || rno>=row);
    printf("\nElement of Row %d:",rno);
    for(int j=0;j<col;j++)
    {
        printf("%d ",a[rno][j]);
        sum+=a[rno][j];
    }
    printf("\nSum of %d is:%d",rno,sum);
    printf("Column sum");
    do{
        printf("Enter the Valid No(0 to %d):",col-1);
        scanf("%d",&cno);
        if(cno<0 || cno>=col)
        {
            printf("Please Enter valid no again:");
        }
    }while(cno<0 || cno>=col);
    printf("\nElement of col %d:",cno);
    for(int i=0;i<row;i++)
    {
        printf("%d ",a[i][cno]);
        sum+=a[i][cno];
    }
    printf("\nSum of %d is:%d",cno,sum);
    return 0;
}