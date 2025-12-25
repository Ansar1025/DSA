#include<iostream>
#include<string>
using namespace std;
void printarray(int arr[],int size);
void inputarray(int arr[],int size);
void insertionsort(int arr[],int size);
int main(){
    int arr[100];
    int size;
    cout<<"Enter size of Array : ";
    cin>>size;
    inputarray(arr,size);
    printarray(arr,size);
    insertionsort(arr,size);
    printarray(arr,size);

    return 0;
}
void printarray(int arr[],int size){
    cout<<"Array Elements : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void inputarray(int arr[],int size){
    cout<<"Enter "<<size<<" Element : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}
void insertionsort(int arr[],int size){
    for (int i = 1; i < size; i++) {
        int insertIndex = i;
        int currentValue = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > currentValue) {
            arr[j + 1] = arr[j];
            insertIndex = j;
            j--;
        }
        arr[insertIndex] = currentValue;
    }
}