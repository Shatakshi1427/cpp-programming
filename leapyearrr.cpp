#include<iostream>
using namespace std;
int main()
{
  int year;
  cout<<"Enter the year:";
  cin>>year;
  if(year %4==0)
  {
  cout<<"The given year is a leap year."<<year<<endl;
  }
  else{
  cout<<"The given year is not a leap year."<<year<<endl;
  }
  return 0;
}
