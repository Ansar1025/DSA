#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int value){
    int index=-1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==value)
        {
            index=i;
            break;
        }
    }
    return index;
}
int main(){
    int arr[]={10,20,99,0,88,383,90};
    int size=sizeof(arr)/sizeof(arr[0]);
    int s=linearSearch(arr,size,01);
    cout<<s<<endl;
    return 0;
}
