#include<iostream>
using namespace std;

int main(){
    int count=5;
    for (int i = 1; i <= count; i++)
    {
        for (int j = i; j>=1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}