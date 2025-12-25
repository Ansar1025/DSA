#include<stdio.h>
int main(){
    int arr[100];
    int n;
    printf("Enter no of elements : ");
    scanf("%d",&n);
    printf("Enter %d Element : \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("%d is Minimum Number \n",min);
    printf("%d is Maximum Number \n",max);
    

    return 0;
}