#include<iostream>
using namespace std;
int main(){
    char ch='0';
   // cout<<"Enter a Character : ";
  //  cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<"Lower Class ! "<<endl;
    }
    else if(ch>='A'&&ch<='Z'){
        cout<<"Upper Class !"<<endl;
    }
    else{
        cout<<"Not upper or lower ";
    }

    return 0;
}