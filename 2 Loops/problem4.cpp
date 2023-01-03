#include<bits/stdc++.h>
using namespace std;

int main()


{

int n ;
cin>>n;

char c = 'B';
cout<<"A"<<endl;


for(int i=1;i<n;i++)
{ int   count = 0;
	
   	for(int j=0;j<=i;j++)
    {  
   	   cout<<c<<" ";
   	   c++;
   	   count++;	
   	}
    c=c-count+1;   
   	  	cout<<endl;	
}



return 0 ;

}