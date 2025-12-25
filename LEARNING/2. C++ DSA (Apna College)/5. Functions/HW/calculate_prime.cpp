#include<iostream>
using namespace std;
int isPrime(int num){
    if(num<2){
        return 0;    
    }
    else{
        for (int i = 2; i < num && i!=num; i++)
        {
            if (num%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
  
}
void Print_Prime(int num){
    for (int i = 2; i < num; i++)
    {
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    
}
int main(){
    Print_Prime(10);

    
    return 0;
}