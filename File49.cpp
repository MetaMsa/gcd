#include <iostream>
#include <windows.h>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
 int number1,number2,gcd;
 cout<<"Please write a number";
 cin>>number1;
 cout<<"Please write a number";
 cin>>number2;
 if(number1==0 || number2==0)
 {
	 gcd=0;
 }
 else if(number2>number1)
 {
	 if(number2%number1==0)
		gcd=number1;
	 else
	 {
	 for (int i=2;i<=number2;i++)
	 {
	  if(number1%i==0&&number2%i==0)
	  {
	   gcd=i;
	  }
	 }
	 }
 }                          
 else if(number1>number2)
 {
	 if(number1%number2==0)
		 gcd=number2;
	 else
	 {
	   for (int j=2;j<=number1;j++)
	 {
	  if(number1%j==0&&number2%j==0)
	  {   
	   gcd=j;
	  }
	 }
	 }
 }
 else if(number1==number2)
	 gcd=number1;
 cout<<"sayilarin ebobu = "<<gcd;
 cin.get();
 cin.get();
}
