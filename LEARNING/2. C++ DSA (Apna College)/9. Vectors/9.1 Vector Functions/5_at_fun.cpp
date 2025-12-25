#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>vectr;
     vectr.push_back('a');
    vectr.push_back('b');
    vectr.push_back('c');

    cout<<"Size : "<<vectr.size()<<endl;
    cout<<"Capacity : "<<vectr.capacity()<<endl;

    return 0;
}