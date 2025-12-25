#include<iostream>
using namespace std;
int main(){
    int num=6;
    for (int i = 0; i < num; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout<<" ";
        }
        for (int j =i; j<num ; j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
    

    return 0;
}