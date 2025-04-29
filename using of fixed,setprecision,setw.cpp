#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{

 float num1,num2;
 cout << "Enter two numbers = ";
 cin>>num1>>num2 ;
 cout<<fixed;
 cout<<setprecision(2);

 float sum= num1+num2;
 cout <<setw(20)<< "Sum is = " <<sum ;
 cout<<endl;



 float sub= num1-num2;
 cout <<setw(20)<< "Subtraction is = " <<sub ;
 cout<<endl;


 float mul= num1*num2;
 cout << setw(20)<< "Multiplicatin is = " <<mul ;
 cout<<endl;


 float div= num1/num2;
 cout <<setw(20)<< "Division is = " <<div ;
 cout<<endl;

 getch();
}

