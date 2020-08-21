#include<iostream>
using namespace std;

#define ld long double
#define d double

ld Power(double m,int n)
{
    int i,a=1;
    for(i=0;i<n;i++)
        a=a*m;

    return a;
}


int main()
{
    int n;
    double m;
    cout<<"\nEnter the base: ";
    cin>>m;
    cout<<"\nEnter the power: ";
    cin>>n;
    cout<<"\n"<<m<<"^"<<n<<" = "<<Power(m,n)<<"\n\n";
    return 0;
}