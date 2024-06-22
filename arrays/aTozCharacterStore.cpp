//Store character a to z in an array.
#include<iostream>
using namespace std;
int main()
{
    char arr[26];
    
    for(int i = 0;i<26;i++)
    {
        char alphabet = 'a'+ i;
    }
    for(int i = 0;i < 26; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}