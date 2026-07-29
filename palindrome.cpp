#include<iostream>
using namespace std;
int main()
{
  int n,remainder,originalno;
  int reversenum=0;
  cout<<"Enter the number:";
  cin>>n;
  originalno=n;
  while(n>0)
  {
  remainder=n%10;
  reversenum=reversenum*10+remainder;
  n/=10;
  }
  cout<<"The reverse num="<<reversenum<<endl;
  if(reversenum=originalno)
  {
  cout<<"This number is a palindrome number."<<originalno<<endl;
  }
  else
  {
  cout<<"This number is not a palindrome number."<<originalno<<endl;
  }
  return 0;
}
