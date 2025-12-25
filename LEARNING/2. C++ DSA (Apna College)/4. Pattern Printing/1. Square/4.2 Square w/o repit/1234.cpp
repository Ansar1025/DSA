#include<iostream>
using namespace std;
int main(){
    int num=3;
    int k=0;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout<<k+1<<" ";
            k++;
        }
        cout<<endl;
    }
    

    return 0;
}