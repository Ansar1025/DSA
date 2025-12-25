#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>vectr={'a','b','c','d','e'};

        // Size Function
    cout<<"Size of Vector"<<" is : "<<vectr.size()<<endl;

    for(char i : vectr){
        cout<<i<<" ";
    }


    cout<<endl;
    return 0;
}