#include<iostream>
using namespace std;
int main(){
    int count=5;
    int i;
    for (i = 1; i <= count; i++)
    {
        //space
        for (int j = 1; j <= count-i; j++)
        {
            cout<<"  ";
        }
        // 1[] 12[1] 123[21] 1234[321] 12345[4321]
        for (int n = 1; n <= i; n++)
        {
            cout<<n<<" ";
        }
        for (int n2 = i-1; n2 >=1 ; n2--)
        {
            cout<<n2<<" ";
        }
        // //space
        // for (int k = 1; k <= count-i; k++)
        // {
        //     cout<<" ";
        // }
    cout<<endl;
}

return 0;
}