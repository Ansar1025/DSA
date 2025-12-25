#include<iostream>
using namespace std;
int Complement(int x){
    int n=x;
    int ans=0,rem,mul=1;
    while(x)
    {
        rem=x%2;  //0 0 1
        x/=2;    //2 1 0
        rem=rem^1;
        ans=ans+rem*mul;  //101
        mul=mul*2;
    }
    return ans;
}
int main(){
    int num=13;
    cout<<Complement(num)<<endl;

    return 0;
}