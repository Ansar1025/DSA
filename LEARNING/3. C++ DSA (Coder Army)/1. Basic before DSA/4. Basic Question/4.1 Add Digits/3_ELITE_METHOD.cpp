#include<iostream>
using namespace std;
 int addDigits1(int num) {
        if (num == 0) return 0;
        return 1 + (num - 1) % 9;
    }
int addDigits2(int num) {
        if(num == 0 ) return 0;
        if(num%9==0) return 9;
        
        return num%9;
    }
int main(){
    int num=199;

    cout<<addDigits1(num)<<endl;
    cout<<addDigits2(num)<<endl;
    return 0;
}