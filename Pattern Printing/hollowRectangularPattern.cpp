/*
WAP to print the hollow rectangular pattern
******
*    *   
*    *
****** 
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {     
        for(j=1;j<=6;j++)        
        {
            if (i==1 || i==4 || j==1 || j==6) 
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout <<endl;
    }
    return 0;
}