#include<bits/stdc++.h>
using namespace std;

int main()


{

int n ;
cin>>n;

for(int i=1;i<=n;i++)
{
  cout<<i<<" ";		
}


for(int i=n-1;i>=1;i--)
{
	cout<<i<<" ";
}

cout<<endl;


for(int i=n-1;i>=1;i--)
{
   	for(int j=1;j<=i;j++)
   	{
   		cout<<j<<" ";
   	}
   	  	
   	  	for(int j=1;j<=2*(2*(n-i)-1);j++)
   	  	{
   	  		cout<<" ";
   	  	}
   	  //	cout<<" ";
   	  	for(int j=i;j>=1;j--)
   	  	{
   	  		cout<<j<<" ";
   	  	}
   	  	
   	  	cout<<endl;

}

return 0 ;

}