#include<stdio.h>
int main()
{
    int n;
    printf("Enter No/Size/Capacity of Element : ");
    scanf("%d",n);
    int i,arr[n];
    int key;
    int size=sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<size;i++)
    {
        printf("Enter Elements : ");
        scanf("%d",&arr[i]);
    } 

    for(i=0;i<size;i++)
    {
        if(arr[i]==key)
        break;
    }
    if(i<size)
    {
        printf("%d Element found at Index %d",arr[i],i);
    }
    else
    {
        printf("%d Element NOT found !!",key);
    }
    return 0;
}