#include<iostream>
using namespace std;
int LeapYear(int num){
    return (num%400==0)||(num%4==0&&num%100!=0);
}
int main(){
    int year=2100;
    cout<<"Leap Year : "<<LeapYear(year);

    return 0;
}