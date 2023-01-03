#include<bits/stdc++.h>
using namespace std;
void perfectsquare(int *a,int n){

for(int i=0;i<n;i++)
{
	
	for(int j=2;j<a[i];j++)
	{
		if (a[i]/j==j)
		{
	      cout<<a[i]<<endl;

		}
	}
	
	
}


}
int main()


{

int n;
cin>>n;

int a[n];

for(int i=0;i<n;i++)
{
	cin>>a[i];
}

perfectsquare(a,n);


return 0 ;

}