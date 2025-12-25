#include<iostream>
using namespace std;

char upper(char num){
    if (num>='a'&&num<='z')
    {    num=num-32;
        return num;
    }
        else
        return num;
    
}
char lower(char num){
    if (num>='A'&&num<='Z')
    {    num=num+32;
        return num;
    }
        else
        return num;
    
}
int main(){
    char data='R';
    // cout<<Upper(data);
    // cout<<Lower(data);
    // cout<<upper('X');
    cout<<lower('a');

    // cout<<(int)'z'<<endl;
    return 0;
}