#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int count=50;
    for (int i = 1; i <= count; i++)
    {
        if(i%2!=0){
        sum+=i;
       }
    }
    cout<<"Sum of "<<count<<"th is : "<<sum<<endl;

    return 0;
}