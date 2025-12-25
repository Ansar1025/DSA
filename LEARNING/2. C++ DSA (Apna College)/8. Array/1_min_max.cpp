#include<iostream>
using namespace std;
int main(){
    int marks[5]={55,99,44,33,60};
    int min=marks[0];
    int max=marks[0];
    int size=sizeof(marks)/sizeof(marks[0]);
    for (int i = 0; i < size; i++)
    {
        if (marks[i]>max)
        {
            max=marks[i];
        }
        if (marks[i]<min)
        {
            min=marks[i];
        }
    }
    cout<<"Minimum marks is : "<<min<<endl;
    cout<<"Maximum marks is : "<<max<<endl;
    
    return 0;
}