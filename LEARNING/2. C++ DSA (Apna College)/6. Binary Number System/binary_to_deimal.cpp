#include<iostream>
using namespace std; //101
int binary_to_decimal(int binary){
    int ans=0;
    int power=1;
    while (binary>0)
    {
        int last=binary%10;
        ans+=last*power;
        binary=binary/10;
        power*=2;
    }
    return ans;
}
int main(){
    int b=1010;
    cout<<b<<" in decimal is : "<<binary_to_decimal(b)<<endl;
    
    return 0;
}