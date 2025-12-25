#include<iostream>
#include<cmath>
using namespace std;

int digitcount(int num){
    int count=0;
    while (num>0)
    {
        num=num/10;
        count++;
    }
    return count;
}
int power(int num){
    int n=num;
    int ans=0,powerans=0;
    while (num>0)
    {
        ans=num%10; //3 5 1
        num=num/10; //15 1 0
        powerans+=round(pow(ans,digitcount(n)));
    }
    return powerans;
}
void arm(int num){
    if(num==power(num)){
        cout<<"YES "<<num<<" is a Armstrong Number"<<endl;
    }
    else{
        cout<<"No "<<num<<" is NOT a Armstrong Number"<<endl;
    }
}
int main(){
    int num=153;
    // cout<<digitcount(num)<<endl;
    // cout<<power(num)<<endl;
    arm(num);

   return 0;
}