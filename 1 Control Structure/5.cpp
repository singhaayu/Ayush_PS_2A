#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int d,M,y,a;
    cout<<"Enter date/Month/Year"<<endl;
    cin>>d>>M>>y;
    int F,C;

    if(M==3)
     M=1;
     else if(M==4)
      M=2;
       else if(M==5)
      M=3;
       else if(M==6)
      M=4;
       else if(M==7)
      M=5;
       else if(M==8)
      M=6;
       else if(M==9)
      M=7;
       else if(M==10)
      M=8;
       else if(M==11)
      M=9;
       else if(M==12)
      M=10;
       else if(M==1)
      {M=11; y--;}
       else if(M==2)
      {M=12; y--;}

    int D=y%100;
        C=y/100;
     F = d + ((13*M - 1)/5) + D + (D/4) + (C/4) -2*C;

      if(F>=0){
        a=F%7;
      }
    else
    {
        int q;
        q = F / 7;
        --q;
        q = q * 7;
        a = F - q;
    }
    if(a==1)
    cout<<"Monday";
    else if(a==2)
    cout<<"Tuesday";
    else if(a==3)
    cout<<" Wednesday";
    else if(a==4)
    cout<<"Thursday";
    else if(a==5)
    cout<<" Friday";
    else if(a==6)
    cout<<"Saturday";
     else if(a==7)
    cout<<"Sunday";

   return 0;
}
