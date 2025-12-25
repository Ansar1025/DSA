#include<iostream>
#include<string>
using namespace std;
void printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void SelectionSort(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        int minindex=i;
        for (int j =i+1; j<size; j++)
        {
        if(arr[minindex]<arr[j]){
            minindex=j;
        }
        }
        int temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }
}
void inputarray(int srr[],int s){
    cout<<"Enter "<<s<<" Numbers : ";
    for (int i = 0; i < s; i++)
    {
        cin>>srr[i];
    }
}
int main(){
    int arr[100];
    int size;
    cout<<"Enter array size : ";
    cin>>size;
    inputarray(arr,size);
    printarray(arr,size);
    SelectionSort(arr,size);
    printarray(arr,size);
    return 0;
}