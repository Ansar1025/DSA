#include<iostream>
using namespace std;

void SelectionSort(int arr[], int size);
void printArray(int arr[], int size);

int main() {
    int arr[] = {10, 22, 5, 33, 43, 9, 7, 4, 3, 9, 100};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Before Sorting:" << endl;
    printArray(arr, size);

    SelectionSort(arr, size);

    cout << "After Sorting:" << endl;
    printArray(arr, size);

    return 0;
}

void SelectionSort(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        int minindex=i;
        for (int j = i+1; j< size-1;j++)
        {
          if(arr[j]<arr[minindex]){
            minindex=j;
          }  
        }
        int temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
