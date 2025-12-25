#include<iostream>
using namespace std;
int main(){
    int num=5;
    int isPrime=1;
    if(num<2){
        isPrime=0;
    }
    else{
    int i=2;
    do{
        if(num%i==0&&num!=i){
            isPrime=0;
            break;
        }
        i++;
    }while(i<num/2);
}

    if (isPrime)
    {
        cout<<num<<" is a Prime No."<<endl;
    }
    else{
        cout<<num<<" is not a Prime No."<<endl;
    }
    
    
    return 0;
}