#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int count=15;
    for (int i = 0; i < count; i++)
    {
        if((i+1)%3==0){
        sum+=i+1;
        }
    }
    cout<<"sum is : "<<sum<<endl;
    
    
    return 0;
}