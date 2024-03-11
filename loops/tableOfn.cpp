//Print the table of ‘n’. Here ‘n’ is an integer which the user will input.//
#include<iostream>
using namespace std;
int main()
{
    int i,n,table;
    cout<<"enter any number  :";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        table=i*n;
        cout<<table<<"\n";
    }
    return 0;
}