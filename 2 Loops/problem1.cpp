#include<bits/stdc++.h>
using namespace std;

int main()
{
int n ;
cin>>n;

int count = 2;

 cout<<"1"<<endl;


for(int i=1;i<n;i++)
{
   	for(int j=0;j<=i;j++)
   	{
   	   	cout<<count<<" ";

   	   	count++;
   	}
   	cout<<endl;
   	  		count--;
}



  



return 0 ;

}