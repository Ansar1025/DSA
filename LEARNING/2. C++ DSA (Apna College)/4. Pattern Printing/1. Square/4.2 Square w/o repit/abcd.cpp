#include<iostream>
using namespace std;
int main(){
    int num=4;
    char ch='A';
    for (int i = 0; i < num; i++)
    {
        for (int i = 0; i < num; i++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    

    return 0;
}