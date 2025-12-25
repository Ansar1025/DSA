#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int num;
    cout<<"Enter no element : ";
    cin>>num;
    cout<<"Enter "<<num<<" Numbers : ";
    for (int i = 1; i < num; i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for (int i = 1; i < num; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Maximum no is : "<<max<<endl;
    cout<<"Minimum no is : "<<min<<endl;
    
   return 0; 
}