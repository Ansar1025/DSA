#include<iostream>
using namespace std;

int main(){
    int count=5;
     char ch='a';
    for (int i = 1; i <= count; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            cout<<char(ch+i-1)<<" ";
        }  
        cout<<endl;
    }
    
    return 0;
}