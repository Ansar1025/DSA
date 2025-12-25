#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> ansar={1,2,4,5,7,3};
    int target=3;
    int notfound=1;
    for(int i:ansar){
        if(i==target){
            cout<<target<<" is found in this vector ! "<<endl;
            notfound=0;
            break;
        }
    }
    if(notfound){
        cout<<target<<" is not found."<<endl;
    }
    return 0;
}