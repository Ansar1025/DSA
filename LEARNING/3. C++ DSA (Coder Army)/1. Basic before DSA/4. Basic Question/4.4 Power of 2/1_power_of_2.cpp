#include<iostream>
using namespace std;
int isPowerOf2(int num){
    if (num<1)
    {
        return 0;
    }
    
    while (num!=1)
    {
        if (num%2==1)
        {
            return 0;
        }
        num/=2;
    }
    return 1;
}
int main(){
    int num=128;
    cout<<isPowerOf2(num);


    return 0;
}