#include<iostream>
using namespace std;
void printarray(int arr[],int size);
void inputarray(int arr[],int size);
void binarysearch(int arr[],int size,int x);
int main(){
    int arr[100];
    int size,x;
    cout<<"Size of array : ";
    cin>>size;
    inputarray(arr,size);
    cout<<"Enter element to search : ";
    cin>>x;
    binarysearch(arr,size,x);
  //  printarray(arr,size);



    return 0;
}
void inputarray(int arr[],int size){
    cout<<"Enter "<<size<<" elements : ";
    for (int i = 0; i < size ;i++)
    {
        cin>>arr[i];
    }
}
void printarray(int arr[],int size){
    cout<<size<<" element are : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void binarysearch(int arr[],int size,int x){
    int front=0;
    int rear=size;
    int mid;
    int notfound=1;
    while (front<rear)
    {
        mid=(front+rear)/2;
        if (arr[mid]==x)
        {
            notfound=0;
            cout<<x<<" found at index "<<mid<<endl;
            break;
        }
        else if (arr[mid]<x)
        {
            rear=mid-1;
        }
        else{
            front=mid+1;
        }
    }
    if(notfound){
            cout<<x<<" not found !"<<endl;
        }
}