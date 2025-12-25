#include<iostream>
using namespace std;
int secondLargest(int arr[],int size){
    int max=arr[0];
    int max2=arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max2&&arr[i]!=max)
        {
            max2=arr[i];
        }
    }
    return max2;
}
int main(){
    int arr[]={10,20,30,39,40};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    
    // cout<<"Max No is : "<<max<<endl;
    cout<<"Max2 No is : "<<secondLargest(arr,size)<<endl;    
   
    
    return 0;
}