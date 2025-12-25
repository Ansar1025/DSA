#include<iostream>
using namespace std;
int isPrime(int a){
    int isPrime=1;
    if (a<2)
    {
        isPrime=0;
    }
    else{
        for (int i = 2; i <= a/2; i++)
        {
            if(a%i==0){
                isPrime=0;
                break;
            }
        }
    }
    if(isPrime){
    return 1;
    }
    else{
    return 0;  
    } 
}
int main(){
    int num=5;
    if(isPrime(num)){
        cout<<num<<" is Prime Number"<<endl;
    }
    else{
        cout<<num<<" is not a Prime Number."<<endl;
    }

    return 0;
}