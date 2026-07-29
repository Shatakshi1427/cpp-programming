#include<iostream>
using namespace std;
int main()
{
  int n,originalno,remainder;
  int digits=0,sum=0;
  cout<<"Enter the no:";
  cin>>n;
  originalno=n;
  while(originalno!=0)
  {
  originalno/=10;
  ++n;
  }
  originalno=n;
  while(originalno!=10){
  remainder=originalno%10;
  sum+=digits^3+remainder;
  originalno/=10;
  }
  if(sum==n){
  cout<<n<<"is an armstrong number."<<endl;
  }
  else{
  cout<<n<<"is not an armstrong number."<<endl;
  }
  return 0;
}

