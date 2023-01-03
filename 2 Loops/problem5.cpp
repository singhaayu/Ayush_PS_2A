#include<bits/stdc++.h>
using namespace std;

int main()


{

int n ;
cin>>n;

char  c = 'A';
c = c + (n-1);

 
 for(int i=1;i<=n;i++)
 {   int count = 1;
   for(int j=1 ;j<=i;j++)
   {
             cout<<c;
             c++;
             count++;
   }
   cout<<endl;
   c=c-count;
 }
 
 
 
          
return 0 ;

}