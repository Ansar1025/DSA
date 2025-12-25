#include<iostream>
using namespace std;

void rev(int arr[],int size)
      {
        for (int i = 0; i < size/2; i++){
        int temp=arr[i];  //1,2
        arr[i]=arr[size-i-1];  //0=4 ,1=867 
        arr[size-i-1]=temp;    //6=1 ,5=2
    }
}

int main(){
    int arr[]={1,2,3,9,867,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    rev(arr,size);
  
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }    
    
}