#include<bits/stdc++.h>
using namespace std;

int main()


{

  int n;
  cin>>n;
   int sum = 0;

  for(int i=1;i<=n;i++)
  {
     int product = 1;

     for(int j=1;j<=i;j++)
     {
   product=product*j;
     }

      float f = product/i;
      sum+=f;

  }
  
cout<<sum;  


return 0 ;

}