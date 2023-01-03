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
         	
         	for(int j=i;j>=1;j--)
         	{
         	   result = result*j; 
         	}
         	
         	int k  = result ;
         	sum += pow(x,i)/k ;


   }
  
  cout<<sum<<endl;
return 0 ;

}