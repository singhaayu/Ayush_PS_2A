#include <iostream>
using namespace std;
int main() {
  int num;
  cin >> num;    //Reading input from STDIN
  cout << "Input number is " << num << endl;

for(int i=1;i<=num;i++)
{   
  if(i==1||i==num){
      
      for(int i=0;i<num;i++)
      {
        cout<<"*";
      }
     cout<<endl;
     continue;
  }
  

    for(int j=1;j<=num-i;j++)
    {
            cout<<" ";
    }
          
          cout<<"*"<<endl;
}

return 0 ;
}
