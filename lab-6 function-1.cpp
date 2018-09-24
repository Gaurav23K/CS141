//include library
#include<iostream>
using namespace std;

					//function-Tax rate calculatation
/*Sales tax = Units * Unit Cost * rate
Total = sales tax + (units * unit cost)*/

	int returnvalue(int &a, int &b,int &c)
	{
 	 	
			 cout<< "enter the units = "<<endl;
			 cin>>a;
	 		 cout<< "enter the unitCst = "<<endl;
	 		 cin>>b;
	 		 cout<< "enter the taxRt = "<<endl;
			 cin>>c;
 	 }
					//Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. 	 
 	 void sat(int& a, int& b,int& c)
	{
 	 	
	 	int sat = a*b*c;
	 	cout<< "sales Tax = "<< sat <<endl;
 	 }
 	 void tot(int& a, int& b,int& c)
	{
 	 	
	 	int tot = (a*b*c) + (a*b);
	 	cout<< "total Due = "<< tot <<endl;
 	 }
					//Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very 							readable format. 	 	
	 int read(int& a, int& b,int& c)
	{
	 	  
	 	cout<< "The unit cost over the object is  " <<b<< ". "<<endl<<"The number of units are  "<<a<<". "<<endl<<"The tax rate is  "<<c<<". "<<endl<<"The sales tax is  "<<(a*b*c)<<". "<<endl<<"The total is  "<<(a*b*c)+ (a*b)<<endl; 
	 }
					//Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue.
					//driver function
int main()
	{
	 	
					//call by reference
	 	  	int a,b,c;
			returnvalue(a,b,c);
	 	  	sat(a,b,c);
	 	  	tot(a,b,c);
	 	  	read(a,b,c);

//GETTING TRUE VALUES
	 	  	return 0;
//DONE!!!
	}
