#include<iostream.h>
#include<conio.h>
#include<string.h>
int i;
void star()
{
gotoxy(1,4);
for(i=1;i<81;i++)
cout<<"*";
gotoxy(1,21);
for(i=1;i<81;i++)
cout<<"*";
for(i=5;i<21;i++)
{
 gotoxy(1,i);
 cout<<"!";
 gotoxy(80,i);
 cout<<"!";
}
}
void main()
{
 char a[9],ch='Y';
 int j,n,m,o,p=0,b=0,c=0;
 while(ch=='Y'||ch=='y')
 {
  a[0]='1'; a[1]='2'; a[2]='3'; a[3]='4'; a[4]='5'; a[5]='6'; a[6]='7'; a[7]='8'; a[8]='9';
  m=1;
  p++;
  while(1)
  {
   n=0;
   o=1;
   clrscr();
   star();
   if(p>1)
   {
    gotoxy(55,8);
    cout<<"Player 1st    Player 2nd";
    gotoxy(49,9);
    cout<<"WINS      "<<b<<"\t\t"<<c;
   }
   gotoxy(36,6);
   cout<<"TIC TAC TOE";
   gotoxy(3,8);
   cout<<"Player 1st Symbol : X";
   gotoxy(3,9);
   cout<<"Player 2nd Symbol : O";
   gotoxy(36,13);
   for(i=1;i<12;i++)
   cout<<"-";
   gotoxy(36,15);
   for(i=1;i<12;i++)
   cout<<"-";
   for(i=11;i<18;i++)
   {
    gotoxy(39,i);
    cout<<":";
    gotoxy(43,i);
    cout<<":";
   }
   for(i=12;i<18;i+=2)
   {
    for(j=37;j<46;j+=4)
    {
     gotoxy(j,i);
     cout<<a[n];
     n++;
    }
   }
   if((a[0]==a[1]&&a[1]==a[2])||(a[3]==a[4]&&a[4]==a[5])||(a[6]==a[7]&&a[7]==a[8])||(a[0]==a[3]&&a[3]==a[6])||(a[1]==a[4]&&a[4]==a[7])||(a[2]==a[5]&&a[5]==a[8])||(a[0]==a[4]&&a[4]==a[8])||(a[2]==a[4]&&a[4]==a[6]))
   {
    if(m==2)
    {
     gotoxy(35,19);
     cout<<"PLAYER 1st WIN";
     b++;
     if(p>1)
     {
      gotoxy(59,9);
      cout<<b<<"\t\t"<<c;
     }
     getch();
    }
    else
    {
     gotoxy(35,19);
     cout<<"PLAYER 2nd WIN";
     c++;
     if(p>1)
     {
      gotoxy(59,9);
      cout<<b<<"\t\t"<<c;
     }
     getch();
    }
    break;
   }
   if((a[0]=='X'||a[0]=='O')&&(a[1]=='X'||a[1]=='O')&&(a[2]=='X'||a[2]=='O')&&(a[3]=='X'||a[3]=='O')&&(a[4]=='X'||a[4]=='O')&&(a[5]=='X'||a[5]=='O')&&(a[6]=='X'||a[6]=='O')&&(a[7]=='X'||a[7]=='O')&&(a[8]=='X'||a[8]=='O'))
   {
    gotoxy(37,19);
    cout<<"IT'S DRAW";
    getch();
    break;
   }
   if(m==1)
   {
    while(o==1)
    {
     gotoxy(3,19);
     cout<<"Player 1st enter your choice : ";
     cin>>n;
     if(a[n-1]!='X'&&a[n-1]!='O'&&n<10)
     {
      a[n-1] = 'X';
      o=2;
     }
     else
     {
      gotoxy(55,19);
      cout<<"# Not Possible #";
     }
    }
    m=2;
   }
   else
   {
    while(o==1)
    {
     gotoxy(3,19);
     cout<<"Player 2nd enter your choice : ";
     cin>>n;
     if(a[n-1]!='X'&&a[n-1]!='O')
     {
      a[n-1] = 'O';
      o=2;
     }
     else
     {
      gotoxy(55,19);
      cout<<"# Not Possible #";
     }
    }
    m=1;
   }
  }
  clrscr();
  star();
  gotoxy(26,12);
  cout<<"Do You Want To Play Again : ";
  cin>>ch;
  if(p>1&&(ch!='Y'||ch!='y'))
  {
   clrscr();
   star();
   if(b>c)
   {
    gotoxy(36,10);
    cout<<"PLAYER 1st";
    gotoxy(29,12);
    cout<<"\\    /\\    /  |  |\\    |";
    gotoxy(30,13);
    cout<<"\\  /  \\  /   |  |  \\  |";
    gotoxy(31,14);
    cout<<"\\/    \\/    |  |    \\|";
    getch();
   }
   if(b<c)
   {
    gotoxy(36,10);
    cout<<"PLAYER 2nd";
    gotoxy(29,12);
    cout<<"\\    /\\    /  |  |\\    |";
    gotoxy(30,13);
    cout<<"\\  /  \\  /   |  |  \\  |";
    gotoxy(31,14);
    cout<<"\\/    \\/    |  |    \\|";
    getch();
   }
   if(b==c)
   {
    gotoxy(25,11);
    cout<<"___    ___";
    gotoxy(24,12);
    cout<<"|   \\  |   |    /\\    \\    /\\    /";
    gotoxy(24,13);
    cout<<"|   |  |__/    /__\\    \\  /  \\  /";
    gotoxy(24,14);
    cout<<"|___/  |   \\  /    \\    \\/    \\/";
    getch();
   }
  }
 }
}