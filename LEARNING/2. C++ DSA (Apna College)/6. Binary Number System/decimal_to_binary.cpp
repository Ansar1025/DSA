#include<iostream>
using namespace std;
int decimal_to_binary(int decimal);
int main(){
    int decimal=50;

    int ans=decimal_to_binary(decimal);
    cout<<"Binary of "<<decimal<<" is : "<<ans<<endl;
    return 0;
}
int decimal_to_binary(int decimal){
    int ans=0;
    int power=1;
    while (decimal>0)
    {
        int rem=decimal%2;
        decimal=decimal/2;
        ans+=(power*rem);
        power*=10;
    }
return ans;
}
