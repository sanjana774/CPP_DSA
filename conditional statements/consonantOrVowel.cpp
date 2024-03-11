//Write a program to check whether a character is an alphabet or not.//
#include<iostream>
using namespace std;
int main()
{
    char character;
    cout<<"enter any character";
    cin>>character;
    if(character>='a'&&character<='z'||character>='A'&&character<='Z')
    {
        cout<<"the entered character is alphabet";
    }    
    else
    {
        cout<<"the entered character is not a alphabet";
    }
    return 0;
}