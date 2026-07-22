#include<iostream>
using namespace std;
int main()
{
  int integer;
  cout<<"Enter the integer:";
  cin>>integer;
  if(integer>0)
  {
  cout<<"The integer is positive."<<integer<<endl;
  }
  else if(integer<0)
  {
  cout<<"The integer is negative."<<integer<<endl;
  }
  else
  {
  cout<<"The integer is zero."<<integer<<endl;
  }
  return 0;
}
