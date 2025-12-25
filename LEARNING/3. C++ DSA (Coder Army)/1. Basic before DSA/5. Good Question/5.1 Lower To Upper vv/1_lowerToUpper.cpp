#include<iostream>
using namespace std;
char convert(char name){
    name=name-'A'+'a';
    return name;
}
int main(){
    char name='p';
    // cin>>name;
    cout<<convert(name)<<endl;

    return 0;
};