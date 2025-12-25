#include<iostream>
using namespace std;
int sum_of_digit(int n){
    int sum_of_digit=0;
    while(n>0){
        sum_of_digit=sum_of_digit+n%10;
        n=n/10;    
    }
    return sum_of_digit;
}
int main(){
    int num= 145;
    cout<<sum_of_digit(num);

    
    return 0;
}