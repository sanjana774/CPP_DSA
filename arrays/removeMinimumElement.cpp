#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int ans = INT16_MAX;
    cout<<"Enter the elements of an array :";
    for(int i=0;i<5;i++)
    {        
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]<ans)
        {
            ans= arr[i];
        }
    }
    cout<<ans;
    return 0;
}