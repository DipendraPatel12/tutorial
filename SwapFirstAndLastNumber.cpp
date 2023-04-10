#include<iostream>
using namespace std;
int main()
{

    int number;
    cout<<"program to swap first and last digit of any number\n";
    cout<<"enter any digit\n";
    cin>>number;
    int first,last=number%10;
    int cnt=1;
    int num=number;
    while(num>10)
    {
        num=num/10;
        cnt=cnt*10;
    }
    first=(number/cnt);
    number=(number-first*cnt)+(last*cnt)-last+first;
    cout<<"after swaping last and first number\n";
    cout<<"the new number  is "<<number;



}
