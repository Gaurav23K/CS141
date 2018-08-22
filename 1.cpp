//include library

#include <iostream>
using namespace std;

int main()
{
float length,meter,kilometer;

//declaring values

cout << "please enter an integer value(the value will be considered in centimeters)";
cin >> length;
cout <<"the value you enterd is "<<length<<endl;

//conversion

meter=length*0.01;
kilometer=length*0.00001;

cout<<"meter=";
cout<<meter<<endl;
cout<<"kilometer=";
cout<<kilometer<<endl;

//DONE!

return 123;

}
