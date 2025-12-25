#include<iostream>
using namespace std;
int main(){
    int arr[]={9,7,3,1,6};
    int count=sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < count-1; i++)
    {
        int index=i;
        for (int j = i+1; j < count; j++)
     {
        if (arr[j]<arr[index])
            index=j;
     }
        int temp=arr[index];
        arr[index]=arr[i];
        arr[i]=temp;           
    }
    

    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}