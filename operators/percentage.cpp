//Q1. Calculating percentage of 5 subjects//
#include<iostream>
using namespace std;
int main()
{
    int maths,phys,chem,eng,hindi,total;
    float percentage;

    cout<<"marks of maths are :";
    cin>>maths;

    cout<<"marks of physics are : ";
    cin>>phys;

    cout<<"marks of chemistry are : ";
    cin>>chem;

    cout<<"marks of english are : ";
    cin>>eng;

    cout<<"marks of hindi are : ";
    cin>>hindi;

    total=(maths+phys+chem+hindi+eng);

    cout<<"average of 5 subjects :"<<total<<endl;

    percentage=(total*100)/500;

    cout<<"percentage of 5 subjects :"<<percentage<<endl;    

    return 0;
}