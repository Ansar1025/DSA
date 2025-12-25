#include<iostream>
using namespace std;
int main(){
    int star=6;
    for (int i = 0; i < star; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
 
    return 0;
}