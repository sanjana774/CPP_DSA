/*
Print the alphabet square pattern
A B C D 
A B C D
A B C D
A B C D
*/
#include<iostream>
using namespace std;
int main
()

{
    int i; 
    int j;
    for(i=1;i<=4;i++)
    {
        for(j='A';j<='D';j++)
        {
            cout <<  j << " ";
        }
        cout << endl;
    }
    return 0;
}