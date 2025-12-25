#include<iostream>
using namespace std;
int main(){
    int num=0;
    int fact=1;
    for (int i = 0; i < num; i++)
    {
        fact*=i+1;
    }
    cout<<"Factorial of "<<num<<" is : "<<fact<<endl;
    
    
    return 0;
}