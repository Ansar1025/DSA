#include<iostream>
using namespace std;
int isPrime(int num){
    int Prime=1;
    if(num<2){
        Prime=0;
    }
    else{
        for (int i = 2; i < num && i!=num; i++)
        {
            if (num%i==0)
            {
                Prime=0;
                break;
            }
        }
    }
    if (Prime)
    {
        cout<<num <<" is a Prime Number."<<endl;
    }
    else{
        cout<<num<<" is not a Prime Number. "<<endl;
    }
}
int main(){
    isPrime(4);
    
    return 0;
}