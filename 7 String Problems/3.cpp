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

  string str;
  cin>>str;

string a;
a= str;
 reverse(str.begin(),str.end());

if(str.compare(a)==0){
	cout<<"Palindrome"<<endl;
}
else{
	cout<<"not Palindrome"<<endl;
}
return 0 ;

}
