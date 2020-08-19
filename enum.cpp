#include<iostream>
using namespace std;

enum months{jan=1,feb,mar,apr,may,june,july,aug,sept,octo,nov,decm,wrong};

months convert(string month)
{
    if(month=="january" || month=="1")
        return jan;
    else if(month=="february" || month=="2")
        return feb;
    else if(month=="march" || month=="3")
        return mar;
    else if(month=="april" || month=="4")
        return apr;
    else if(month=="may" || month=="5")
        return may;
    else if(month=="june" || month=="6")
        return june;
    else if(month=="july" || month=="7")
        return july;
    else if(month=="august" || month=="8")
        return aug;
    else if(month=="september" || month=="9")
        return sept;
    else if(month=="october" || month=="10")
        return octo;
    else if(month=="november" || month=="11")
        return nov;
    else if(month=="december" || month=="12")
        return decm;
    else
        return wrong;
}

int main()
{
    string mn;
    cout<<"\nEnter the month name or number: ";
    cin>>mn;
    months month=convert(mn);
    switch(month)
    {
        case decm:
        case jan:
                {
                    cout<<"\nWinter during this month. ";
                    break;
                }
        case feb:
        case mar:
                {
                    cout<<"\nSpring during this month. ";
                    break;
                }
        case apr:
        case may:
        case june:
                {
                    cout<<"\nSummer during this month. ";
                    break;
                }
        case july:
        case aug:
        case sept:
                {
                    cout<<"\nMonsoon during this month. ";
                    break;
                }
        case octo:
        case nov:
                {
                    cout<<"\nAutumn during this month. ";
                    break;
                }
        default: cout<<"\nWrong month entered.";
    }
    return 0;

}