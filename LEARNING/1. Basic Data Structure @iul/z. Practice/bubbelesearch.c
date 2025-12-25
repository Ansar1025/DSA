#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,54,66,76,754,9423,};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x,i;
    for (i = 0; i < size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\nSearching : ");
    scanf("%d",&x);
    int notfound=1;
    int front=0;
    int rear=size-1;
    int mid;
    while (front<=rear)
    {
        mid=(front+rear)/2;
        if(arr[mid]==x){
            notfound=0;
            printf("%d found at index %d\n",x,mid);
            break;
        }
        if(arr[mid]<x){
            front=mid+1;
        }
        else{
            rear=mid-1;
        }
    }
    if(notfound){
        printf("%d not found !!\n",x);
    }
    
    return 0;
}