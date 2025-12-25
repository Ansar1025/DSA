#include<iostream>
using namespace std;

int main(){
    int count=5;
    for (int i = 1; i <= count; i++)
    {
        for (int k = 1; k <= count-i; k++)
        {
            cout<<" ";            
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}