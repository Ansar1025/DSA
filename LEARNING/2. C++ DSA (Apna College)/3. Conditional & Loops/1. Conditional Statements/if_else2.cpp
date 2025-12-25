#include<iostream>
using namespace std;
int main(){
    char ch=')';
    cout<<"Enter a Character : ";
    cin>>ch;
    if(ch>=97&&ch<=122){
        cout<<"Lower Class ! "<<endl;
    }
    else if(ch>=65&&ch<=90){
        cout<<"Upper Class !"<<endl;
    }
    else{
        cout<<"Not upper or lower "<<endl;
    }

    return 0;
}