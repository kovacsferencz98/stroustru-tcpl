#include<iostream>
#include <boost/date_time.hpp>
#include<string.h>

using namespace std;

boost::gregorian::date addday(boost::gregorian::date dateObj)
{
    boost::gregorian::days daysObj(1);
    dateObj = dateObj + daysObj;
    return dateObj;
}

boost::gregorian::date addmonth(boost::gregorian::date dateObj)
{
    boost::gregorian::months monthsObj(1);
    dateObj = dateObj + monthsObj;
    return dateObj;
}

boost::gregorian::date addyear(boost::gregorian::date dateObj)
{
    boost::gregorian::years yearsObj(1);
    dateObj = dateObj + yearsObj;
    return dateObj;
}


string dayofweek(boost::gregorian::date dateObj)
{
    string s;
    switch (dateObj.day_of_week())
    {
    case boost::date_time::Sunday: s="Vasarnap"; break;
    case boost::date_time::Saturday: s="Szombat"; break;
    case boost::date_time::Friday: s="Pentek"; break;
    case boost::date_time::Thursday: s="Csutortok"; break;
    case boost::date_time::Wednesday: s="Szerda"; break;
    case boost::date_time::Tuesday: s="Kedd"; break;
    case boost::date_time::Monday: s="Hetfo"; break;

    }

    return s;
}
boost::gregorian::date nexmonday(boost::gregorian::date dateObj)
{
    do
    {
        boost::gregorian::days daysObj(1);
        dateObj = dateObj + daysObj;
    }
    while (dateObj.day_of_week()!=boost::date_time::Monday);
    return dateObj;
}


int main() {

    int year, month, day;
    cout<<"Ev:"  ;
    cin>>year;
    cout<<"Honap:"  ;
    cin>>month;
    cout<<"Nap:"  ;
    cin>>day;

    boost::gregorian::date dateObj { year, month, day };

    cout<< dateObj<<endl;
    cout<<addday(dateObj)<<endl;
    cout<<addmonth(dateObj)<<endl;
    cout<<addyear(dateObj)<<endl;
    cout<<"Ez "<<dayofweek(dateObj)<<" lesz"<<endl;
    cout<<"Kovetkezo hetfo: "<<nexmonday(dateObj);


}
