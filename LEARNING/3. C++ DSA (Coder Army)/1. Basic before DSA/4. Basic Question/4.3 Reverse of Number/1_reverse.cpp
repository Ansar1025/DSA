#include<iostream>
using namespace std;
int main(){
    int num=33193;
    int n=num;
    int ans=0,rem;
    while (num!=0)
    {
        rem=num%10;  // 4 3 2
        num/=10;     // 23 3 0
        ans=ans*10+rem;
    }
    cout<<"Reverse of "<<" is : "<<ans<<endl;
    
    return 0;
}