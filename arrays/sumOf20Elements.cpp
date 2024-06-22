// TAKE 20 NUMBERS FROM USER AND CALCULATE THE SUM OF 20 ELEMENTS IN AN ARRAY.
#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[20];
    int sum=0;
    cout<<"Enter 20 elements for sum :";
    // USER INPUT
    for(i=0;i<20;i++)
    cin>>arr[i];
    //CALCULATE SUM OF 20 ELEMENTS
    for(i=0;i<20;i++)
    {
        sum = sum+ arr[i];
    }
    //Print the sum
    cout<<"SUM OF 20 ELEMENTS:"<<sum;;
    return 0;
}