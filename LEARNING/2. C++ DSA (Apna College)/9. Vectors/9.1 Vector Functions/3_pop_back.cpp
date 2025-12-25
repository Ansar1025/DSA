#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>vectr;
    cout<<"Size of Vector before"<<" is : "<<vectr.size()<<endl;
    vectr.push_back('a');
    vectr.push_back('b');
    vectr.push_back('c');
    cout<<"Size of Vector after "<<" is : "<<vectr.size()<<endl;

    for(char i : vectr){
        cout<<i<<" ";
    }
    cout<<endl;

    //POP_BACK
    vectr.pop_back();
    cout<<"Size of Vector after POP "<<" is : "<<vectr.size()<<endl;
     for(char i : vectr){
        cout<<i<<" ";
    }

    cout<<endl;
    return 0;
}