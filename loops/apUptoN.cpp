//Write a program to display this AP - 1,3,5,7,9.. upto ‘n’ terms. //
#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;
    for(i=1;i<=n;i=i+2)
    cout<<i<<'\n';
    return 0;
}
