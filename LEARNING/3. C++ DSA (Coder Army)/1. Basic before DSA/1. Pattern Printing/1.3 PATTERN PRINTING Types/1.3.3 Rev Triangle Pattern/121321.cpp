#include<iostream>
using namespace std;
int main()
{
    int count=5;
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count-i; j++)
        {
            cout<<"  ";
        }
            int num=1;
            for (int k = i; k >= 1; k--)
            {
                cout<<k<<" ";
            }
        cout<<endl;
    }
    
    return 0;
}