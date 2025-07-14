#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of row & column:");
    scanf("%d",&size);
    int a[size][size];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("Enter the value[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Array is:\n");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose Array is:\n");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}