#include<stdio.h>
int main(){
    int arr[]={103,420,2,242,4,56,65,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x,i;
    for (i = 0; i < size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\nSearching : ");
    scanf("%d",&x);
    int found=0;
    for (i = 0; i < size; i++)
    {
        if (arr[i]==x)
        {
            found=1;
            break;
        }
    }
    if(found){
        printf("%d found at index : %d\n",x,i);
    }
    else{
        printf("%d not found\n",x);
    }
    return 0;
}