#include<iostream>
using namespace std;
void bubblesort(int arr[],int size);
void printarray(int arr[],int size);
int main(){
    int arr[100];
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<"Enter "<<size<<" numbers : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Sorting : "<<endl;
    printarray(arr,size);
    bubblesort(arr,size);
    cout<<endl<<"After Sorting : "<<endl;
    printarray(arr,size);
    
    return 0;
}
void printarray(int arr[],int size){
    cout<<size<<" element are : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void bubblesort(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j <size-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
}

