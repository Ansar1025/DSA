#include<iostream>
using namespace std;
int main(){
    int count=5;
    int i,j;
    for (i = count; i >= 1; i--)
    {
        for (j = 1; j <= ((count*2-1)-(2*i-1))/2 ; j++)
        {
            cout<<"  ";
        }
        for (j =i*2-1;j>0; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}