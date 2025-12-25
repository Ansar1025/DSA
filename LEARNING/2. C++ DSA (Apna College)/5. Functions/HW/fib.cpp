#include<iostream>
using namespace std;
int main(){
    int num=5;
    int f1=0;
    int f2=1;
    int f3;
    for (int i = 0; i < num; i++)
    {
        if (i==f1)
        {
            f3=0;
        }
        else if(i==f2){
            f3=1;
        }
        else{
            
            f3=f1+f2;
            f1=f2;
            f2=f3;
        }
        cout<<f3<<" ";
    }

    return 0;
}