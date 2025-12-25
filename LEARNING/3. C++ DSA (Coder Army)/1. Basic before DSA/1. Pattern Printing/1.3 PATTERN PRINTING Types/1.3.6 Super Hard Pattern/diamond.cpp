#include<iostream>
using namespace std;
int main(){
    int count=5,i,j;
    for (int i = 1; i <= count; i++)
    {
        for ( j = 1; j <=(count*2)-(i*2); j++)
        {
            cout<<" ";
        }
        
        for ( j = 1; j <= i; j++)
        {
            cout<<"*   ";
        }
          cout<<endl;     
    }
    for ( i = 1; i <= count; i++)
    {
         for ( j = 1; j <= i*2-2; j++)
        {
            cout<<" ";
        }
       
        for ( j = count-i+1; j >=1; j--)
        {
            cout<<"*   ";
        }
        cout<<endl;
    }
    
    
    
    return 0;
}