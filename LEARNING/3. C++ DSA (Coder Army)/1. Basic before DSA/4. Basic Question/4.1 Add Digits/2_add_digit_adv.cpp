#include<iostream>
using namespace std;
int main(){
    int num=93;
    int n=num;
    while (num>9)
    {
    int rem,ans=0;
    while (num>0)
    {
        rem=num%10;  //3 1
        num=num/10;  //1 0
        ans=ans+rem; //3+1
    }
    num=ans;
    }
    cout<<"Sum of Digit "<<n<<" is : "<<num<<endl;    
}