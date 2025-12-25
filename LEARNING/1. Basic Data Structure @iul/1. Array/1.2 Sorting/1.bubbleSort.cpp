#include<iostream>
#include<string>
void bubblesort(int arr[],int size);
void printarray(int arr[],int size);
using namespace std;
int main(){
    int arr[]={10,22,5,33,43,9,7,4,3,9,100};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Sorting : "<<endl;
    printarray(arr,size);
    bubblesort(arr,size);
    cout<<"After Sorting : "<<endl;
    printarray(arr,size);
    return 0;
}
void bubblesort(int arr[],int size){
    for (int j = 0; j < size-1; j++)
    {
        for (int i = 0; i < size-j-1; i++)
        {
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
void printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}