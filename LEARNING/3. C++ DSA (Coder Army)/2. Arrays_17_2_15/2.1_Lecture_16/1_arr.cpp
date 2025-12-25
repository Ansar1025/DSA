#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<"Enter "<<size<<" elements : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<size<<" element are : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}