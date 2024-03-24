//Display this GP - 3,12,48,.. upto ‘n’ terms.//
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter any number :";
    cin>>n;
    for(i=3;i<n;i=i*4)
    cout<<i<<endl;
    return 0;
}