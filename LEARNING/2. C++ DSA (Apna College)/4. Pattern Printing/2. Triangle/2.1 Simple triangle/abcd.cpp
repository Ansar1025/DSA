#include<iostream>
using namespace std;
int main(){
    char ch='A';
    int num=6;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
    

    return 0;
}