#include<iostream>
using namespace std;
int main()
{
    int row,col,count=1;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<count<<" ";
            count++;
            
            
        }
        cout<<"\n";
    }
    return 0;
    
} 