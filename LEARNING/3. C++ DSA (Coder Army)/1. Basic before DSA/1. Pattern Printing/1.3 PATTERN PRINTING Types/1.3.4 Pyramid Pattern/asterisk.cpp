#include<iostream>
using namespace std;

int main(){
    int count=5;
    for (int i = 1; i <= count; i++)
    {
        for (int j = count-i; j >= 1; j--)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i+i-1; k++)
        {
            cout<<"*";
        }
        for (int l = count-1; l >= 1 ; l--)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}