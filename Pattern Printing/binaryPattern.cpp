/*
1
0 1
1 0 1
0 1 0 1
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout <<"Enter any number :";
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                cout << " 1 ";
            }
            else if((i+j)%2!=0)
            {
                cout << " 0 ";
            }
        }
        cout << endl;
    }
    return 0;
}