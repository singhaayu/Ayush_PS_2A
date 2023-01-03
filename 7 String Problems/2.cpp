//Program for reversing the given string (User defined function)
#include<bits/stdc++.h>
using namespace std;
int  coumt = 0 ;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define alice cout<<"Alice"<<endl;
#define bob cout<<"Bob"<<endl;
int function(){

}

int main()
{

	int i,n;
    string str ;
    cin>>str;
    n=str.size();
    for (i=0;i<n/2;i++)
    {
        swap(str[i],str[n-i-1]);
    }
    cout<<"\nAfter reversing string  "<<str;
    return 0;
}