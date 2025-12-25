#include<iostream>
using namespace std;
int main(){
    int num=6;
    for (int i = 0; i < num; i++)
    {
        char ch='A';
        for (int i = 0; i < num; i++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    

    return 0;
}