#include<stdio.h>
int main()
{
    int a[100],i,n,j,temp;
    printf("Enter no.of elements in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
        if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
    printf("\nAfter bubble sorting: \n");
    for(j=0;j<n;j++)
    printf("\t %d",a[j]);
    return 0;
}
