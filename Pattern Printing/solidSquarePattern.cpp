/*
WAP to print the solid square pattern
****
****
****
****
*/
#include<iostream>
using namespace std;
int main()
{
    int i;
    for (i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            cout << "*";
        }
        cout <<"\n";
    }
    return 0;
}