#include<iostream>
using namespace std;

int main(){
    int count=4,i,j;
    for ( i = 1; i <= count; i++)
    {
        for ( j = 1; j <=i ; j++)
        {
            cout<<"* ";
        }
        for ( j = 1; j <= (count*2)-(i*2); j++)
        {
            cout<<"  ";
        }
        for ( j = 1; j <=i ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for ( i = 1; i <= count-1; i++)
    {
        for ( j = count-i; j >= 1; j--)
        {
            cout<<"* ";
        }
        for ( j = 1; j <= (count*i)-(i*2) ; j++)
        {
            cout<<"  ";
        }
         for ( j = count-i; j >= 1; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    
    return 0;
}