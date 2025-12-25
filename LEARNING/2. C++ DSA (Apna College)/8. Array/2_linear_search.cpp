#include<iostream>
using namespace std;
int linear_search(int arr[],int size,int target){
     for (int i = 0; i < size; i++)
    {
        if(arr[i]==target)
        {
          return i;  
        }
    }
    return -1;
}
int main(){
    int arr[]={10,20,34,0,42,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=20;

    cout<<linear_search(arr,size,target);
   
    
}