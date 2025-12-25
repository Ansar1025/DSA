#include<iostream>
using namespace std;

int main(){
    int num=1101;
    int n=num;
    int rem,ans=0;
    int i=1;
    while (num>0)
    {
        rem=num%10;        //1101%10=1
        num=num/10;
        ans=ans+rem*i;     //0+1*1=1
        i*=2;               //i=2
    }
    cout<<n<<" Binary no is -> "<<ans<<endl;
    
    return 0;
}