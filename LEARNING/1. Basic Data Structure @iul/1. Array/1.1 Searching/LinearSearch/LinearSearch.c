#include<stdio.h>
int main()
{
    int i,x,n;
    int arr[100];
    printf("Enter No of Element you want to Enter  :");
    scanf("%d",&n);
    printf("Enter Elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Element you want to Search : ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        break;
    }
    if(i<n)
    {
        printf("%d Found at Index %d",arr[i],i);
    }
    else
    {
        printf("%d Not Found",x);
    }
 return 0;
}