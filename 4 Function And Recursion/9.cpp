#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int gcd;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    int lcm=(a*b)/gcd;
    cout<<lcm;
   return 0;
}
