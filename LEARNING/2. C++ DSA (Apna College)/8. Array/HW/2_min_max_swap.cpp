#include<iostream>
using namespace std;
void swap_min_max(int arr[],int size){
    int min=arr[0];
    int max=arr[0];
    int min_index=0,max_index=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max_index=i;
        }
        if(arr[i]<min){
            min_index=i;
        }
    }
    int temp=arr[max_index];
    arr[max_index]=arr[min_index];
    arr[min_index]=temp;
}
int main(){
    int arr[]={10,20,94,3,29,2,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Swap : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    swap_min_max(arr,size);

    cout<<"After Swap : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}