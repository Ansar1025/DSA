#include<iostream>
using namespace std;
int sum_of_nth(int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=i+1;
    }
    return sum;
}
int main(){
    // int num=5;
    cout<<"Sum of nth : "<<sum_of_nth(5)<<endl;
    cout<<"Sum of nth : "<<sum_of_nth(10);
    
    return 0;
}