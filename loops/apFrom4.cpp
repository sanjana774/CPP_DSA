//Display this AP - 4,7,10,13,16.. upto ‘n’ terms.//
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter any number :";
    cin>>n;
    for(i=4;i<n;i=i+3)
    cout<<i<<endl;
    return 0;
}