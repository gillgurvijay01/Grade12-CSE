// This is program to find area of reactangle

#include<iostream.h>
#include<conio.h>


void main()
{
 clrscr ();
 float L;
 float B;
 float AR;
 float PM;
 cout<<"\n Please enter length of rectangle:                         ";
 cin>>L;
 cout<<"\n Please enter breadth of reactangle :                      ";
 cin>>B;
 AR=L*B;
 PM=2*(L+B);
 cout<<"\n Area of rectangle with side "<<L<<" and breadth "<<B<<" is:"<<AR;
 cout<<"\n\n Perimeter of rectangle is                               :"<<PM;
getch();
}