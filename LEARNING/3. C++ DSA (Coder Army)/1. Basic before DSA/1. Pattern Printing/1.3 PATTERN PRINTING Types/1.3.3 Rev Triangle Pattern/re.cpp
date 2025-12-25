#include<iostream>
using namespace std;
int main(){
    int num=35;
    int t=1;
    for (int i = num; i >= 1; i--)
    {
        for (int k = i; k <= num-1; k++)
        {
            cout<<"  ";
        }
        for (int l = 1; l <=i*2-1; l++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    
    return 0;
}