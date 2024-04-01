/*
1
A B
1 2 3
A B C D
1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n;
    int num=1;
    char alpha='A';
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                cout << num << " " ;
                num ++;
            }
            else 
            {
                cout << alpha<< " ";
                alpha ++;
            }
        }
        cout << endl;
    }

    return 0;
}