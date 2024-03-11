//Q4. Calculating Simple Interest //
#include<iostream>
using namespace std;
int main()
{
    int p,r,t,SI;
    // P= PRINCIPAL AMMOUNT ,R= RATE OF INTEREST,T=TIME,SI=SIMPLE INTEREST;//

    cout<<"principal :";
    cin>>p;

    cout<<"rate of interest is :";
    cin>>r;
    
    cout<<"time :";
    cin>>t;

    SI=(p*r*t)/100;
    cout<<"simple interest :"<<SI;
    return 0;
}