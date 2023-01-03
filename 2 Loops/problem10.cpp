#include<bits/stdc++.h>
using namespace std;

int main()


{

int n ;
cin>>n;
int k = n/2;

int f = n-k;
    	 
    	 for(int i=0;i<f;i++)
    	 {
    	    	for(int j=-0;j<=i-1;j++)
    	    	{ 
    	    		cout<<" ";
    	    	}
    	    	  		
    	    	  		for(int j=1;j<=2*f-2*i-1;j++)
    	    	  		{
    	    	  		   	cout<<"*";
    	    	  		}
    	    	  		
    	  cout<<endl;  	  		
    	 }
 

for(int i=1;i<=k;i++)
{
   
   for(int j=k;j>i;j--)
   {
   	 cout<<" ";
   }

  
  for(int j=1;j<=2*i+1;j++)
  {
  	cout<<"*";
  }
  
  
cout<<endl;
   
}




return 0 ;

}