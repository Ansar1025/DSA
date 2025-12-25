#include<iostream>
using namespace std;
int main(){
    int n=8;
    int a=0,b=1,c;
     
    if(n==0){
        cout<<0;
        return 0;
    }
    for (int i = 2; i <= n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<b;

    return 0;
}