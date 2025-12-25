#include<iostream>
using namespace std;
void reverseArray(int arr[],int size){
    
    for ( int i = 0; i < size/2; i++)
    {
            arr[i]=arr[i]^arr[size-i-1];       
            arr[size-i-1]=arr[i]^arr[size-i-1];  
             arr[i]=arr[i]^arr[size-i-1];       
    }
}
void reverse2(int arr[],int size){
    int start=0,end=size-1;
    while (start<end)
    {
        arr[start]=arr[start]^arr[end];
        arr[end]=arr[start]^arr[end];
        arr[start]=arr[start]^arr[end];
        start++,end--;
    }
}
void reverse3(int arr[],int size){
    int temp[size],i=size-1,j=0;
    while (i>=0)
    {
        temp[j]=arr[i];
        i--,j++;
    }
     for (int i = 0; i < size; i++)
    {
        cout<<temp[i]<<" ";
    }
}
int main(){
    int arr[]={10,2,432,1,31,42,97,88};
    int size=sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,size);
    // reverse2(arr,size);
    // reverse3(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}