#include<iostream>
using namespace std;

void rev(int arr[],int size){
      int start=0,end=size-1;
    while (start<end)
    {
        int temp= arr[start]; //SWAP
        arr[start]=arr[end];  //swap(arr[start],arr[end]);
        arr[end]=temp;

        start++;
        end--;
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