#include<iostream>
using namespace std;
int facts(int n){
    int fact=1;
    for (int i = 0; i < n; i++)
    {
        fact*=(i+1);
    }
    return fact;
}
int nCr(int n,int r){
    int fact_n=facts(n);
    int fact_r=facts(r);
    int fact_nr=facts(n-r);
    return fact_n / (fact_r * fact_nr); 
}
int main(){
    cout<<"nCr : "<<nCr(8,2);
       
    return 0;
}