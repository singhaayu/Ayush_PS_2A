#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<a;
    else if(b>c)
    cout<<b;
    else
    cout<<c;
   return 0;
}#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c&& c==a)
    cout<<"Equilateral";
    else if(a==b||b==c||c==a)
    cout<<"Isosceles";
    else
    cout<<"Scalene";
   return 0;
}
