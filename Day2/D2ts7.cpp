#include <iostream>
using namespace std;
int main()
{
  float num1;
  float num2;
  float num3;
  //Input 
  cout<<"Enter the First Number : ";
  cin>>num1;
  cout<<"Enter the Second Number : ";
  cin>>num2;
  cout<<"Enter the Third Number : ";
  cin>>num3;
  float avg = ( num1 + num2 + num3) /3 ;
  cout<<"The Average of the Given Number : "<<avg<<endl;
  return 0 ;
}