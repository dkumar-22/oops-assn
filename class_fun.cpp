#include<iostream>
using namespace std;

class add_number
{
    int a,b;

    public:
    void inputnum();
    int add();
    void show();
};

void add_number::inputnum()
{
    cout<<"\nEnter a:";
    cin>>a;
    cout<<"\nEnter b:";
    cin>>b;
}

int add_number::add()
{
    return a+b;
}

void add_number::show()
{
    int ans=add();
    cout<<"\nSum: "<<ans<<"\n\n";
}

int main()
{
    add_number ad;
    ad.inputnum();
    ad.show();
    return 0;
}