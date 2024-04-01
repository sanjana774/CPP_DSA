/*
*
**
***
****
***
**
*
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n;
    cin >> n;
    int midrow=(n+1)/2;
    
    for(i=1;i<=midrow;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(i=midrow-1;i>=1;--i)
    {
        for(j=1;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
