#include<iostream>
using namespace std;
int reverse(int x){
    int ans=0,rem;
    while (x!=0)
    {
        rem=x%10; //3 1
        x/=10;    //1 0
        if(ans>INT32_MAX/10)
            return 0;
        ans=ans*10+rem; 
    }
    return ans;
}
int isPallindrome(int x){
    if (x<0)
     return 0;
    else if(reverse(x)==x)
        return 1;
    else
        return 0;
}
int main(){
    int num=191;
    cout<<"Reverse : "<<reverse(num)<<endl;
    if (isPallindrome(num))
        cout<<"YES, it is a Pallindrome Number"<<endl;
    else
        cout<<"NO, it is a Pallindrome Number"<<endl;


    return 0;
}