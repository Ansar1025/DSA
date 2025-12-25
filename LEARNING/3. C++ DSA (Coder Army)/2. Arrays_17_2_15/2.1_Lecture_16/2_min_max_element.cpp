#include<iostream>
using namespace std;
int min(int n[],int size){
    int min=n[0];
    int i=1;
    while (i<size)
    {
        if (n[i]<min)
        {
            min=n[i];
        }
    i++;
    }
    return min;
}
int max(int n[],int size){
    int max=n[0];
    int i=1;
    while (i<size)
    {
        if (n[i]>max)
        {
            max=n[i];
        }
    i++;
    }
    return max;
}
int main(){
    int arr[]={10,202,30,3,40};
    int size=sizeof(arr)/sizeof(arr[0]);
    // cout<<size<<endl;
    cout<<"Min : "<<min(arr,size)<<endl;
    cout<<"Max : "<<max(arr,size);

    return 0;
}