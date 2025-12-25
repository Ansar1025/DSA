#include<iostream>
#include<string>
using namespace std;
void bubblesort(int arr[],int size);
void printarray(int arr[],int size);
void input(int arr[],int size);
int main()
{
    int arr[100];
    int size,x;
    cout<<"Enter size of array : ";
    cin>>size;
    input(arr,size);
    printarray(arr,size);
    bubblesort(arr,size);
    cout<<"After Soring : "<<endl;
    printarray(arr,size);

    return 0;
}
void input(int arr [],int size){
    cout<<"Enter "<<size<<" elements : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
}
void printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void bubblesort(int arr[],int size){
    for (int i = 0; i <size-1; i++)
    {
        for (int j =0; j <size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}