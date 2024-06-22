#include<iostream>
using namespace std;
int main()
{
    int i , j , n, index;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[6]={9 , 7 , 3 , 10 , 5 , 1};
    for(i=n-1;i>0;i--)
    {
        index=i;
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>arr[index])
            {
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }
    for(i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
