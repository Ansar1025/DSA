#include<iostream>
using namespace std;
int main(){
    int num=32983833193;
    int n=num;
    int ans=0,rem;
    int INT_MAX,INT_MIN;
    cout<<INT_MAX;
    while (num!=0)
    {
        rem=num%10;  // 4 3 2
        num/=10;     // 23 3 0
        if(ans>INT_MAX/10 || ans<INT_MIN/10 ){
            return 0;
        }
        ans=ans*10+rem;
    }
    cout<<"Reverse of "<<" is : "<<ans<<endl;
    // int INT_MAX;
    // cout<<INT_MAX<<endl;
    
    return 0;
}