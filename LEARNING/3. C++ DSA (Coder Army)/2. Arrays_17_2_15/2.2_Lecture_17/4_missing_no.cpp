#include<iostream>
using namespace std;
// int missingNumber(int arr[],int size){
//     int missing=0;
//     for (int i = 0; i < size; i++)
//     {
//         if ((arr[i+1]-arr[i])>1)  
//         {
//             missing=arr[i]+1;
//         }        
//     }
//     return missing;
// }
int missingNumber2(int arr[],int size){
    int sumN=(size+1)*((size+1)+1)/2,sumArr=0;
    // for (int i = 0; i < size+1; i++)
    // {
    //     sumN+=i+1;
    // }
    for (int i = 0; i < size; i++)
    {
        sumArr+=arr[i];
    }
    cout<<sumN<<endl;
    cout<<sumArr<<endl;
    return sumN-sumArr;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,14};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Missing No : "<<missingNumber2(arr,size)<<endl;
   
    return 0;
}