#include<iostream>
using namespace std;

int main(){
    int year=1924;
    if(year%400==0){
        cout<<"Leap Year"<<endl;
    }
    else if(year%4==0&&year%100!=0){
        cout<<"Leap Year"<<endl;
    }
    else{
        cout<<"Not a Leap Year"<<endl;
    }
    return 0;
}