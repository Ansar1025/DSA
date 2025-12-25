#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>vectr;
    cout<<"Size of Vector"<<" is : "<<vectr.size()<<endl;
    // push_back fun
    vectr.push_back('a');
    vectr.push_back('b');
    vectr.push_back('c');
    cout<<"Size of Vector after "<<" is : "<<vectr.size()<<endl;

    for(char i : vectr){
        cout<<i<<" ";
    }


    cout<<endl;
    return 0;
}