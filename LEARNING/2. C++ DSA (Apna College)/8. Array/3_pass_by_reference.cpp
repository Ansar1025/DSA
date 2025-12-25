#include<iostream>
using namespace std;
void changeArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        arr[i]=2*arr[i];
    }
}
void printarr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Call by refernce : "<<endl;
    printarr(arr,size);
    
    changeArr(arr,size);
    cout<<"After Call by reference : "<<endl;
    printarr(arr,size);

    return 0;
}