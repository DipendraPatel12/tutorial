#include<iostream>
using namespace std;
int main()
{
    cout<<"program to print 1 to 100 even numbers"<<endl;

    for(int i=1;i<=100;i++)
    {

        if(i%2==0)
        {

            cout<<i<<" ";
        }

    }
    cout<<endl;
     cout<<"program to print 1 to 100 odd numbers"<<endl;

    for(int i=1;i<=100;i++)
    {

        if(i%2!=0)
        {

            cout<<i<<" ";
        }

    }
}
