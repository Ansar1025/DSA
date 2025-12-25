#include<iostream>
using namespace std;

int main(){
    int num=13;
    int rem,ans=0;
    int i=1;
    while (num>0)
    {
        rem=num%2; // 13%2=1
        num=num/2; // 13/2=6
        ans+=rem*i;
        // i*10;
        i*=10;
    }
    cout<<ans<<endl;
    
    return 0;
}

