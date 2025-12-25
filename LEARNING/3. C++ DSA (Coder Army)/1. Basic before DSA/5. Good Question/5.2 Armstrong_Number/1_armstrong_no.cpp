#include<iostream>
#include<math.h>
using namespace std;
int countDigit(int n){
    int count=0;
    while (n)
    {
        n/=10;
        count++;
    }
    return count;
}
int Armstrong(int n,int p){
    int ans=0,rem,num=n,pow;
    while (num)
    {
        rem=num%10;
        num/=10;
        ans+=powf(rem,p);
    }
    if (ans==n)
     return 1;
    else
        return 0;
}
int main(){
    int num=154;
    cout<<Armstrong(num,countDigit(num))<<endl;

    return 0;
}