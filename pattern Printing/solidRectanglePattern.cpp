/*Print the solid reactangle pattern

*****
*****
*****

*/
#include<iostream>
using namespace std;
int main ()
{
    int i,j;
    for (i=1;i<=3;i++)
    {
        {
            cout << "*"<<endl;
        }
        for(j=1;j<=5;j++)
        {
            cout<< "*";
        }
        
    }    
    cout << i ,j;
    return 0;
}

