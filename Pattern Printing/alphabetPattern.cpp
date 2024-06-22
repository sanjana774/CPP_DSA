/*
A
B B
C C C
D D D D
E E E E E
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
        }
        cout << endl;
    }
    return 0;
}
