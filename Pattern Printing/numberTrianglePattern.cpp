/*
WAP TO PRINT THE NUMBER TRIANGULAR PATTERN
1 
1 2 
1 2 3 
1 2 3 4
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout << j;
        }
        cout << endl;
    }
}