#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vect(5,9);
    for(int i : vect){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<char>vectr={'a','b','c','d','e'};
    for(char i : vectr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}