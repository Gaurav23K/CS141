//including library
#include <iostream>
using namespace std;

int main()
{

int years,week,days,rmdays;

cout <<"Please enter The no. of days (considering 365 = 1year.)";
cin >> days;
cout <<"The no.of days you entered is ->"<<days<<endl;
years=days/365;
week=(days-years*365)/7;
rmdays=days-years*365-week*7;

cout<<"no.of years = ";
cout<<years<<endl;
cout<<"no.of week = ";
cout<<week<<endl;
cout<<"reamining days =";
cout<<rmdays<<endl;

//DONE
return 569;
}

