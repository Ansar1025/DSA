#include<iostream>
using namespace std;
int main(){
    int n=19;
    // cout<<"Enter the Number of Terms : ";
    // cin>>n;
    int f1=0;
    int f2=1;
    int next;
    for (int i = 0; i < n; i++)
    {
        if (i==f1)
        {
            next=0;
        }
        else if(i==f2){
            next=1;
        }
        else{
            next=f1+f2;
            f1=f2;
            f2=next;
        }
        cout<<next<<" ";
    }
    
    
    return 0;
}