#include<iostream>
#include<vector>
using namespace std;
void reverse()
int main(){
    vector<int> ansar={1,2,4,5,7,3};
    int end=ansar.size()-1;
    int start=0;
        while(start<end){
            int temp=ansar[start];
            ansar[start]=ansar[end];
            ansar[end]=temp;
            start++;
            end--;
        }

    for(int i:ansar){
        cout<<i<<" ";
    }
    return 0;
}