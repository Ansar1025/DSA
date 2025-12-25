#include<iostream>
using namespace std;
int main(){
    int count=4;
    char a='A';
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = count; k > i; k--)
        {
            cout<<char(i+65);
        }
        cout<<endl;
    }
    

    return 0;
}