#include<iostream>
using namespace std;
int main(){
    int num=10;
    int arr[1000];
    arr[0]=0;
    arr[1]=1;

    for (int i = 2; i <= num-1; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<arr[num-1]<<endl;

    return 0;
}