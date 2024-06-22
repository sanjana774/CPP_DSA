/*
   *
  * *
 * * *
* * * *
* * * *
 * * *
  * *
   *  
*/
#include<iostream>
using namespace std;
int main()
{
    int n,col,row;
    cin>>n;
    for(int row=1;row<=4;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<"*"<<" ";
        }
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        cout << endl;
    }
    for(row=4;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<"*"<<" ";
        }
        for(col=1;col<=4-row;col++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}