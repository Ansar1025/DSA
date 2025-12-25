#include<iostream>
using namespace std;

int main(){
    int count=4;
    for (int i = 0; i < count; i++)
    {
        for (int j = i+1; j > 0; j--)
        {
            cout<<char(j+64);
        }
        cout<<endl;
    }
    
    return 0;
}