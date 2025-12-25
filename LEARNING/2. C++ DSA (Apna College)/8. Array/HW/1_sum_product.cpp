#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
   return sum; 
}
int product(int arr[],int size){
    int product=1;
    for (int i = 0; i < size; i++)
    {
        product*=arr[i];
    }
    return product;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Sum of Array     : "<<sum(arr,size)<<endl;
    cout<<"Product of Array : "<<product(arr,size)<<endl;

    return 0;
}