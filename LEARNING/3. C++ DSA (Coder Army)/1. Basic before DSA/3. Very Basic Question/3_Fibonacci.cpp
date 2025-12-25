#include<iostream>
using namespace std;
int main(){
    int num=8;
    int fib1=0;
    int fib2=1;
    int fib;
    if (num==1)
       {
        fib=fib1;
       }
    else if(num==2)
    {
        fib=fib2;
    }
    else
    {
       for (int i = 3; i <= num; i++)
        {
            fib=fib1+fib2;  //0+1  
            fib1=fib2;
            fib2=fib;      //1      
         }
    }    
    cout<<"The "<<num<<"th fibonacci number is : "<<fib<<endl;

    return 0;
}