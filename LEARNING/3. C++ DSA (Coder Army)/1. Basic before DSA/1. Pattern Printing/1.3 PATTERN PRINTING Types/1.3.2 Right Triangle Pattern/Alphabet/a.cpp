#include<iostream>
using namespace std;
int main()
{
    int num=5;
    for (int i = 1; i <= 5; i++)
    {
        int count=5;
        for (int j=1; j <= i; j++,count--)
        {
            cout<<count<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
