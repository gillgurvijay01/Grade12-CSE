/*****Computer Science Practicals(2016-17)**************************
******Program to calculate and print sum of all odd numbers less
******than N,which are not multiple of second odd number*********/
#include<iostream.h>
void main()
{
 int N,sum=0;   //identifier N for limit number and sum declared
 cout<<"\nPlease enter value of N upto which you want to calculate -:";
 cin>>N;
 cout<<"\nThe Numbers are -:"<<endl<<"\t";
 for(int i=1;i<N;i+=2) //loop for getting number and checking it
 {
  if (i%3!=0)
  {
   cout<<i<<endl<<"\t";
   sum+=i;
  }
 }
 cout<<"\n       ___";
 cout<<"\n    Sum="<<sum;//sum printed
 cout<<"\n       ___";
}