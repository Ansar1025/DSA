#include<iostream>
using namespace std;

int main(){
    int count=5,i,j,k,l;
    for ( i = count; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
           cout<<"* ";
        }
        for ( j = 1; j <= (count*2)-(2*i); j++)
        {
            cout<<"  ";
        }
        for (j = 1; j <= i; j++)
        {
           cout<<"* ";
        }
        cout<<endl;
    }


    for ( k = 1; k <= count; k++)
    {
    
        for ( l = 1; l <= k; l++)
        {
            cout<<"* ";
        }
        for ( l = 1; l <= count*2-k*2; l++)
        {
            cout<<"  ";
        }
         for ( l = 1; l <= k; l++)
        {
            cout<<"* ";
        }
        cout<<endl;
    
    }
    
    return 0;
}