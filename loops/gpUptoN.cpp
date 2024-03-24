//Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms. n //
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter any number :";
    cin>>n;
    for(i=1;i<n;i=i*2)
    cout<<i<<'\n';
    return 0;
}