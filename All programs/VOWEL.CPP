#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
int fvowelcnt (char *a)
{
 int scnt=0,i=0;
 for (;i<strlen(a);i++)
 {
  switch (a[i])
  {
   case 'a':
   case 'A':
   case 'e':
   case 'E':
   case 'i':
   case 'I':
   case 'o':
   case 'O':
   case 'u':
   case 'U': scnt++;
	     break;
   }
   }
   return (scnt);
   }

   void main()
   {
    clrscr();
    char *b;
    cout<<"\n Please enter text  :";
    gets(b);
    int z;
    z=fvowelcnt(b);
    cout<<"\nNumber of vowels is :"<<z;
    cout<<"\nNumber of bytes consumed =="<<strlen(b);
    getch();
    }

