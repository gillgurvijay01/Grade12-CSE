// This is program to find area of triangle using herons formula

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr ();
 int A,B,C;
 float S,AR;
 cout<<"\nPlease enter first side of triangle :";
 cin>>A;
 cout<<"\nPlease enter second side of triangle:";
 cin>>B;
 cout<<"\nPlease enter third side of triangle :";
 cin>>C;
 if(A+B>C && B+C>A && A+C>B)
 {
    S=(float)(A+B+C)/2;
// R=(S*(S-A)*(S-B)*(S-C));
    AR=sqrt(S*(S-A)*(S-B)*(S-C));
    cout<<"\n\nArea of triangle with sides "<<A<<" "<<B<<" and "<<C<<" is:"<<AR;
 }
 else cout<<"\nTriangle not possible:";
 getch ();
}