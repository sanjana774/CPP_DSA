/*
Print the given pattern
Number Triangle Flipped
 1
 1 2
 1 2 3
 1 2 3 4
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout << " Enter any number :";
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout <<j;
        }
        cout << " \n";
    }

    return 0;
}