/*
A
B C
D E F
G H I J
K L M N O
*/
#include<iostream>
using namespace std;
int main()
{
    char alphabet;
    for(int i=1;i<=5;i++)
    {
        char alphabet='A'+(i-1);
        for(int j=1;j<=i;j++)
        {
            cout << alphabet<<" ";
            alphabet++;
        }
        cout << endl;
    }
    return 0;
}