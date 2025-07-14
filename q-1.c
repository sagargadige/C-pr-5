#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the value[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("Your Array is:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nNegative Values:");
    for(int i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n");
    return 0;
}