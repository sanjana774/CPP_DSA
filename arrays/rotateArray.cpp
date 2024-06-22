#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,n,last;
    cin>>n;
    int arr[7]={1,4,5,6,3,2,8};
    last=arr[n-2];
    for(i=n-2;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=last;
    return 0;
}
