//including library
#include <iostream>
using namespace std;

int main()
{
float angle1,angle2,angle3;

cout <<"What is the 1st angle? (Here it is asked for 1st angle of a TRIANGLE)";
cin >>angle1;
cout <<"The 1st angle is "<<angle1<<endl;
cout <<"What is the 2nd angle?";
cin >>angle2;
cout <<"The 2nd angle is "<<angle2<<endl;

//APPLYING FORMULA
angle3=180-(angle1+angle2);

cout <<"3rd angle is equal to ";
cout <<angle3<<endl;

//DONE!
return 63;
}
