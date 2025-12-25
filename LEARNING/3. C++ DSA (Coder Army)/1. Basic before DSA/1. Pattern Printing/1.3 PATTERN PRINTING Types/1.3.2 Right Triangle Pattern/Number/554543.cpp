#include<iostream>
using namespace std;

int main(){
    int count=5;
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<count-(j-1)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}