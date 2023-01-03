#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;    // number of terms
cin>>n;
int sum = 0 ;
for(int i=1;i<=n;i++){ 
     int result = 1;
     for(int j=i;j>=1;j--){
     	result =result*j;  }
    sum += result ;}
cout<<sum<<endl;
return 0 ;
}