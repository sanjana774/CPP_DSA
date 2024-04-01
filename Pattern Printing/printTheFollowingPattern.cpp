/*
Print the following pattern
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m;
    cout <<"Enter row number :";
    cin >> n;
    cout <<"Enter column number :";
    cin >> m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}