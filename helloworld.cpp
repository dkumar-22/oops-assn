#include<iostream>
using namespace std;

int main()
{
    cout<<"\nHello world.";
    char *ch;
    char ch1[10]="Naman";
    ch=ch1;cout<<"\n\n";
    ch++;
    cout<<"\n"<<*ch<<"\n";
    cout<<ch;cout<<"\n\n";
}