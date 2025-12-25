#include<iostream>
using namespace std;
void selectionsort(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; i < size;j++)
        {
          if(arr[j]>arr[i]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
          }  
        }
    }
}