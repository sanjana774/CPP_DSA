/*
12345
1234
123
12
1
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)//for(j=1;j<=5-i+1;j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
