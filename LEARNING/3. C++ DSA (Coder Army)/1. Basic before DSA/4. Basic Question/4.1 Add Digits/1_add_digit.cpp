#include<iostream>
using namespace std;

int main(){
    int num=11193;
    int n=num;
    int rem,quot,ans=0;
    while (num>0)
    {
        rem=num%10;    //7 2
        num=num/10;    //2 0
        ans+=rem;      //0+7+2
    }
    cout<<"Sum of digit "<<n<<": "<<ans<<endl;
    return 0;
}