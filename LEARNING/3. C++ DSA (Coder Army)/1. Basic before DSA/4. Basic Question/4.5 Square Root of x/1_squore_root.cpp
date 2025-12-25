#include<iostream>
using namespace std;
int squareRoot(int num){
    int i=1;
    while (i*i<=num)
    {
        if (i*i==num)
            return i;
        i++;
    }    
    return i-1;
}
int main(){
    int x=35;
    cout<<squareRoot(x);

    return 0;
}