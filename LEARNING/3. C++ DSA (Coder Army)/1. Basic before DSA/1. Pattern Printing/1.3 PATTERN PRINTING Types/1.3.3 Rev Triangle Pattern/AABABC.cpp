#include<iostream>
using namespace std;

int main(){
    int count=5;

    for (int i = 1; i <= count; i++)
    {
        char ch='A';
        for (int j = 1; j <= count-i; j++)
        {
            cout<<"  ";
        }
        for (int k =1; k <= i; k++,ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}