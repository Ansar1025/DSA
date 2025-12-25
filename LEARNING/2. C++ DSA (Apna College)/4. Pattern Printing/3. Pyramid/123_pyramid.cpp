#include<iostream>
using namespace std;

int main(){
    int num=8;
    for (int i = 0; i < num; i++)
    {
        //spaces
        for (int j = 0; j <num-i-1; j++)
        {
            cout<<" ";
        }
        //num 1
        for (int j = 1; j <= i+1 ; j++)
        {
            cout<<j;
        }
        //num 2
        for (int j = i; j >0 ; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    

    return 0;
}