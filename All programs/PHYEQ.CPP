#include<iostream.h>
#include<conio.h>
void main()
{
	int v,u,a,t,s,x;
l1:	cout<<"\nFor calculation in first equation press 1"
	    <<" for second press 2"
	    <<" for third press 3";
	cin>>x;
	if (x>3) goto l1;
	switch(x)
	{
	  case 1:int q;
		 cout<<"\nIf you want to find accelaration press 1"
		     <<"\nIf you want to find final velocity press 2"
		     <<"\nIf you want to find initial velocity press 3"
		     <<"\nIf you want to find time press 4" ;
		     cin>>q;
		 switch (q)
		 {
		  case 1 :cout<<"\nEnter initial velocity";
			  cin>>u;
			  cout<<"\nEnter final velocity";
			  cin>>v;
			  cout<<"\nEnter time";
			  cin>>t;
			  a=(v-u)/t;
			  cout<<"\nAccelaration====="<<a;
			  break;
		  case 2 :cout<<"\nEnter initial velocity";
			  cin>>u;
			  cout<<"\nEnter time";
			  cin>>t;
			  v=u+a*t;
			  cout<<"\nFinal Velocity.. . . ."<<v;
			  break;
		  case 3 :


