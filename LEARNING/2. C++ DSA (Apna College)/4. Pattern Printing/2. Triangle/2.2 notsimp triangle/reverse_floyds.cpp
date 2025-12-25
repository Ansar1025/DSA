#include<iostream>
using namespace std;
int main(){
    int num=4;
    
    for (int i = 0; i < num; i++)
    {
        // char ch='A';
        for (char ch=65; ch < 66+num-i; ch++)
        {
            cout<<ch; 
        }
        
        cout<<endl;
    }
    
    return 0;
}
//OUTPUT
// NUM=5
/*
A
BA
CBA
DCBA
EDCBA
*/