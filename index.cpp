#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void checking();
static int rooms=5, non_ac=3, ac=2, n=1, ac1=0, nac1=0,nac2=0, nac3=0, ac2=0, roomno=0;
class common
{ private :
friend class calculator;
public:
char name[100],address[100];

int s;
int key,days,k,p;
void intro();
int asking();
int choice();
void personal();
int detailed();
int  rent(int );
void clear_screen();
};
class ac_room:public common
{
public:
};
class non_acroom:public common
{
public:
};
void main()
{ clrscr();
non_acroom nar[3];
ac_room ar[2];
common c;
int z,t;
c.intro();
do
{  int a=c.asking();
   if(a==1)
   {int b=c.choice();
       if(b==1)
       {
	  if(ac1==0)
	  { roomno=201;
	   ar[0].personal();
	   n=ar[0].rent(b);
	   ac1=1;
	  }
	  else if (ac2==0)
	  {roomno=202;
	   ar[1].personal();
	   n=ar[1].rent(b);
	   ac2=1;

	  }
	  else
	  { cout<<"*******sorry no ac room is available at that time******* "<<endl;
	     c.clear_screen();
	     cout<<"for continue :   press 1"<<endl;
	     cout<<endl<<endl;
	     cin>>z;
	     if(z==1)
	     n=1;
	     else
	     n=0;

	  }
       }
       else if (b==2)
       {  if(nac1==0)
	  {  roomno=301;
	   nar[0].personal();
	   n= nar[0].rent(b);
	   nac1=1;

	  }
	  else if (nac2==0)
	  {roomno=302;
	   nar[1].personal();
	   n=nar[1].rent(b);
	   nac2=1;

	  }
	  else if (nac3==0)
	  { roomno=303;
	   nar[2].personal();
	   n=nar[2].rent(b);
	   nac3=1;
	  }
	  else
	  { cout<<"******* sorry no non ac room is available at that time******** "<<endl;
	    c.clear_screen();
	    cout<<"for continue :   press 1"<<endl;
	     cin>>z;
	     cout<<endl<<endl;
	     if(z==1)
	     n=1;
	     else
	     n=0;

	  }
       }
       else
       {
	 cout<<"wrong entry "<<endl;
	 cout<<"for again :press 1 "<<endl;
	 cout<<"for quit press any key (from 2 to 9)"<<endl;
	 cin>>z;
	 if(z==1)
	 {n=1;}
	 else
	 {n=0;}
       }

   }
   else if(a==2)
   {
     n= c.detailed();
   }
   else if (a==3)
   {
   cout<<"enter room type: "<<endl;
cout<<"for ac : press 1"<<endl<<"for non ac :  press 2"<<endl;
cin>>z;
if(z==1)
{  cout<<"enter your room no"<<endl;
cin>>roomno;
if(roomno==201)
{ ac1=0;
ac++;
rooms++;

cout<<"so your booking is cancel for room no 201 ";
c.clear_screen();
cout<<"for continue  : press 1 "<<endl<<"otherwise press any key( from 2 to 9)";
cin>>t;
cout<<endl;
if(t==1)
n=1;
else
n=0;
}
else if(roomno==202)
{ ac2=0;
ac++;
rooms++;

cout<<"so your booking is cancel for room no 202 ";
c.clear_screen();
cout<<"for continue  : press 1 "<<endl<<"otherwise press any key( from 2 to 9)";
cout<<endl;
cin>>t;
if(t==1)
n=1;
else
n=0;
}
else
{cout<<"your room no is wrong";
n=0;
}
}
else if(z==2)
{
 cout<<"enter your room no"<<endl;
cin>>roomno;
if(roomno==301)
{ nac1=0;
cout<<"*****so your booking is cancel for room no 301****** ";
nac1++;
rooms++;
c.clear_screen();
cout<<"for continue  : press 1 "<<endl<<"otherwise press any key( from 2 to 9)";
cin>>t;
cout<<endl;
if(t==1)
n=1;
else
n=0;
}
else if(roomno==302)
{ nac2=0;
nac2++;
rooms++;

cout<<"so your booking is cancel for room no 302 ";
c.clear_screen();
cout<<"for continue  : press 1 "<<endl<<"otherwise press any key( from 2 to 9)";
cout<<endl<<endl;
cin>>t;
if(t==1)
n=1;
else
n=0;
}
else if(roomno==303)
{ nac3=0;
cout<<"******so your booking is cancel for room no 303***** ";
nac3++;
rooms++;
c.clear_screen();
cout<<"for continue  : press 1 "<<endl<<"otherwise press any key( from 2 to 9)"<<endl;
cin>>t;
cout<<endl<<endl;
if(t==1)
n=1;
else
n=0;
}
else
{cout<<"your room no is wrong"<<endl;
n=0;
break;
}
}
}
else if (a==4)
{
 cout<<"enter room number"<<endl;
 cin>>roomno;
 if(roomno==201)
 {
   if(ac1==1)
   {
   cout<<"name   :   "<<ar[0].name   <<endl;
   cout<<"address  :  "<<ar[0].address<<endl;
   cout<<"booking  :  "<<ar[0].days<<" days "<<endl;
    c.clear_screen();
    cout<<"for continue  : press 1  otherwise press any key (from 2 to 9) "<<endl;
    cin>>t;
    if(t==1)
    n=1;
    else
    n=0;

   }
   else
   {cout<<"sorry ,this is empty room "<<endl;
    c.clear_screen();
    cout<<"for continue  : press 1  otherwise press any key (from 2 to 9) "<<endl;
    cin>>t;
    if(t==1)
    n=1;
    else
    n=0;
   }
 }
else if(roomno==202)
 {
   if(ac2==1)
   {
   cout<<"name   :   "<<ar[1].name   <<endl;
   cout<<"address  :  "<<ar[1].address<<endl;
   cout<<"booking  :  "<<ar[1].days<<" days "<<endl;
       c.clear_screen();
    cout<<"for continue  : press 1  otherwise press any key (from 2 to 9) "<<endl;
    cin>>t;
    if(t==1)
    n=1;
    else
    n=0;

   }
   else
   {cout<<"sorry ,this is empty room "<<endl;
       c.clear_screen();
    cout<<"for continue  : press 1  otherwise press any key (from 2 to 9) "<<endl;
    cin>>t;
    if(t==1)
    n=1;
    else
    n=0;

   }
 }
else if(roomno==301)
 {
   if(nac1==1)
   {
   cout<<"name   :   "<<nar[0].name   <<endl;
   cout<<"address  :  "<<nar[0].address<<endl;
   cout<<"booking  :  "<<nar[0].days<<" days "<<endl;
       c.clear_screen();
    cout<<"for continue  : press 1  otherwise press any key (from 2 to 9) "<<endl;
    cin>>t;
    if(t==1)
    n=1;
    else
    n=0;

   }
   else
   {cout<<"sorry ,this is empty room "<<endl;
       c.clear_screen();
    cout<<"for continue  : press 1  otherwise press any key (from 2 to 9) "<<endl;
    cin>>t;
    if(t==1)
    n=1;
    else
    n=0;

   }
 }
else if(roomno==302)
 {
   if(nac2==1)
   {
   cout<<"name   :   "<<nar[1].name   <<endl;
   cout<<"address  :  "<<nar[1].address<<endl;
   cout<<"booking  :  "<<nar[1].days<<" days "<<endl;
       c.clear_screen();
    cout<<"for continue  : press 1  otherwise press any key (from 2 to 9) "<<endl;
    cin>>t;
    if(t==1)
    n=1;
    else
    n=0;

   }
   else
   {cout<<"sorry ,this is empty room "<<endl;
       c.clear_screen();
    cout<<"for continue  : press 1  otherwise press any key (from 2 to 9) "<<endl;
    cin>>t;
    if(t==1)
    n=1;
    else
    n=0;

   }
 }
else if(roomno==303)
 {
   if(nac3==1)
   {
   cout<<"name   :   "<<nar[3].name   <<endl;
   cout<<"address  :  "<<nar[3].address<<endl;
   cout<<"booking  :  "<<nar[3].days<<" days "<<endl;
       c.clear_screen();
    cout<<"for continue  : press 1  otherwise press any key (from 2 to 9) "<<endl;
    cin>>t;
    if(t==1)
    n=1;
    else
    n=0;

   }
   else
   {cout<<"sorry ,this is empty room "<<endl;
       c.clear_screen();
    cout<<"for continue  : press 1  otherwise press any key (from 2 to 9) "<<endl;
    cin>>t;
    if(t==1)
    n=1;
    else
    n=0;

   }
 }
 else{
 cout<<" your room no is wrong "<<endl;
     c.clear_screen();
    cout<<"for continue  : press 1  otherwise press any key (from 2 to 9) "<<endl;
    cin>>t;
    if(t==1)
    n=1;
    else
    n=0;

 }

}
else if (a==5)
{
cout<<endl<<" room no  :  201  \t ";
cout<<"room type : ac room  \t";
cout<<"rent  :  1000 rs /- day"<<endl;
if(ac1==1)
{
cout<<"name  :  " <<ar[0].name<<"\t";
cout<<"address  :  "<<ar[0].address<<"\t\t";
cout<<"days  :   "<<ar[0].days<<endl;

}
else
{cout<<".....no booking......"<<endl;
}
cout<<endl<<" room no  :  202 \t";
cout<<"room type  :ac room  \t";
cout<<"rent  :  1000 rs /- day"<<endl;
if(ac2==1)
{
cout<<"name  :  " <<ar[1].name<<"\t";
cout<<"\t address  :  "<<ar[1].address<<"\t";
cout<<"days  :   "<<ar[1].days<<endl;

}
else
{cout<<".......no booking......"<<endl;
}
cout<<endl<<" room no  :  301 "<<"\t";
cout<<"room type  : non ac room  "<<"\t";
cout<<"rent  :  800 rs /- day"<<endl;
if(nac1==1)
{
cout<<"name  :  " <<nar[0].name<<"\t";
cout<<"address  :  "<<nar[0].address<<"\t\t";
cout<<"days  :   "<<nar[0].days<<endl;
}
else
{cout<<".....no booking....."<<endl<<endl;
}
cout<<" room no  :  302 "<<"\t";
cout<<"room type :  non ac room  "<<"\t";
cout<<"rent  :  800 rs /- day"<<endl;
if(nac2==1)
{
cout<<"name  :  " <<nar[1].name<<"\t";
cout<<"address  :  "<<nar[1].address<<"\t\t";
cout<<"days  :   "<<nar[1].days<<endl;

}
else
{cout<<"....no booking....."<<endl;
}
cout<<endl<<" room no  :  303 "<<"\t";
cout<<"room type  : non ac room "<<"\t";
cout<<"rent  :  800 rs /- day"<<endl;
if(nac3==1)
{
cout<<"name  :  " <<nar[2].name<<"\t";
cout<<"address  :  "<<nar[2].address<<"\t\t";
cout<<"days  :   "<<nar[2].days<<endl;

}
else
{cout<<"......no booking...."<<endl;
}
     c.clear_screen();
    cout<<"for continue  : press 1  otherwise press any key (from 2 to 9) "<<endl;
    cin>>t;
    if(t==1)
    n=1;
    else
    n=0;





}




  else
  break;

} while (n==1);
  getch();
}
void common::intro()
{cout<<"           .................welcome to hotel ..................."<<endl<<endl;
}
int common::asking()
{cout<<"*****************************************************************************"<<endl;
cout<<"for booking room  :press 1    "<<endl;
cout<<"for information :press 2   "<<endl;
cout<<"for cancelling booking :press 3   "<<endl;
cout<<"for detailed of customer : press 4  "<<endl;
cout<<"for list of all customer  :press 5  "<<endl;
cout<<"for quit:  press any key(from 6 to 9)   "<<endl;
cin>>key;
return(key);

}
int common::choice()
{
cout<<"for ac room  ::press 1"<<endl;
cout<<"for non ac room  ::press  2"<<endl;
cin>>key;
return(key);

}
void  common::personal()
{ cout <<"enter your name     ";
  gets(name);
  cout<<"enter your address      ";
  gets(address);
  cout<<"enter for how many days you want to book your room    ";
  cin>>days;
}
int  common::rent(int y)
{if(y==1)
{
cout<<" total rent :  "<<days*1000<<"  rupees"<<endl;
cout<<"congratulation.....your ac room is booked for  "<<days<<"days"<<endl;
cout<<"******** your room no  : "<<roomno<<"*******"<<endl;
rooms--;
ac--;
clear_screen();
cout<<"for continue  :   press 1";
cin>>p;
cout<<endl;
return p;
}
else if (y==2)
{
cout<<" total rent :  "<<days*800<< " rupees "<<endl;
cout<<"congratulation.....your non ac room is booked for  "<<days<<"days"<<endl;
cout<<"*******your room no :  "<<roomno<<"******"<<endl;
rooms--;
non_ac--;
clear_screen();
cout<<"for continue  : press  1 ";
cin>>p;
cout<<endl<<endl;
return p;
}
else
{
cout<<"wrong entry";
return 0;
}
}
int  common::detailed()
{ cout<<"total available rooms  :  "<<rooms<<endl;
cout<<"available ac rooms  :   "<<ac<<endl;
cout<<"available non ac room  :    "<<non_ac<<endl;
cout<<" price of ac room :  1000 /- per day"<<endl;
cout<<" price of  non ac room is : 800 /- per day"<<endl;
clear_screen();
 cout<<"for continue  : press  1  "<<endl;
 cin>>k;
 return k;
}
void common::clear_screen()
{
cout<<endl<<endl<<"for clear screen : press 9 [your data will not lost]"<<endl;
cout<<"for skip :press( 0 to 8)";
cin>>s;
cout<<endl;
if(s==9)
{
clrscr();
intro();
}
}
