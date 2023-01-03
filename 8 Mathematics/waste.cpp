#include<bits/stdc++.h>
using namespace std;
int main(){

  int num;
  cin>>num;
  int k =0;
  for (int i = 2; i < num; ++i)
  {
  	int count = 0;
  	for (int j = 1; j<=i; ++j)
  	{
  		if (i%j==0)
  		{
  		  count++;
  		}
  	}
  	if (count==2)
  	{
  		//cout<<i<<endl;
  		k++;
  	}
  }
  cout<<k;

	return 0 ;
}
