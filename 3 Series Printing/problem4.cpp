#include<bits/stdc++.h>
using namespace std;
int main()

{
	int x;
	cin>>x;
   int n ;
   cin>>n;

float sum = 1 ;
   for(int i=1;i<=n-1;i++)
   {   int result = 1;

       result = result*pow(i,i) ;

       	float k = result ;

         	sum += (pow(-1,i)*pow(x,i))/k ;



   }
  
  cout<<sum<<endl;
return 0 ;

}