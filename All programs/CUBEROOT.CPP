//THIS IS A PROGRAM TO FIND CUBE ROOT
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>
void main()
{
 clrscr();
 float a3;
 int a;
 cout<<"\nPlease enter a number:";
 cin>>a;
 a3=pow(a,1.0/3);
 cout<<"\nCube root            ="<<setprecision(2)<<a3;
 getch();
}
