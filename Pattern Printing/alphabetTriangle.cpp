/*
A
A B
A B C
A B C D
A B C D E
*/
#include<iostream>
using namespace std;
int main()
{
    char alphabet;
    for(char i=1;i<=5;i++)
    {
        char alphabet='A';
        for(char j=1;j<=i;j++)
        {
            cout << alphabet;
            alphabet++;
        }
        cout << endl;
    }
    return 0;
}