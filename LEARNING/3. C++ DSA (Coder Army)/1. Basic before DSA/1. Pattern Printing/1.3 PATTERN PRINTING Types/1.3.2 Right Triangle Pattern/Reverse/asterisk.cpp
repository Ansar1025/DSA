#include<iostream>
using namespace std;

int main(){
    int count=5;
    for (int i = 1; i <= count; i++)
    {
        for (int j =count; j >= i; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}