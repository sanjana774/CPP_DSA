// calculate the average of an array of size 18.
#include<iostream>
using namespace std;
int main()
{
    int i, sum=0;
    float size; 
    float arr[18], average;

    cout<<"Enter the size of an array: ";
    cin >> size;

    cout<<"Enter the elements of an array : ";
    for(i = 0; i< 18; i++)
        cin>> arr[i];
    for(i = 0;i<18;i++)
    {
        sum=sum+arr[i];
        if (i==17)
        {
            average = sum/size;
        }
    }
   
    cout<<average;
    return 0;
}