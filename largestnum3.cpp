#include<iostream>
using namespace std;
int main()
{
  int num1,num2,num3;
  cout<<"Enter the three numbers:";
  cin>>num1>>num2>>num3;
  if(num1>num2 && num2>num3)
  {
  cout<<"num1 is greater."<<num1<<endl;
  }
  else if(num2>num1 && num2>num3)
  {
  cout<<"num2 is greater."<<num2<<endl;
  }
  else
  {
  cout<<"num3 is greater."<<num3<<endl;
  }
  return 0;
}
