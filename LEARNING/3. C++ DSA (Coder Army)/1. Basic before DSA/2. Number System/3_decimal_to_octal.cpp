#include<iostream>
using namespace std;
int main(){
    int num=13;
    int n=num;
    int ans=0,mul=1,rem;
    while (num>0)
    {
        rem=num%8; // 5  1 
        num/=8;  //1 0
        ans+=rem*mul; // +
        cout<<mul<<" ";
        mul*=10;
    }
    
    cout<<"Decimal of "<<n<<" is : "<<ans<<endl;
    return 0;
}