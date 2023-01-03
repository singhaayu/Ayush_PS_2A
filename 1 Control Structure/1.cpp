//zelers formula 
#include<bits/stdc++.h>
using namespace std;

int main()

{
   int month ;
   int date ;
   int year;
   int m ;
   int c;
cout<<"enter date"<<endl;
cin>>date;
cout<<"enter month "<<endl;
cin>>month;
cout<<"enter year"<<endl;
cin>>year;

if((month==1)||(month==10))
  m=1;
else if ((month == 2)||(month==3)||(month==11))
	m = 4;

else if ((month==4)||(month==7))
	 m = 0;  
else if(month==5)
	m==2;
else if (month==6)
	m=5;

else if (month==8)
m = 3;
else if ((month==9)||(month==12))
m= 6;

else
cout<<"wrong value"<<endl;

if((year>=1500)&&(year<=1599))
c = 0 ;

else if ((year>=1600)&&(year<=1699))
	c = 6;
else if ((year>=1700)&&(year<=1799))
	c = 4;

else if ((year>=1800)&&(year<=1899))
	c = 2;

else if ((year>=1900)&&(year<=1999))
	c = 0;

else if ((year>=2000)&&(year<=2099))
	c = 6;
else
	cout<<"wrong input "<<endl;
int g = year%100;
int f = g/4;
int d = date + m+c+g+f;
int day = d%7;if (year%4==0)
{
	day = day - 1;
}

if(day==1)
cout<<"Sunday";
else if(day==2)
cout<<"Monday";
else if(day==3)
cout<<"Tuesday";
else if(day==4)
cout<<"Wednesday";
else if(day==5)
cout<<"Thursday";
else if(day==6)
cout<<"Friday";
else if(day==0)
cout<<"Saturday";
else 
cout<<"Wrong input ";

return 0 ;

}